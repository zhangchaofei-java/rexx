

#ifndef GOOGLE_PROTOBUF_IO_PRINTER_H__
#define GOOGLE_PROTOBUF_IO_PRINTER_H__

#include <string>
#include <map>
#include <vector>
#include <google/protobuf/stubs/common.h>

namespace google {
namespace protobuf {
namespace io {

class ZeroCopyOutputStream;     // zero_copy_stream.h

// Records annotations about a Printer's output.
class LIBPROTOBUF_EXPORT AnnotationCollector {
 public:
  // Records that the bytes in file_path beginning with begin_offset and ending
  // before end_offset are associated with the SourceCodeInfo-style path.
  virtual void AddAnnotation(size_t begin_offset, size_t end_offset,
                             const string& file_path,
                             const vector<int>& path) = 0;

  virtual ~AnnotationCollector() {}
};

// Records annotations about a Printer's output to the given protocol buffer,
// assuming that the buffer has an ::Annotation message exposing path,
// source_file, begin and end fields.
template <typename AnnotationProto>
class AnnotationProtoCollector : public AnnotationCollector {
 public:
  // annotation_proto is the protocol buffer to which new Annotations should be
  // added. It is not owned by the AnnotationProtoCollector.
  explicit AnnotationProtoCollector(AnnotationProto* annotation_proto)
      : annotation_proto_(annotation_proto) {}

  // Override for AnnotationCollector::AddAnnotation.
  virtual void AddAnnotation(size_t begin_offset, size_t end_offset,
                             const string& file_path, const vector<int>& path) {
    typename AnnotationProto::Annotation* annotation =
        annotation_proto_->add_annotation();
    for (int i = 0; i < path.size(); ++i) {
      annotation->add_path(path[i]);
    }
    annotation->set_source_file(file_path);
    annotation->set_begin(begin_offset);
    annotation->set_end(end_offset);
  }

 private:
  // The protocol buffer to which new annotations should be added.
  AnnotationProto* const annotation_proto_;
};

// This simple utility class assists in code generation.  It basically
// allows the caller to define a set of variables and then output some
// text with variable substitutions.  Example usage:
//
//   Printer printer(output, '$');
//   map<string, string> vars;
//   vars["name"] = "Bob";
//   printer.Print(vars, "My name is $name$.");
//
// The above writes "My name is Bob." to the output stream.
//
// Printer aggressively enforces correct usage, crashing (with assert failures)
// in the case of undefined variables in debug builds. This helps greatly in
// debugging code which uses it.
//
// If a Printer is constructed with an AnnotationCollector, it will provide it
// with annotations that connect the Printer's output to paths that can identify
// various descriptors.  In the above example, if person_ is a descriptor that
// identifies Bob, we can associate the output string "My name is Bob." with
// a source path pointing to that descriptor with:
//
//   printer.Annotate("name", person_);
//
// The AnnotationCollector will be sent an annotation linking the output range
// covering "Bob" to the logical path provided by person_.  Tools may use
// this association to (for example) link "Bob" in the output back to the
// source file that defined the person_ descriptor identifying Bob.
//
// Annotate can only examine variables substituted during the last call to
// Print.  It is invalid to refer to a variable that was used multiple times
// in a single Print call.
//
// In full generality, one may specify a range of output text using a beginning
// substitution variable and an ending variable.  The resulting annotation will
// span from the first character of the substituted value for the beginning
// variable to the last character of the substituted value for the ending
// variable.  For example, the Annotate call above is equivalent to this one:
//
//   printer.Annotate("name", "name", person_);
//
// This is useful if multiple variables combine to form a single span of output
// that should be annotated with the same source path.  For example:
//
//   Printer printer(output, '$');
//   map<string, string> vars;
//   vars["first"] = "Alice";
//   vars["last"] = "Smith";
//   printer.Print(vars, "My name is $first$ $last$.");
//   printer.Annotate("first", "last", person_);
//
// This code would associate the span covering "Alice Smith" in the output with
// the person_ descriptor.
//
// Note that the beginning variable must come before (or overlap with, in the
// case of zero-sized substitution values) the ending variable.
//
// It is also sometimes useful to use variables with zero-sized values as
// markers.  This avoids issues with multiple references to the same variable
// and also allows annotation ranges to span literal text from the Print
// templates:
//
//   Printer printer(output, '$');
//   map<string, string> vars;
//   vars["foo"] = "bar";
//   vars["function"] = "call";
//   vars["mark"] = "";
//   printer.Print(vars, "$function$($foo$,$foo$)$mark$");
//   printer.Annotate("function", "rmark", call_);
//
// This code associates the span covering "call(bar,bar)" in the output with the
// call_ descriptor.

class LIBPROTOBUF_EXPORT Printer {
 public:
  // Create a printer that writes text to the given output stream.  Use the
  // given character as the delimiter for variables.
  Printer(ZeroCopyOutputStream* output, char variable_delimiter);

  // Create a printer that writes text to the given output stream.  Use the
  // given character as the delimiter for variables.  If annotation_collector
  // is not null, Printer will provide it with annotations about code written
  // to the stream.  annotation_collector is not owned by Printer.
  Printer(ZeroCopyOutputStream* output, char variable_delimiter,
          AnnotationCollector* annotation_collector);

  ~Printer();

  // Link a subsitution variable emitted by the last call to Print to the object
  // described by descriptor.
  template <typename SomeDescriptor>
  void Annotate(const char* varname, const SomeDescriptor* descriptor) {
    Annotate(varname, varname, descriptor);
  }

  // Link the output range defined by the substitution variables as emitted by
  // the last call to Print to the object described by descriptor. The range
  // begins at begin_varname's value and ends after the last character of the
  // value substituted for end_varname.
  template <typename SomeDescriptor>
  void Annotate(const char* begin_varname, const char* end_varname,
                const SomeDescriptor* descriptor) {
    if (annotation_collector_ == NULL) {
      // Annotations aren't turned on for this Printer, so don't pay the cost
      // of building the location path.
      return;
    }
    vector<int> path;
    descriptor->GetLocationPath(&path);
    Annotate(begin_varname, end_varname, descriptor->file()->name(), path);
  }

  // Link a subsitution variable emitted by the last call to Print to the file
  // with path file_name.
  void Annotate(const char* varname, const string& file_name) {
    Annotate(varname, varname, file_name);
  }

  // Link the output range defined by the substitution variables as emitted by
  // the last call to Print to the file with path file_name. The range begins
  // at begin_varname's value and ends after the last character of the value
  // substituted for end_varname.
  void Annotate(const char* begin_varname, const char* end_varname,
                const string& file_name) {
    if (annotation_collector_ == NULL) {
      // Annotations aren't turned on for this Printer.
      return;
    }
    vector<int> empty_path;
    Annotate(begin_varname, end_varname, file_name, empty_path);
  }

  // Print some text after applying variable substitutions.  If a particular
  // variable in the text is not defined, this will crash.  Variables to be
  // substituted are identified by their names surrounded by delimiter
  // characters (as given to the constructor).  The variable bindings are
  // defined by the given map.
  void Print(const map<string, string>& variables, const char* text);

  // Like the first Print(), except the substitutions are given as parameters.
  void Print(const char* text);
  // Like the first Print(), except the substitutions are given as parameters.
  void Print(const char* text, const char* variable, const string& value);
  // Like the first Print(), except the substitutions are given as parameters.
  void Print(const char* text, const char* variable1, const string& value1,
                               const char* variable2, const string& value2);
  // Like the first Print(), except the substitutions are given as parameters.
  void Print(const char* text, const char* variable1, const string& value1,
                               const char* variable2, const string& value2,
                               const char* variable3, const string& value3);
  // Like the first Print(), except the substitutions are given as parameters.
  void Print(const char* text, const char* variable1, const string& value1,
                               const char* variable2, const string& value2,
                               const char* variable3, const string& value3,
                               const char* variable4, const string& value4);
  // Like the first Print(), except the substitutions are given as parameters.
  void Print(const char* text, const char* variable1, const string& value1,
                               const char* variable2, const string& value2,
                               const char* variable3, const string& value3,
                               const char* variable4, const string& value4,
                               const char* variable5, const string& value5);
  // Like the first Print(), except the substitutions are given as parameters.
  void Print(const char* text, const char* variable1, const string& value1,
                               const char* variable2, const string& value2,
                               const char* variable3, const string& value3,
                               const char* variable4, const string& value4,
                               const char* variable5, const string& value5,
                               const char* variable6, const string& value6);
  // Like the first Print(), except the substitutions are given as parameters.
  void Print(const char* text, const char* variable1, const string& value1,
                               const char* variable2, const string& value2,
                               const char* variable3, const string& value3,
                               const char* variable4, const string& value4,
                               const char* variable5, const string& value5,
                               const char* variable6, const string& value6,
                               const char* variable7, const string& value7);
  // Like the first Print(), except the substitutions are given as parameters.
  void Print(const char* text, const char* variable1, const string& value1,
                               const char* variable2, const string& value2,
                               const char* variable3, const string& value3,
                               const char* variable4, const string& value4,
                               const char* variable5, const string& value5,
                               const char* variable6, const string& value6,
                               const char* variable7, const string& value7,
                               const char* variable8, const string& value8);

  // Indent text by two spaces.  After calling Indent(), two spaces will be
  // inserted at the beginning of each line of text.  Indent() may be called
  // multiple times to produce deeper indents.
  void Indent();

  // Reduces the current indent level by two spaces, or crashes if the indent
  // level is zero.
  void Outdent();

  // Write a string to the output buffer.
  // This method does not look for newlines to add indentation.
  void PrintRaw(const string& data);

  // Write a zero-delimited string to output buffer.
  // This method does not look for newlines to add indentation.
  void PrintRaw(const char* data);

  // Write some bytes to the output buffer.
  // This method does not look for newlines to add indentation.
  void WriteRaw(const char* data, int size);

  // True if any write to the underlying stream failed.  (We don't just
  // crash in this case because this is an I/O failure, not a programming
  // error.)
  bool failed() const { return failed_; }

 private:
  // Link the output range defined by the substitution variables as emitted by
  // the last call to Print to the object found at the SourceCodeInfo-style path
  // in a file with path file_path. The range begins at the start of
  // begin_varname's value and ends after the last character of the value
  // substituted for end_varname. Note that begin_varname and end_varname
  // may refer to the same variable.
  void Annotate(const char* begin_varname, const char* end_varname,
                const string& file_path, const vector<int>& path);

  const char variable_delimiter_;

  ZeroCopyOutputStream* const output_;
  char* buffer_;
  int buffer_size_;
  // The current position, in bytes, in the output stream.  This is equivalent
  // to the total number of bytes that have been written so far.  This value is
  // used to calculate annotation ranges in the substitutions_ map below.
  size_t offset_;

  string indent_;
  bool at_start_of_line_;
  bool failed_;

  // A map from variable name to [start, end) offsets in the output buffer.
  // These refer to the offsets used for a variable after the last call to
  // Print.  If a variable was used more than once, the entry used in
  // this map is set to a negative-length span.  For singly-used variables, the
  // start offset is the beginning of the substitution; the end offset is the
  // last byte of the substitution plus one (such that (end - start) is the
  // length of the substituted string).
  map<string, pair<size_t, size_t> > substitutions_;

  // Returns true and sets range to the substitution range in the output for
  // varname if varname was used once in the last call to Print. If varname
  // was not used, or if it was used multiple times, returns false (and
  // fails a debug assertion).
  bool GetSubstitutionRange(const char* varname, pair<size_t, size_t>* range);

  // If non-null, annotation_collector_ is used to store annotations about
  // generated code.
  AnnotationCollector* const annotation_collector_;

  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(Printer);
};

}  // namespace io
}  // namespace protobuf

}  // namespace google
#endif  // GOOGLE_PROTOBUF_IO_PRINTER_H__

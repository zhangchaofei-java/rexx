
#ifndef GOOGLE_PROTOBUF_DESCRIPTOR_H__
#define GOOGLE_PROTOBUF_DESCRIPTOR_H__

#include <memory>
#ifndef _SHARED_PTR_H
#include <google/protobuf/stubs/shared_ptr.h>
#endif
#include <set>
#include <string>
#include <vector>
#include <google/protobuf/stubs/common.h>

// TYPE_BOOL is defined in the MacOS's ConditionalMacros.h.
#ifdef TYPE_BOOL
#undef TYPE_BOOL
#endif  // TYPE_BOOL

namespace google {
namespace protobuf {

// Defined in this file.
class Descriptor;
class FieldDescriptor;
class OneofDescriptor;
class EnumDescriptor;
class EnumValueDescriptor;
class ServiceDescriptor;
class MethodDescriptor;
class FileDescriptor;
class DescriptorDatabase;
class DescriptorPool;

// Defined in descriptor.proto
class DescriptorProto;
class FieldDescriptorProto;
class OneofDescriptorProto;
class EnumDescriptorProto;
class EnumValueDescriptorProto;
class ServiceDescriptorProto;
class MethodDescriptorProto;
class FileDescriptorProto;
class MessageOptions;
class FieldOptions;
class OneofOptions;
class EnumOptions;
class EnumValueOptions;
class ServiceOptions;
class MethodOptions;
class FileOptions;
class UninterpretedOption;
class SourceCodeInfo;

// Defined in message.h
class Message;

// Defined in descriptor.cc
class DescriptorBuilder;
class FileDescriptorTables;

// Defined in unknown_field_set.h.
class UnknownField;

// Defined in generated_message_reflection.h.
namespace internal {
class GeneratedMessageReflection;
}  // namespace internal

// Defined in command_line_interface.cc
namespace compiler {
class CommandLineInterface;
}  // namespace compiler

namespace descriptor_unittest {
class DescriptorTest;
}  // namespace descriptor_unittest

// Defined in printer.h
namespace io {
class Printer;
}  // namespace io

// NB, all indices are zero-based.
struct SourceLocation {
  int start_line;
  int end_line;
  int start_column;
  int end_column;

  // Doc comments found at the source location.
  // See the comments in SourceCodeInfo.Location (descriptor.proto) for details.
  string leading_comments;
  string trailing_comments;
  vector<string> leading_detached_comments;
};

// Options when generating machine-parsable output from a descriptor with
// DebugString().
struct DebugStringOptions {
  // include original user comments as recorded in SourceLocation entries. N.B.
  // that this must be |false| by default: several other pieces of code (for
  // example, the C++ code generation for fields in the proto compiler) rely on
  // DebugString() output being unobstructed by user comments.
  bool include_comments;
  // If true, elide the braced body in the debug string.
  bool elide_group_body;
  bool elide_oneof_body;

  DebugStringOptions()
      : include_comments(false),
        elide_group_body(false),
        elide_oneof_body(false) {}
};

// Describes a type of protocol message, or a particular group within a
// message.  To obtain the Descriptor for a given message object, call
// Message::GetDescriptor().  Generated message classes also have a
// static method called descriptor() which returns the type's descriptor.
// Use DescriptorPool to construct your own descriptors.
class LIBPROTOBUF_EXPORT Descriptor {
 public:
  // The name of the message type, not including its scope.
  const string& name() const;

  // The fully-qualified name of the message type, scope delimited by
  // periods.  For example, message type "Foo" which is declared in package
  // "bar" has full name "bar.Foo".  If a type "Baz" is nested within
  // Foo, Baz's full_name is "bar.Foo.Baz".  To get only the part that
  // comes after the last '.', use name().
  const string& full_name() const;

  // Index of this descriptor within the file or containing type's message
  // type array.
  int index() const;

  // The .proto file in which this message type was defined.  Never NULL.
  const FileDescriptor* file() const;

  // If this Descriptor describes a nested type, this returns the type
  // in which it is nested.  Otherwise, returns NULL.
  const Descriptor* containing_type() const;

  // Get options for this message type.  These are specified in the .proto file
  // by placing lines like "option foo = 1234;" in the message definition.
  // Allowed options are defined by MessageOptions in
  // google/protobuf/descriptor.proto, and any available extensions of that
  // message.
  const MessageOptions& options() const;

  // Write the contents of this Descriptor into the given DescriptorProto.
  // The target DescriptorProto must be clear before calling this; if it
  // isn't, the result may be garbage.
  void CopyTo(DescriptorProto* proto) const;

  // Write the contents of this decriptor in a human-readable form. Output
  // will be suitable for re-parsing.
  string DebugString() const;

  // Similar to DebugString(), but additionally takes options (e.g.,
  // include original user comments in output).
  string DebugStringWithOptions(const DebugStringOptions& options) const;

  // Returns true if this is a placeholder for an unknown type. This will
  // only be the case if this descriptor comes from a DescriptorPool
  // with AllowUnknownDependencies() set.
  bool is_placeholder() const;

  // Field stuff -----------------------------------------------------

  // The number of fields in this message type.
  int field_count() const;
  // Gets a field by index, where 0 <= index < field_count().
  // These are returned in the order they were defined in the .proto file.
  const FieldDescriptor* field(int index) const;

  // Looks up a field by declared tag number.  Returns NULL if no such field
  // exists.
  const FieldDescriptor* FindFieldByNumber(int number) const;
  // Looks up a field by name.  Returns NULL if no such field exists.
  const FieldDescriptor* FindFieldByName(const string& name) const;

  // Looks up a field by lowercased name (as returned by lowercase_name()).
  // This lookup may be ambiguous if multiple field names differ only by case,
  // in which case the field returned is chosen arbitrarily from the matches.
  const FieldDescriptor* FindFieldByLowercaseName(
      const string& lowercase_name) const;

  // Looks up a field by camel-case name (as returned by camelcase_name()).
  // This lookup may be ambiguous if multiple field names differ in a way that
  // leads them to have identical camel-case names, in which case the field
  // returned is chosen arbitrarily from the matches.
  const FieldDescriptor* FindFieldByCamelcaseName(
      const string& camelcase_name) const;

  // The number of oneofs in this message type.
  int oneof_decl_count() const;
  // Get a oneof by index, where 0 <= index < oneof_decl_count().
  // These are returned in the order they were defined in the .proto file.
  const OneofDescriptor* oneof_decl(int index) const;

  // Looks up a oneof by name.  Returns NULL if no such oneof exists.
  const OneofDescriptor* FindOneofByName(const string& name) const;

  // Nested type stuff -----------------------------------------------

  // The number of nested types in this message type.
  int nested_type_count() const;
  // Gets a nested type by index, where 0 <= index < nested_type_count().
  // These are returned in the order they were defined in the .proto file.
  const Descriptor* nested_type(int index) const;

  // Looks up a nested type by name.  Returns NULL if no such nested type
  // exists.
  const Descriptor* FindNestedTypeByName(const string& name) const;

  // Enum stuff ------------------------------------------------------

  // The number of enum types in this message type.
  int enum_type_count() const;
  // Gets an enum type by index, where 0 <= index < enum_type_count().
  // These are returned in the order they were defined in the .proto file.
  const EnumDescriptor* enum_type(int index) const;

  // Looks up an enum type by name.  Returns NULL if no such enum type exists.
  const EnumDescriptor* FindEnumTypeByName(const string& name) const;

  // Looks up an enum value by name, among all enum types in this message.
  // Returns NULL if no such value exists.
  const EnumValueDescriptor* FindEnumValueByName(const string& name) const;

  // Extensions ------------------------------------------------------

  // A range of field numbers which are designated for third-party
  // extensions.
  struct ExtensionRange {
    int start;  // inclusive
    int end;    // exclusive
  };

  // The number of extension ranges in this message type.
  int extension_range_count() const;
  // Gets an extension range by index, where 0 <= index <
  // extension_range_count(). These are returned in the order they were defined
  // in the .proto file.
  const ExtensionRange* extension_range(int index) const;

  // Returns true if the number is in one of the extension ranges.
  bool IsExtensionNumber(int number) const;

  // Returns NULL if no extension range contains the given number.
  const ExtensionRange* FindExtensionRangeContainingNumber(int number) const;

  // The number of extensions -- extending *other* messages -- that were
  // defined nested within this message type's scope.
  int extension_count() const;
  // Get an extension by index, where 0 <= index < extension_count().
  // These are returned in the order they were defined in the .proto file.
  const FieldDescriptor* extension(int index) const;

  // Looks up a named extension (which extends some *other* message type)
  // defined within this message type's scope.
  const FieldDescriptor* FindExtensionByName(const string& name) const;

  // Similar to FindFieldByLowercaseName(), but finds extensions defined within
  // this message type's scope.
  const FieldDescriptor* FindExtensionByLowercaseName(const string& name) const;

  // Similar to FindFieldByCamelcaseName(), but finds extensions defined within
  // this message type's scope.
  const FieldDescriptor* FindExtensionByCamelcaseName(const string& name) const;

  // Reserved fields -------------------------------------------------

  // A range of reserved field numbers.
  struct ReservedRange {
    int start;  // inclusive
    int end;    // exclusive
  };

  // The number of reserved ranges in this message type.
  int reserved_range_count() const;
  // Gets an reserved range by index, where 0 <= index <
  // reserved_range_count(). These are returned in the order they were defined
  // in the .proto file.
  const ReservedRange* reserved_range(int index) const;

  // Returns true if the number is in one of the reserved ranges.
  bool IsReservedNumber(int number) const;

  // Returns NULL if no reserved range contains the given number.
  const ReservedRange* FindReservedRangeContainingNumber(int number) const;

  // The number of reserved field names in this message type.
  int reserved_name_count() const;

  // Gets a reserved name by index, where 0 <= index < reserved_name_count().
  const string& reserved_name(int index) const;

  // Returns true if the field name is reserved.
  bool IsReservedName(const string& name) const;

  // Source Location ---------------------------------------------------

  // Updates |*out_location| to the source location of the complete
  // extent of this message declaration.  Returns false and leaves
  // |*out_location| unchanged iff location information was not available.
  bool GetSourceLocation(SourceLocation* out_location) const;

 private:
  typedef MessageOptions OptionsType;

  // Allows tests to test CopyTo(proto, true).
  friend class ::google::protobuf::descriptor_unittest::DescriptorTest;

  // Allows access to GetLocationPath for annotations.
  friend class ::google::protobuf::io::Printer;

  // Fill the json_name field of FieldDescriptorProto.
  void CopyJsonNameTo(DescriptorProto* proto) const;

  // Internal version of DebugString; controls the level of indenting for
  // correct depth. Takes |options| to control debug-string options, and
  // |include_opening_clause| to indicate whether the "message ... " part of the
  // clause has already been generated (this varies depending on context).
  void DebugString(int depth, string *contents,
                   const DebugStringOptions& options,
                   bool include_opening_clause) const;

  // Walks up the descriptor tree to generate the source location path
  // to this descriptor from the file root.
  void GetLocationPath(std::vector<int>* output) const;

  const string* name_;
  const string* full_name_;
  const FileDescriptor* file_;
  const Descriptor* containing_type_;
  const MessageOptions* options_;

  // True if this is a placeholder for an unknown type.
  bool is_placeholder_;
  // True if this is a placeholder and the type name wasn't fully-qualified.
  bool is_unqualified_placeholder_;

  int field_count_;
  FieldDescriptor* fields_;
  int oneof_decl_count_;
  OneofDescriptor* oneof_decls_;
  int nested_type_count_;
  Descriptor* nested_types_;
  int enum_type_count_;
  EnumDescriptor* enum_types_;
  int extension_range_count_;
  ExtensionRange* extension_ranges_;
  int extension_count_;
  FieldDescriptor* extensions_;
  int reserved_range_count_;
  ReservedRange* reserved_ranges_;
  int reserved_name_count_;
  const string** reserved_names_;
  // IMPORTANT:  If you add a new field, make sure to search for all instances
  // of Allocate<Descriptor>() and AllocateArray<Descriptor>() in descriptor.cc
  // and update them to initialize the field.

  // Must be constructed using DescriptorPool.
  Descriptor() {}
  friend class DescriptorBuilder;
  friend class EnumDescriptor;
  friend class FieldDescriptor;
  friend class OneofDescriptor;
  friend class MethodDescriptor;
  friend class FileDescriptor;
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(Descriptor);
};

// Describes a single field of a message.  To get the descriptor for a given
// field, first get the Descriptor for the message in which it is defined,
// then call Descriptor::FindFieldByName().  To get a FieldDescriptor for
// an extension, do one of the following:
// - Get the Descriptor or FileDescriptor for its containing scope, then
//   call Descriptor::FindExtensionByName() or
//   FileDescriptor::FindExtensionByName().
// - Given a DescriptorPool, call DescriptorPool::FindExtensionByNumber().
// - Given a Reflection for a message object, call
//   Reflection::FindKnownExtensionByName() or
//   Reflection::FindKnownExtensionByNumber().
// Use DescriptorPool to construct your own descriptors.
class LIBPROTOBUF_EXPORT FieldDescriptor {
 public:
  // Identifies a field type.  0 is reserved for errors.  The order is weird
  // for historical reasons.  Types 12 and up are new in proto2.
  enum Type {
    TYPE_DOUBLE         = 1,   // double, exactly eight bytes on the wire.
    TYPE_FLOAT          = 2,   // float, exactly four bytes on the wire.
    TYPE_INT64          = 3,   // int64, varint on the wire.  Negative numbers
                               // take 10 bytes.  Use TYPE_SINT64 if negative
                               // values are likely.
    TYPE_UINT64         = 4,   // uint64, varint on the wire.
    TYPE_INT32          = 5,   // int32, varint on the wire.  Negative numbers
                               // take 10 bytes.  Use TYPE_SINT32 if negative
                               // values are likely.
    TYPE_FIXED64        = 6,   // uint64, exactly eight bytes on the wire.
    TYPE_FIXED32        = 7,   // uint32, exactly four bytes on the wire.
    TYPE_BOOL           = 8,   // bool, varint on the wire.
    TYPE_STRING         = 9,   // UTF-8 text.
    TYPE_GROUP          = 10,  // Tag-delimited message.  Deprecated.
    TYPE_MESSAGE        = 11,  // Length-delimited message.

    TYPE_BYTES          = 12,  // Arbitrary byte array.
    TYPE_UINT32         = 13,  // uint32, varint on the wire
    TYPE_ENUM           = 14,  // Enum, varint on the wire
    TYPE_SFIXED32       = 15,  // int32, exactly four bytes on the wire
    TYPE_SFIXED64       = 16,  // int64, exactly eight bytes on the wire
    TYPE_SINT32         = 17,  // int32, ZigZag-encoded varint on the wire
    TYPE_SINT64         = 18,  // int64, ZigZag-encoded varint on the wire

    MAX_TYPE            = 18,  // Constant useful for defining lookup tables
                               // indexed by Type.
  };

  // Specifies the C++ data type used to represent the field.  There is a
  // fixed mapping from Type to CppType where each Type maps to exactly one
  // CppType.  0 is reserved for errors.
  enum CppType {
    CPPTYPE_INT32       = 1,     // TYPE_INT32, TYPE_SINT32, TYPE_SFIXED32
    CPPTYPE_INT64       = 2,     // TYPE_INT64, TYPE_SINT64, TYPE_SFIXED64
    CPPTYPE_UINT32      = 3,     // TYPE_UINT32, TYPE_FIXED32
    CPPTYPE_UINT64      = 4,     // TYPE_UINT64, TYPE_FIXED64
    CPPTYPE_DOUBLE      = 5,     // TYPE_DOUBLE
    CPPTYPE_FLOAT       = 6,     // TYPE_FLOAT
    CPPTYPE_BOOL        = 7,     // TYPE_BOOL
    CPPTYPE_ENUM        = 8,     // TYPE_ENUM
    CPPTYPE_STRING      = 9,     // TYPE_STRING, TYPE_BYTES
    CPPTYPE_MESSAGE     = 10,    // TYPE_MESSAGE, TYPE_GROUP

    MAX_CPPTYPE         = 10,    // Constant useful for defining lookup tables
                                 // indexed by CppType.
  };

  // Identifies whether the field is optional, required, or repeated.  0 is
  // reserved for errors.
  enum Label {
    LABEL_OPTIONAL      = 1,    // optional
    LABEL_REQUIRED      = 2,    // required
    LABEL_REPEATED      = 3,    // repeated

    MAX_LABEL           = 3,    // Constant useful for defining lookup tables
                                // indexed by Label.
  };

  // Valid field numbers are positive integers up to kMaxNumber.
  static const int kMaxNumber = (1 << 29) - 1;

  // First field number reserved for the protocol buffer library implementation.
  // Users may not declare fields that use reserved numbers.
  static const int kFirstReservedNumber = 19000;
  // Last field number reserved for the protocol buffer library implementation.
  // Users may not declare fields that use reserved numbers.
  static const int kLastReservedNumber  = 19999;

  const string& name() const;        // Name of this field within the message.
  const string& full_name() const;   // Fully-qualified name of the field.
  const string& json_name() const;   // JSON name of this field.
  const FileDescriptor* file() const;// File in which this field was defined.
  bool is_extension() const;         // Is this an extension field?
  int number() const;                // Declared tag number.

  // Same as name() except converted to lower-case.  This (and especially the
  // FindFieldByLowercaseName() method) can be useful when parsing formats
  // which prefer to use lowercase naming style.  (Although, technically
  // field names should be lowercased anyway according to the protobuf style
  // guide, so this only makes a difference when dealing with old .proto files
  // which do not follow the guide.)
  const string& lowercase_name() const;

  // Same as name() except converted to camel-case.  In this conversion, any
  // time an underscore appears in the name, it is removed and the next
  // letter is capitalized.  Furthermore, the first letter of the name is
  // lower-cased.  Examples:
  //   FooBar -> fooBar
  //   foo_bar -> fooBar
  //   fooBar -> fooBar
  // This (and especially the FindFieldByCamelcaseName() method) can be useful
  // when parsing formats which prefer to use camel-case naming style.
  const string& camelcase_name() const;

  Type type() const;                  // Declared type of this field.
  const char* type_name() const;      // Name of the declared type.
  CppType cpp_type() const;           // C++ type of this field.
  const char* cpp_type_name() const;  // Name of the C++ type.
  Label label() const;                // optional/required/repeated

  bool is_required() const;      // shorthand for label() == LABEL_REQUIRED
  bool is_optional() const;      // shorthand for label() == LABEL_OPTIONAL
  bool is_repeated() const;      // shorthand for label() == LABEL_REPEATED
  bool is_packable() const;      // shorthand for is_repeated() &&
                                 //               IsTypePackable(type())
  bool is_packed() const;        // shorthand for is_packable() &&
                                 //               options().packed()
  bool is_map() const;           // shorthand for type() == TYPE_MESSAGE &&
                                 // message_type()->options().map_entry()

  // Index of this field within the message's field array, or the file or
  // extension scope's extensions array.
  int index() const;

  // Does this field have an explicitly-declared default value?
  bool has_default_value() const;

  // Get the field default value if cpp_type() == CPPTYPE_INT32.  If no
  // explicit default was defined, the default is 0.
  int32 default_value_int32() const;
  // Get the field default value if cpp_type() == CPPTYPE_INT64.  If no
  // explicit default was defined, the default is 0.
  int64 default_value_int64() const;
  // Get the field default value if cpp_type() == CPPTYPE_UINT32.  If no
  // explicit default was defined, the default is 0.
  uint32 default_value_uint32() const;
  // Get the field default value if cpp_type() == CPPTYPE_UINT64.  If no
  // explicit default was defined, the default is 0.
  uint64 default_value_uint64() const;
  // Get the field default value if cpp_type() == CPPTYPE_FLOAT.  If no
  // explicit default was defined, the default is 0.0.
  float default_value_float() const;
  // Get the field default value if cpp_type() == CPPTYPE_DOUBLE.  If no
  // explicit default was defined, the default is 0.0.
  double default_value_double() const;
  // Get the field default value if cpp_type() == CPPTYPE_BOOL.  If no
  // explicit default was defined, the default is false.
  bool default_value_bool() const;
  // Get the field default value if cpp_type() == CPPTYPE_ENUM.  If no
  // explicit default was defined, the default is the first value defined
  // in the enum type (all enum types are required to have at least one value).
  // This never returns NULL.
  const EnumValueDescriptor* default_value_enum() const;
  // Get the field default value if cpp_type() == CPPTYPE_STRING.  If no
  // explicit default was defined, the default is the empty string.
  const string& default_value_string() const;

  // The Descriptor for the message of which this is a field.  For extensions,
  // this is the extended type.  Never NULL.
  const Descriptor* containing_type() const;

  // If the field is a member of a oneof, this is the one, otherwise this is
  // NULL.
  const OneofDescriptor* containing_oneof() const;

  // If the field is a member of a oneof, returns the index in that oneof.
  int index_in_oneof() const;

  // An extension may be declared within the scope of another message.  If this
  // field is an extension (is_extension() is true), then extension_scope()
  // returns that message, or NULL if the extension was declared at global
  // scope.  If this is not an extension, extension_scope() is undefined (may
  // assert-fail).
  const Descriptor* extension_scope() const;

  // If type is TYPE_MESSAGE or TYPE_GROUP, returns a descriptor for the
  // message or the group type.  Otherwise, returns null.
  const Descriptor* message_type() const;
  // If type is TYPE_ENUM, returns a descriptor for the enum.  Otherwise,
  // returns null.
  const EnumDescriptor* enum_type() const;

  // Get the FieldOptions for this field.  This includes things listed in
  // square brackets after the field definition.  E.g., the field:
  //   optional string text = 1 [ctype=CORD];
  // has the "ctype" option set.  Allowed options are defined by FieldOptions
  // in google/protobuf/descriptor.proto, and any available extensions of that
  // message.
  const FieldOptions& options() const;

  // See Descriptor::CopyTo().
  void CopyTo(FieldDescriptorProto* proto) const;

  // See Descriptor::DebugString().
  string DebugString() const;

  // See Descriptor::DebugStringWithOptions().
  string DebugStringWithOptions(const DebugStringOptions& options) const;

  // Helper method to get the CppType for a particular Type.
  static CppType TypeToCppType(Type type);

  // Helper method to get the name of a Type.
  static const char* TypeName(Type type);

  // Helper method to get the name of a CppType.
  static const char* CppTypeName(CppType cpp_type);

  // Return true iff [packed = true] is valid for fields of this type.
  static inline bool IsTypePackable(Type field_type);

  // Source Location ---------------------------------------------------

  // Updates |*out_location| to the source location of the complete
  // extent of this field declaration.  Returns false and leaves
  // |*out_location| unchanged iff location information was not available.
  bool GetSourceLocation(SourceLocation* out_location) const;

 private:
  typedef FieldOptions OptionsType;

  // Allows access to GetLocationPath for annotations.
  friend class ::google::protobuf::io::Printer;

  // Fill the json_name field of FieldDescriptorProto.
  void CopyJsonNameTo(FieldDescriptorProto* proto) const;

  // See Descriptor::DebugString().
  enum PrintLabelFlag { PRINT_LABEL, OMIT_LABEL };
  void DebugString(int depth, PrintLabelFlag print_label_flag,
                   string* contents, const DebugStringOptions& options) const;

  // formats the default value appropriately and returns it as a string.
  // Must have a default value to call this. If quote_string_type is true, then
  // types of CPPTYPE_STRING whill be surrounded by quotes and CEscaped.
  string DefaultValueAsString(bool quote_string_type) const;

  // Helper function that returns the field type name for DebugString.
  string FieldTypeNameDebugString() const;

  // Walks up the descriptor tree to generate the source location path
  // to this descriptor from the file root.
  void GetLocationPath(std::vector<int>* output) const;

  const string* name_;
  const string* full_name_;
  const string* lowercase_name_;
  const string* camelcase_name_;
  // Whether the user has specified the json_name field option in the .proto
  // file.
  bool has_json_name_;
  // If has_json_name_ is true, it's the value specified by the user.
  // Otherwise, it has the same value as lowercase_name_.
  const string* json_name_;
  const FileDescriptor* file_;
  int number_;
  Type type_;
  Label label_;
  bool is_extension_;
  int index_in_oneof_;
  const Descriptor* containing_type_;
  const OneofDescriptor* containing_oneof_;
  const Descriptor* extension_scope_;
  const Descriptor* message_type_;
  const EnumDescriptor* enum_type_;
  const FieldOptions* options_;
  // IMPORTANT:  If you add a new field, make sure to search for all instances
  // of Allocate<FieldDescriptor>() and AllocateArray<FieldDescriptor>() in
  // descriptor.cc and update them to initialize the field.

  bool has_default_value_;
  union {
    int32  default_value_int32_;
    int64  default_value_int64_;
    uint32 default_value_uint32_;
    uint64 default_value_uint64_;
    float  default_value_float_;
    double default_value_double_;
    bool   default_value_bool_;

    const EnumValueDescriptor* default_value_enum_;
    const string* default_value_string_;
  };

  static const CppType kTypeToCppTypeMap[MAX_TYPE + 1];

  static const char * const kTypeToName[MAX_TYPE + 1];

  static const char * const kCppTypeToName[MAX_CPPTYPE + 1];

  static const char * const kLabelToName[MAX_LABEL + 1];

  // Must be constructed using DescriptorPool.
  FieldDescriptor() {}
  friend class DescriptorBuilder;
  friend class FileDescriptor;
  friend class Descriptor;
  friend class OneofDescriptor;
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(FieldDescriptor);
};

// Describes a oneof defined in a message type.
class LIBPROTOBUF_EXPORT OneofDescriptor {
 public:
  const string& name() const;       // Name of this oneof.
  const string& full_name() const;  // Fully-qualified name of the oneof.

  // Index of this oneof within the message's oneof array.
  int index() const;

  // The Descriptor for the message containing this oneof.
  const Descriptor* containing_type() const;

  // The number of (non-extension) fields which are members of this oneof.
  int field_count() const;
  // Get a member of this oneof, in the order in which they were declared in the
  // .proto file.  Does not include extensions.
  const FieldDescriptor* field(int index) const;

  const OneofOptions& options() const;

  // See Descriptor::CopyTo().
  void CopyTo(OneofDescriptorProto* proto) const;

  // See Descriptor::DebugString().
  string DebugString() const;

  // See Descriptor::DebugStringWithOptions().
  string DebugStringWithOptions(const DebugStringOptions& options) const;

  // Source Location ---------------------------------------------------

  // Updates |*out_location| to the source location of the complete
  // extent of this oneof declaration.  Returns false and leaves
  // |*out_location| unchanged iff location information was not available.
  bool GetSourceLocation(SourceLocation* out_location) const;

 private:
  typedef OneofOptions OptionsType;

  // Allows access to GetLocationPath for annotations.
  friend class ::google::protobuf::io::Printer;

  // See Descriptor::DebugString().
  void DebugString(int depth, string* contents,
                   const DebugStringOptions& options) const;

  // Walks up the descriptor tree to generate the source location path
  // to this descriptor from the file root.
  void GetLocationPath(std::vector<int>* output) const;

  const string* name_;
  const string* full_name_;
  const Descriptor* containing_type_;
  bool is_extendable_;
  int field_count_;
  const FieldDescriptor** fields_;
  const OneofOptions* options_;

  // IMPORTANT:  If you add a new field, make sure to search for all instances
  // of Allocate<OneofDescriptor>() and AllocateArray<OneofDescriptor>()
  // in descriptor.cc and update them to initialize the field.

  // Must be constructed using DescriptorPool.
  OneofDescriptor() {}
  friend class DescriptorBuilder;
  friend class Descriptor;
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(OneofDescriptor);
};

// Describes an enum type defined in a .proto file.  To get the EnumDescriptor
// for a generated enum type, call TypeName_descriptor().  Use DescriptorPool
// to construct your own descriptors.
class LIBPROTOBUF_EXPORT EnumDescriptor {
 public:
  // The name of this enum type in the containing scope.
  const string& name() const;

  // The fully-qualified name of the enum type, scope delimited by periods.
  const string& full_name() const;

  // Index of this enum within the file or containing message's enum array.
  int index() const;

  // The .proto file in which this enum type was defined.  Never NULL.
  const FileDescriptor* file() const;

  // The number of values for this EnumDescriptor.  Guaranteed to be greater
  // than zero.
  int value_count() const;
  // Gets a value by index, where 0 <= index < value_count().
  // These are returned in the order they were defined in the .proto file.
  const EnumValueDescriptor* value(int index) const;

  // Looks up a value by name.  Returns NULL if no such value exists.
  const EnumValueDescriptor* FindValueByName(const string& name) const;
  // Looks up a value by number.  Returns NULL if no such value exists.  If
  // multiple values have this number, the first one defined is returned.
  const EnumValueDescriptor* FindValueByNumber(int number) const;

  // If this enum type is nested in a message type, this is that message type.
  // Otherwise, NULL.
  const Descriptor* containing_type() const;

  // Get options for this enum type.  These are specified in the .proto file by
  // placing lines like "option foo = 1234;" in the enum definition.  Allowed
  // options are defined by EnumOptions in google/protobuf/descriptor.proto,
  // and any available extensions of that message.
  const EnumOptions& options() const;

  // See Descriptor::CopyTo().
  void CopyTo(EnumDescriptorProto* proto) const;

  // See Descriptor::DebugString().
  string DebugString() const;

  // See Descriptor::DebugStringWithOptions().
  string DebugStringWithOptions(const DebugStringOptions& options) const;


  // Returns true if this is a placeholder for an unknown enum. This will
  // only be the case if this descriptor comes from a DescriptorPool
  // with AllowUnknownDependencies() set.
  bool is_placeholder() const;

  // Source Location ---------------------------------------------------

  // Updates |*out_location| to the source location of the complete
  // extent of this enum declaration.  Returns false and leaves
  // |*out_location| unchanged iff location information was not available.
  bool GetSourceLocation(SourceLocation* out_location) const;

 private:
  typedef EnumOptions OptionsType;

  // Allows access to GetLocationPath for annotations.
  friend class ::google::protobuf::io::Printer;

  // Looks up a value by number.  If the value does not exist, dynamically
  // creates a new EnumValueDescriptor for that value, assuming that it was
  // unknown. If a new descriptor is created, this is done in a thread-safe way,
  // and future calls will return the same value descriptor pointer.
  //
  // This is private but is used by GeneratedMessageReflection (which is
  // friended below) to return a valid EnumValueDescriptor from GetEnum() when
  // this feature is enabled.
  const EnumValueDescriptor*
      FindValueByNumberCreatingIfUnknown(int number) const;


  // See Descriptor::DebugString().
  void DebugString(int depth, string *contents,
                   const DebugStringOptions& options) const;

  // Walks up the descriptor tree to generate the source location path
  // to this descriptor from the file root.
  void GetLocationPath(std::vector<int>* output) const;

  const string* name_;
  const string* full_name_;
  const FileDescriptor* file_;
  const Descriptor* containing_type_;
  const EnumOptions* options_;

  // True if this is a placeholder for an unknown type.
  bool is_placeholder_;
  // True if this is a placeholder and the type name wasn't fully-qualified.
  bool is_unqualified_placeholder_;

  int value_count_;
  EnumValueDescriptor* values_;
  // IMPORTANT:  If you add a new field, make sure to search for all instances
  // of Allocate<EnumDescriptor>() and AllocateArray<EnumDescriptor>() in
  // descriptor.cc and update them to initialize the field.

  // Must be constructed using DescriptorPool.
  EnumDescriptor() {}
  friend class DescriptorBuilder;
  friend class Descriptor;
  friend class FieldDescriptor;
  friend class EnumValueDescriptor;
  friend class FileDescriptor;
  friend class internal::GeneratedMessageReflection;
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(EnumDescriptor);
};

// Describes an individual enum constant of a particular type.  To get the
// EnumValueDescriptor for a given enum value, first get the EnumDescriptor
// for its type, then use EnumDescriptor::FindValueByName() or
// EnumDescriptor::FindValueByNumber().  Use DescriptorPool to construct
// your own descriptors.
class LIBPROTOBUF_EXPORT EnumValueDescriptor {
 public:
  const string& name() const;  // Name of this enum constant.
  int index() const;           // Index within the enums's Descriptor.
  int number() const;          // Numeric value of this enum constant.

  // The full_name of an enum value is a sibling symbol of the enum type.
  // e.g. the full name of FieldDescriptorProto::TYPE_INT32 is actually
  // "google.protobuf.FieldDescriptorProto.TYPE_INT32", NOT
  // "google.protobuf.FieldDescriptorProto.Type.TYPE_INT32".  This is to conform
  // with C++ scoping rules for enums.
  const string& full_name() const;

  // The type of this value.  Never NULL.
  const EnumDescriptor* type() const;

  // Get options for this enum value.  These are specified in the .proto file
  // by adding text like "[foo = 1234]" after an enum value definition.
  // Allowed options are defined by EnumValueOptions in
  // google/protobuf/descriptor.proto, and any available extensions of that
  // message.
  const EnumValueOptions& options() const;

  // See Descriptor::CopyTo().
  void CopyTo(EnumValueDescriptorProto* proto) const;

  // See Descriptor::DebugString().
  string DebugString() const;

  // See Descriptor::DebugStringWithOptions().
  string DebugStringWithOptions(const DebugStringOptions& options) const;


  // Source Location ---------------------------------------------------

  // Updates |*out_location| to the source location of the complete
  // extent of this enum value declaration.  Returns false and leaves
  // |*out_location| unchanged iff location information was not available.
  bool GetSourceLocation(SourceLocation* out_location) const;

 private:
  typedef EnumValueOptions OptionsType;

  // Allows access to GetLocationPath for annotations.
  friend class ::google::protobuf::io::Printer;

  // See Descriptor::DebugString().
  void DebugString(int depth, string *contents,
                   const DebugStringOptions& options) const;

  // Walks up the descriptor tree to generate the source location path
  // to this descriptor from the file root.
  void GetLocationPath(std::vector<int>* output) const;

  const string* name_;
  const string* full_name_;
  int number_;
  const EnumDescriptor* type_;
  const EnumValueOptions* options_;
  // IMPORTANT:  If you add a new field, make sure to search for all instances
  // of Allocate<EnumValueDescriptor>() and AllocateArray<EnumValueDescriptor>()
  // in descriptor.cc and update them to initialize the field.

  // Must be constructed using DescriptorPool.
  EnumValueDescriptor() {}
  friend class DescriptorBuilder;
  friend class EnumDescriptor;
  friend class FileDescriptorTables;
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(EnumValueDescriptor);
};

// Describes an RPC service.  To get the ServiceDescriptor for a service,
// call Service::GetDescriptor().  Generated service classes also have a
// static method called descriptor() which returns the type's
// ServiceDescriptor.  Use DescriptorPool to construct your own descriptors.
class LIBPROTOBUF_EXPORT ServiceDescriptor {
 public:
  // The name of the service, not including its containing scope.
  const string& name() const;
  // The fully-qualified name of the service, scope delimited by periods.
  const string& full_name() const;
  // Index of this service within the file's services array.
  int index() const;

  // The .proto file in which this service was defined.  Never NULL.
  const FileDescriptor* file() const;

  // Get options for this service type.  These are specified in the .proto file
  // by placing lines like "option foo = 1234;" in the service definition.
  // Allowed options are defined by ServiceOptions in
  // google/protobuf/descriptor.proto, and any available extensions of that
  // message.
  const ServiceOptions& options() const;

  // The number of methods this service defines.
  int method_count() const;
  // Gets a MethodDescriptor by index, where 0 <= index < method_count().
  // These are returned in the order they were defined in the .proto file.
  const MethodDescriptor* method(int index) const;

  // Look up a MethodDescriptor by name.
  const MethodDescriptor* FindMethodByName(const string& name) const;
  // See Descriptor::CopyTo().
  void CopyTo(ServiceDescriptorProto* proto) const;

  // See Descriptor::DebugString().
  string DebugString() const;

  // See Descriptor::DebugStringWithOptions().
  string DebugStringWithOptions(const DebugStringOptions& options) const;


  // Source Location ---------------------------------------------------

  // Updates |*out_location| to the source location of the complete
  // extent of this service declaration.  Returns false and leaves
  // |*out_location| unchanged iff location information was not available.
  bool GetSourceLocation(SourceLocation* out_location) const;

 private:
  typedef ServiceOptions OptionsType;

  // Allows access to GetLocationPath for annotations.
  friend class ::google::protobuf::io::Printer;

  // See Descriptor::DebugString().
  void DebugString(string *contents, const DebugStringOptions& options) const;

  // Walks up the descriptor tree to generate the source location path
  // to this descriptor from the file root.
  void GetLocationPath(std::vector<int>* output) const;

  const string* name_;
  const string* full_name_;
  const FileDescriptor* file_;
  const ServiceOptions* options_;
  int method_count_;
  MethodDescriptor* methods_;
  // IMPORTANT:  If you add a new field, make sure to search for all instances
  // of Allocate<ServiceDescriptor>() and AllocateArray<ServiceDescriptor>() in
  // descriptor.cc and update them to initialize the field.

  // Must be constructed using DescriptorPool.
  ServiceDescriptor() {}
  friend class DescriptorBuilder;
  friend class FileDescriptor;
  friend class MethodDescriptor;
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(ServiceDescriptor);
};

// Describes an individual service method.  To obtain a MethodDescriptor given
// a service, first get its ServiceDescriptor, then call
// ServiceDescriptor::FindMethodByName().  Use DescriptorPool to construct your
// own descriptors.
class LIBPROTOBUF_EXPORT MethodDescriptor {
 public:
  // Name of this method, not including containing scope.
  const string& name() const;
  // The fully-qualified name of the method, scope delimited by periods.
  const string& full_name() const;
  // Index within the service's Descriptor.
  int index() const;

  // Gets the service to which this method belongs.  Never NULL.
  const ServiceDescriptor* service() const;

  // Gets the type of protocol message which this method accepts as input.
  const Descriptor* input_type() const;
  // Gets the type of protocol message which this message produces as output.
  const Descriptor* output_type() const;

  // Gets whether the client streams multiple requests.
  bool client_streaming() const;
  // Gets whether the server streams multiple responses.
  bool server_streaming() const;

  // Get options for this method.  These are specified in the .proto file by
  // placing lines like "option foo = 1234;" in curly-braces after a method
  // declaration.  Allowed options are defined by MethodOptions in
  // google/protobuf/descriptor.proto, and any available extensions of that
  // message.
  const MethodOptions& options() const;

  // See Descriptor::CopyTo().
  void CopyTo(MethodDescriptorProto* proto) const;

  // See Descriptor::DebugString().
  string DebugString() const;

  // See Descriptor::DebugStringWithOptions().
  string DebugStringWithOptions(const DebugStringOptions& options) const;


  // Source Location ---------------------------------------------------

  // Updates |*out_location| to the source location of the complete
  // extent of this method declaration.  Returns false and leaves
  // |*out_location| unchanged iff location information was not available.
  bool GetSourceLocation(SourceLocation* out_location) const;

 private:
  typedef MethodOptions OptionsType;

  // Allows access to GetLocationPath for annotations.
  friend class ::google::protobuf::io::Printer;

  // See Descriptor::DebugString().
  void DebugString(int depth, string *contents,
                   const DebugStringOptions& options) const;

  // Walks up the descriptor tree to generate the source location path
  // to this descriptor from the file root.
  void GetLocationPath(std::vector<int>* output) const;

  const string* name_;
  const string* full_name_;
  const ServiceDescriptor* service_;
  const Descriptor* input_type_;
  const Descriptor* output_type_;
  const MethodOptions* options_;
  bool client_streaming_;
  bool server_streaming_;
  // IMPORTANT:  If you add a new field, make sure to search for all instances
  // of Allocate<MethodDescriptor>() and AllocateArray<MethodDescriptor>() in
  // descriptor.cc and update them to initialize the field.

  // Must be constructed using DescriptorPool.
  MethodDescriptor() {}
  friend class DescriptorBuilder;
  friend class ServiceDescriptor;
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(MethodDescriptor);
};


// Describes a whole .proto file.  To get the FileDescriptor for a compiled-in
// file, get the descriptor for something defined in that file and call
// descriptor->file().  Use DescriptorPool to construct your own descriptors.
class LIBPROTOBUF_EXPORT FileDescriptor {
 public:
  // The filename, relative to the source tree.
  // e.g. "google/protobuf/descriptor.proto"
  const string& name() const;

  // The package, e.g. "google.protobuf.compiler".
  const string& package() const;

  // The DescriptorPool in which this FileDescriptor and all its contents were
  // allocated.  Never NULL.
  const DescriptorPool* pool() const;

  // The number of files imported by this one.
  int dependency_count() const;
  // Gets an imported file by index, where 0 <= index < dependency_count().
  // These are returned in the order they were defined in the .proto file.
  const FileDescriptor* dependency(int index) const;

  // The number of files public imported by this one.
  // The public dependency list is a subset of the dependency list.
  int public_dependency_count() const;
  // Gets a public imported file by index, where 0 <= index <
  // public_dependency_count().
  // These are returned in the order they were defined in the .proto file.
  const FileDescriptor* public_dependency(int index) const;

  // The number of files that are imported for weak fields.
  // The weak dependency list is a subset of the dependency list.
  int weak_dependency_count() const;
  // Gets a weak imported file by index, where 0 <= index <
  // weak_dependency_count().
  // These are returned in the order they were defined in the .proto file.
  const FileDescriptor* weak_dependency(int index) const;

  // Number of top-level message types defined in this file.  (This does not
  // include nested types.)
  int message_type_count() const;
  // Gets a top-level message type, where 0 <= index < message_type_count().
  // These are returned in the order they were defined in the .proto file.
  const Descriptor* message_type(int index) const;

  // Number of top-level enum types defined in this file.  (This does not
  // include nested types.)
  int enum_type_count() const;
  // Gets a top-level enum type, where 0 <= index < enum_type_count().
  // These are returned in the order they were defined in the .proto file.
  const EnumDescriptor* enum_type(int index) const;

  // Number of services defined in this file.
  int service_count() const;
  // Gets a service, where 0 <= index < service_count().
  // These are returned in the order they were defined in the .proto file.
  const ServiceDescriptor* service(int index) const;

  // Number of extensions defined at file scope.  (This does not include
  // extensions nested within message types.)
  int extension_count() const;
  // Gets an extension's descriptor, where 0 <= index < extension_count().
  // These are returned in the order they were defined in the .proto file.
  const FieldDescriptor* extension(int index) const;

  // Get options for this file.  These are specified in the .proto file by
  // placing lines like "option foo = 1234;" at the top level, outside of any
  // other definitions.  Allowed options are defined by FileOptions in
  // google/protobuf/descriptor.proto, and any available extensions of that
  // message.
  const FileOptions& options() const;

  // Syntax of this file.
  enum Syntax {
    SYNTAX_UNKNOWN = 0,
    SYNTAX_PROTO2  = 2,
    SYNTAX_PROTO3  = 3,
  };
  Syntax syntax() const;
  static const char* SyntaxName(Syntax syntax);

  // Find a top-level message type by name.  Returns NULL if not found.
  const Descriptor* FindMessageTypeByName(const string& name) const;
  // Find a top-level enum type by name.  Returns NULL if not found.
  const EnumDescriptor* FindEnumTypeByName(const string& name) const;
  // Find an enum value defined in any top-level enum by name.  Returns NULL if
  // not found.
  const EnumValueDescriptor* FindEnumValueByName(const string& name) const;
  // Find a service definition by name.  Returns NULL if not found.
  const ServiceDescriptor* FindServiceByName(const string& name) const;
  // Find a top-level extension definition by name.  Returns NULL if not found.
  const FieldDescriptor* FindExtensionByName(const string& name) const;
  // Similar to FindExtensionByName(), but searches by lowercased-name.  See
  // Descriptor::FindFieldByLowercaseName().
  const FieldDescriptor* FindExtensionByLowercaseName(const string& name) const;
  // Similar to FindExtensionByName(), but searches by camelcased-name.  See
  // Descriptor::FindFieldByCamelcaseName().
  const FieldDescriptor* FindExtensionByCamelcaseName(const string& name) const;

  // See Descriptor::CopyTo().
  // Notes:
  // - This method does NOT copy source code information since it is relatively
  //   large and rarely needed.  See CopySourceCodeInfoTo() below.
  void CopyTo(FileDescriptorProto* proto) const;
  // Write the source code information of this FileDescriptor into the given
  // FileDescriptorProto.  See CopyTo() above.
  void CopySourceCodeInfoTo(FileDescriptorProto* proto) const;
  // Fill the json_name field of FieldDescriptorProto for all fields. Can only
  // be called after CopyTo().
  void CopyJsonNameTo(FileDescriptorProto* proto) const;

  // See Descriptor::DebugString().
  string DebugString() const;

  // See Descriptor::DebugStringWithOptions().
  string DebugStringWithOptions(const DebugStringOptions& options) const;

  // Returns true if this is a placeholder for an unknown file. This will
  // only be the case if this descriptor comes from a DescriptorPool
  // with AllowUnknownDependencies() set.
  bool is_placeholder() const;

  // Updates |*out_location| to the source location of the complete extent of
  // this file declaration (namely, the empty path).
  bool GetSourceLocation(SourceLocation* out_location) const;

  // Updates |*out_location| to the source location of the complete
  // extent of the declaration or declaration-part denoted by |path|.
  // Returns false and leaves |*out_location| unchanged iff location
  // information was not available.  (See SourceCodeInfo for
  // description of path encoding.)
  bool GetSourceLocation(const std::vector<int>& path,
                         SourceLocation* out_location) const;

 private:
  typedef FileOptions OptionsType;

  const string* name_;
  const string* package_;
  const DescriptorPool* pool_;
  int dependency_count_;
  const FileDescriptor** dependencies_;
  int public_dependency_count_;
  int* public_dependencies_;
  int weak_dependency_count_;
  int* weak_dependencies_;
  int message_type_count_;
  Descriptor* message_types_;
  int enum_type_count_;
  EnumDescriptor* enum_types_;
  int service_count_;
  ServiceDescriptor* services_;
  int extension_count_;
  Syntax syntax_;
  bool is_placeholder_;
  FieldDescriptor* extensions_;
  const FileOptions* options_;

  const FileDescriptorTables* tables_;
  const SourceCodeInfo* source_code_info_;
  // IMPORTANT:  If you add a new field, make sure to search for all instances
  // of Allocate<FileDescriptor>() and AllocateArray<FileDescriptor>() in
  // descriptor.cc and update them to initialize the field.

  FileDescriptor() {}
  friend class DescriptorBuilder;
  friend class Descriptor;
  friend class FieldDescriptor;
  friend class OneofDescriptor;
  friend class EnumDescriptor;
  friend class EnumValueDescriptor;
  friend class MethodDescriptor;
  friend class ServiceDescriptor;
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(FileDescriptor);
};

// ===================================================================

// Used to construct descriptors.
//
// Normally you won't want to build your own descriptors.  Message classes
// constructed by the protocol compiler will provide them for you.  However,
// if you are implementing Message on your own, or if you are writing a
// program which can operate on totally arbitrary types and needs to load
// them from some sort of database, you might need to.
//
// Since Descriptors are composed of a whole lot of cross-linked bits of
// data that would be a pain to put together manually, the
// DescriptorPool class is provided to make the process easier.  It can
// take a FileDescriptorProto (defined in descriptor.proto), validate it,
// and convert it to a set of nicely cross-linked Descriptors.
//
// DescriptorPool also helps with memory management.  Descriptors are
// composed of many objects containing static data and pointers to each
// other.  In all likelihood, when it comes time to delete this data,
// you'll want to delete it all at once.  In fact, it is not uncommon to
// have a whole pool of descriptors all cross-linked with each other which
// you wish to delete all at once.  This class represents such a pool, and
// handles the memory management for you.
//
// You can also search for descriptors within a DescriptorPool by name, and
// extensions by number.
class LIBPROTOBUF_EXPORT DescriptorPool {
 public:
  // Create a normal, empty DescriptorPool.
  DescriptorPool();

  // Constructs a DescriptorPool that, when it can't find something among the
  // descriptors already in the pool, looks for it in the given
  // DescriptorDatabase.
  // Notes:
  // - If a DescriptorPool is constructed this way, its BuildFile*() methods
  //   must not be called (they will assert-fail).  The only way to populate
  //   the pool with descriptors is to call the Find*By*() methods.
  // - The Find*By*() methods may block the calling thread if the
  //   DescriptorDatabase blocks.  This in turn means that parsing messages
  //   may block if they need to look up extensions.
  // - The Find*By*() methods will use mutexes for thread-safety, thus making
  //   them slower even when they don't have to fall back to the database.
  //   In fact, even the Find*By*() methods of descriptor objects owned by
  //   this pool will be slower, since they will have to obtain locks too.
  // - An ErrorCollector may optionally be given to collect validation errors
  //   in files loaded from the database.  If not given, errors will be printed
  //   to GOOGLE_LOG(ERROR).  Remember that files are built on-demand, so this
  //   ErrorCollector may be called from any thread that calls one of the
  //   Find*By*() methods.
  // - The DescriptorDatabase must not be mutated during the lifetime of
  //   the DescriptorPool. Even if the client takes care to avoid data races,
  //   changes to the content of the DescriptorDatabase may not be reflected
  //   in subsequent lookups in the DescriptorPool.
  class ErrorCollector;
  explicit DescriptorPool(DescriptorDatabase* fallback_database,
                          ErrorCollector* error_collector = NULL);

  ~DescriptorPool();

  // Get a pointer to the generated pool.  Generated protocol message classes
  // which are compiled into the binary will allocate their descriptors in
  // this pool.  Do not add your own descriptors to this pool.
  static const DescriptorPool* generated_pool();


  // Find a FileDescriptor in the pool by file name.  Returns NULL if not
  // found.
  const FileDescriptor* FindFileByName(const string& name) const;

  // Find the FileDescriptor in the pool which defines the given symbol.
  // If any of the Find*ByName() methods below would succeed, then this is
  // equivalent to calling that method and calling the result's file() method.
  // Otherwise this returns NULL.
  const FileDescriptor* FindFileContainingSymbol(
      const string& symbol_name) const;

  // Looking up descriptors ------------------------------------------
  // These find descriptors by fully-qualified name.  These will find both
  // top-level descriptors and nested descriptors.  They return NULL if not
  // found.

  const Descriptor* FindMessageTypeByName(const string& name) const;
  const FieldDescriptor* FindFieldByName(const string& name) const;
  const FieldDescriptor* FindExtensionByName(const string& name) const;
  const OneofDescriptor* FindOneofByName(const string& name) const;
  const EnumDescriptor* FindEnumTypeByName(const string& name) const;
  const EnumValueDescriptor* FindEnumValueByName(const string& name) const;
  const ServiceDescriptor* FindServiceByName(const string& name) const;
  const MethodDescriptor* FindMethodByName(const string& name) const;

  // Finds an extension of the given type by number.  The extendee must be
  // a member of this DescriptorPool or one of its underlays.
  const FieldDescriptor* FindExtensionByNumber(const Descriptor* extendee,
                                               int number) const;

  // Finds extensions of extendee. The extensions will be appended to
  // out in an undefined order. Only extensions defined directly in
  // this DescriptorPool or one of its underlays are guaranteed to be
  // found: extensions defined in the fallback database might not be found
  // depending on the database implementation.
  void FindAllExtensions(const Descriptor* extendee,
                         std::vector<const FieldDescriptor*>* out) const;

  // Building descriptors --------------------------------------------

  // When converting a FileDescriptorProto to a FileDescriptor, various
  // errors might be detected in the input.  The caller may handle these
  // programmatically by implementing an ErrorCollector.
  class LIBPROTOBUF_EXPORT ErrorCollector {
   public:
    inline ErrorCollector() {}
    virtual ~ErrorCollector();

    // These constants specify what exact part of the construct is broken.
    // This is useful e.g. for mapping the error back to an exact location
    // in a .proto file.
    enum ErrorLocation {
      NAME,              // the symbol name, or the package name for files
      NUMBER,            // field or extension range number
      TYPE,              // field type
      EXTENDEE,          // field extendee
      DEFAULT_VALUE,     // field default value
      INPUT_TYPE,        // method input type
      OUTPUT_TYPE,       // method output type
      OPTION_NAME,       // name in assignment
      OPTION_VALUE,      // value in option assignment
      OTHER              // some other problem
    };

    // Reports an error in the FileDescriptorProto. Use this function if the
    // problem occurred should interrupt building the FileDescriptorProto.
    virtual void AddError(
      const string& filename,      // File name in which the error occurred.
      const string& element_name,  // Full name of the erroneous element.
      const Message* descriptor,   // Descriptor of the erroneous element.
      ErrorLocation location,      // One of the location constants, above.
      const string& message        // Human-readable error message.
      ) = 0;

    // Reports a warning in the FileDescriptorProto. Use this function if the
    // problem occurred should NOT interrupt building the FileDescriptorProto.
    virtual void AddWarning(
      const string& /*filename*/,      // File name in which the error occurred.
      const string& /*element_name*/,  // Full name of the erroneous element.
      const Message* /*descriptor*/,   // Descriptor of the erroneous element.
      ErrorLocation /*location*/,      // One of the location constants, above.
      const string& /*message*/        // Human-readable error message.
      ) {}

   private:
    GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(ErrorCollector);
  };

  // Convert the FileDescriptorProto to real descriptors and place them in
  // this DescriptorPool.  All dependencies of the file must already be in
  // the pool.  Returns the resulting FileDescriptor, or NULL if there were
  // problems with the input (e.g. the message was invalid, or dependencies
  // were missing).  Details about the errors are written to GOOGLE_LOG(ERROR).
  const FileDescriptor* BuildFile(const FileDescriptorProto& proto);

  // Same as BuildFile() except errors are sent to the given ErrorCollector.
  const FileDescriptor* BuildFileCollectingErrors(
    const FileDescriptorProto& proto,
    ErrorCollector* error_collector);

  // By default, it is an error if a FileDescriptorProto contains references
  // to types or other files that are not found in the DescriptorPool (or its
  // backing DescriptorDatabase, if any).  If you call
  // AllowUnknownDependencies(), however, then unknown types and files
  // will be replaced by placeholder descriptors (which can be identified by
  // the is_placeholder() method).  This can allow you to
  // perform some useful operations with a .proto file even if you do not
  // have access to other .proto files on which it depends.  However, some
  // heuristics must be used to fill in the gaps in information, and these
  // can lead to descriptors which are inaccurate.  For example, the
  // DescriptorPool may be forced to guess whether an unknown type is a message
  // or an enum, as well as what package it resides in.  Furthermore,
  // placeholder types will not be discoverable via FindMessageTypeByName()
  // and similar methods, which could confuse some descriptor-based algorithms.
  // Generally, the results of this option should be handled with extreme care.
  void AllowUnknownDependencies() { allow_unknown_ = true; }

  // By default, weak imports are allowed to be missing, in which case we will
  // use a placeholder for the dependency and convert the field to be an Empty
  // message field. If you call EnforceWeakDependencies(true), however, the
  // DescriptorPool will report a import not found error.
  void EnforceWeakDependencies(bool enforce) { enforce_weak_ = enforce; }

  // Internal stuff --------------------------------------------------
  // These methods MUST NOT be called from outside the proto2 library.
  // These methods may contain hidden pitfalls and may be removed in a
  // future library version.

  // Create a DescriptorPool which is overlaid on top of some other pool.
  // If you search for a descriptor in the overlay and it is not found, the
  // underlay will be searched as a backup.  If the underlay has its own
  // underlay, that will be searched next, and so on.  This also means that
  // files built in the overlay will be cross-linked with the underlay's
  // descriptors if necessary.  The underlay remains property of the caller;
  // it must remain valid for the lifetime of the newly-constructed pool.
  //
  // Example:  Say you want to parse a .proto file at runtime in order to use
  // its type with a DynamicMessage.  Say this .proto file has dependencies,
  // but you know that all the dependencies will be things that are already
  // compiled into the binary.  For ease of use, you'd like to load the types
  // right out of generated_pool() rather than have to parse redundant copies
  // of all these .protos and runtime.  But, you don't want to add the parsed
  // types directly into generated_pool(): this is not allowed, and would be
  // bad design anyway.  So, instead, you could use generated_pool() as an
  // underlay for a new DescriptorPool in which you add only the new file.
  //
  // WARNING:  Use of underlays can lead to many subtle gotchas.  Instead,
  //   try to formulate what you want to do in terms of DescriptorDatabases.
  explicit DescriptorPool(const DescriptorPool* underlay);

  // Called by generated classes at init time to add their descriptors to
  // generated_pool.  Do NOT call this in your own code!  filename must be a
  // permanent string (e.g. a string literal).
  static void InternalAddGeneratedFile(
      const void* encoded_file_descriptor, int size);


  // For internal use only:  Gets a non-const pointer to the generated pool.
  // This is called at static-initialization time only, so thread-safety is
  // not a concern.  If both an underlay and a fallback database are present,
  // the underlay takes precedence.
  static DescriptorPool* internal_generated_pool();

  // For internal use only:  Changes the behavior of BuildFile() such that it
  // allows the file to make reference to message types declared in other files
  // which it did not officially declare as dependencies.
  void InternalDontEnforceDependencies();

  // For internal use only.
  void internal_set_underlay(const DescriptorPool* underlay) {
    underlay_ = underlay;
  }

  // For internal (unit test) use only:  Returns true if a FileDescriptor has
  // been constructed for the given file, false otherwise.  Useful for testing
  // lazy descriptor initialization behavior.
  bool InternalIsFileLoaded(const string& filename) const;


  // Add a file to unused_import_track_files_. DescriptorBuilder will log
  // warnings for those files if there is any unused import.
  void AddUnusedImportTrackFile(const string& file_name);
  void ClearUnusedImportTrackFiles();

 private:
  friend class Descriptor;
  friend class FieldDescriptor;
  friend class EnumDescriptor;
  friend class ServiceDescriptor;
  friend class FileDescriptor;
  friend class DescriptorBuilder;
  friend class FileDescriptorTables;

  // Return true if the given name is a sub-symbol of any non-package
  // descriptor that already exists in the descriptor pool.  (The full
  // definition of such types is already known.)
  bool IsSubSymbolOfBuiltType(const string& name) const;

  // Tries to find something in the fallback database and link in the
  // corresponding proto file.  Returns true if successful, in which case
  // the caller should search for the thing again.  These are declared
  // const because they are called by (semantically) const methods.
  bool TryFindFileInFallbackDatabase(const string& name) const;
  bool TryFindSymbolInFallbackDatabase(const string& name) const;
  bool TryFindExtensionInFallbackDatabase(const Descriptor* containing_type,
                                          int field_number) const;

  // Like BuildFile() but called internally when the file has been loaded from
  // fallback_database_.  Declared const because it is called by (semantically)
  // const methods.
  const FileDescriptor* BuildFileFromDatabase(
    const FileDescriptorProto& proto) const;

  // If fallback_database_ is NULL, this is NULL.  Otherwise, this is a mutex
  // which must be locked while accessing tables_.
  Mutex* mutex_;

  // See constructor.
  DescriptorDatabase* fallback_database_;
  ErrorCollector* default_error_collector_;
  const DescriptorPool* underlay_;

  // This class contains a lot of hash maps with complicated types that
  // we'd like to keep out of the header.
  class Tables;
  google::protobuf::scoped_ptr<Tables> tables_;

  bool enforce_dependencies_;
  bool allow_unknown_;
  bool enforce_weak_;
  std::set<string> unused_import_track_files_;

  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(DescriptorPool);
};

// inline methods ====================================================

// These macros makes this repetitive code more readable.
#define PROTOBUF_DEFINE_ACCESSOR(CLASS, FIELD, TYPE) \
  inline TYPE CLASS::FIELD() const { return FIELD##_; }

// Strings fields are stored as pointers but returned as const references.
#define PROTOBUF_DEFINE_STRING_ACCESSOR(CLASS, FIELD) \
  inline const string& CLASS::FIELD() const { return *FIELD##_; }

// Arrays take an index parameter, obviously.
#define PROTOBUF_DEFINE_ARRAY_ACCESSOR(CLASS, FIELD, TYPE) \
  inline TYPE CLASS::FIELD(int index) const { return FIELD##s_ + index; }

#define PROTOBUF_DEFINE_OPTIONS_ACCESSOR(CLASS, TYPE) \
  inline const TYPE& CLASS::options() const { return *options_; }

PROTOBUF_DEFINE_STRING_ACCESSOR(Descriptor, name)
PROTOBUF_DEFINE_STRING_ACCESSOR(Descriptor, full_name)
PROTOBUF_DEFINE_ACCESSOR(Descriptor, file, const FileDescriptor*)
PROTOBUF_DEFINE_ACCESSOR(Descriptor, containing_type, const Descriptor*)

PROTOBUF_DEFINE_ACCESSOR(Descriptor, field_count, int)
PROTOBUF_DEFINE_ACCESSOR(Descriptor, oneof_decl_count, int)
PROTOBUF_DEFINE_ACCESSOR(Descriptor, nested_type_count, int)
PROTOBUF_DEFINE_ACCESSOR(Descriptor, enum_type_count, int)

PROTOBUF_DEFINE_ARRAY_ACCESSOR(Descriptor, field, const FieldDescriptor*)
PROTOBUF_DEFINE_ARRAY_ACCESSOR(Descriptor, oneof_decl, const OneofDescriptor*)
PROTOBUF_DEFINE_ARRAY_ACCESSOR(Descriptor, nested_type, const Descriptor*)
PROTOBUF_DEFINE_ARRAY_ACCESSOR(Descriptor, enum_type, const EnumDescriptor*)

PROTOBUF_DEFINE_ACCESSOR(Descriptor, extension_range_count, int)
PROTOBUF_DEFINE_ACCESSOR(Descriptor, extension_count, int)
PROTOBUF_DEFINE_ARRAY_ACCESSOR(Descriptor, extension_range,
                               const Descriptor::ExtensionRange*)
PROTOBUF_DEFINE_ARRAY_ACCESSOR(Descriptor, extension,
                               const FieldDescriptor*)

PROTOBUF_DEFINE_ACCESSOR(Descriptor, reserved_range_count, int)
PROTOBUF_DEFINE_ARRAY_ACCESSOR(Descriptor, reserved_range,
                               const Descriptor::ReservedRange*)
PROTOBUF_DEFINE_ACCESSOR(Descriptor, reserved_name_count, int)

PROTOBUF_DEFINE_OPTIONS_ACCESSOR(Descriptor, MessageOptions)
PROTOBUF_DEFINE_ACCESSOR(Descriptor, is_placeholder, bool)

PROTOBUF_DEFINE_STRING_ACCESSOR(FieldDescriptor, name)
PROTOBUF_DEFINE_STRING_ACCESSOR(FieldDescriptor, full_name)
PROTOBUF_DEFINE_STRING_ACCESSOR(FieldDescriptor, json_name)
PROTOBUF_DEFINE_STRING_ACCESSOR(FieldDescriptor, lowercase_name)
PROTOBUF_DEFINE_STRING_ACCESSOR(FieldDescriptor, camelcase_name)
PROTOBUF_DEFINE_ACCESSOR(FieldDescriptor, file, const FileDescriptor*)
PROTOBUF_DEFINE_ACCESSOR(FieldDescriptor, number, int)
PROTOBUF_DEFINE_ACCESSOR(FieldDescriptor, is_extension, bool)
PROTOBUF_DEFINE_ACCESSOR(FieldDescriptor, type, FieldDescriptor::Type)
PROTOBUF_DEFINE_ACCESSOR(FieldDescriptor, label, FieldDescriptor::Label)
PROTOBUF_DEFINE_ACCESSOR(FieldDescriptor, containing_type, const Descriptor*)
PROTOBUF_DEFINE_ACCESSOR(FieldDescriptor, containing_oneof,
                         const OneofDescriptor*)
PROTOBUF_DEFINE_ACCESSOR(FieldDescriptor, index_in_oneof, int)
PROTOBUF_DEFINE_ACCESSOR(FieldDescriptor, extension_scope, const Descriptor*)
PROTOBUF_DEFINE_ACCESSOR(FieldDescriptor, message_type, const Descriptor*)
PROTOBUF_DEFINE_ACCESSOR(FieldDescriptor, enum_type, const EnumDescriptor*)
PROTOBUF_DEFINE_OPTIONS_ACCESSOR(FieldDescriptor, FieldOptions)
PROTOBUF_DEFINE_ACCESSOR(FieldDescriptor, has_default_value, bool)
PROTOBUF_DEFINE_ACCESSOR(FieldDescriptor, default_value_int32 , int32 )
PROTOBUF_DEFINE_ACCESSOR(FieldDescriptor, default_value_int64 , int64 )
PROTOBUF_DEFINE_ACCESSOR(FieldDescriptor, default_value_uint32, uint32)
PROTOBUF_DEFINE_ACCESSOR(FieldDescriptor, default_value_uint64, uint64)
PROTOBUF_DEFINE_ACCESSOR(FieldDescriptor, default_value_float , float )
PROTOBUF_DEFINE_ACCESSOR(FieldDescriptor, default_value_double, double)
PROTOBUF_DEFINE_ACCESSOR(FieldDescriptor, default_value_bool  , bool  )
PROTOBUF_DEFINE_ACCESSOR(FieldDescriptor, default_value_enum,
                         const EnumValueDescriptor*)
PROTOBUF_DEFINE_STRING_ACCESSOR(FieldDescriptor, default_value_string)

PROTOBUF_DEFINE_STRING_ACCESSOR(OneofDescriptor, name)
PROTOBUF_DEFINE_STRING_ACCESSOR(OneofDescriptor, full_name)
PROTOBUF_DEFINE_ACCESSOR(OneofDescriptor, containing_type, const Descriptor*)
PROTOBUF_DEFINE_ACCESSOR(OneofDescriptor, field_count, int)
PROTOBUF_DEFINE_OPTIONS_ACCESSOR(OneofDescriptor, OneofOptions)

PROTOBUF_DEFINE_STRING_ACCESSOR(EnumDescriptor, name)
PROTOBUF_DEFINE_STRING_ACCESSOR(EnumDescriptor, full_name)
PROTOBUF_DEFINE_ACCESSOR(EnumDescriptor, file, const FileDescriptor*)
PROTOBUF_DEFINE_ACCESSOR(EnumDescriptor, containing_type, const Descriptor*)
PROTOBUF_DEFINE_ACCESSOR(EnumDescriptor, value_count, int)
PROTOBUF_DEFINE_ARRAY_ACCESSOR(EnumDescriptor, value,
                               const EnumValueDescriptor*)
PROTOBUF_DEFINE_OPTIONS_ACCESSOR(EnumDescriptor, EnumOptions)
PROTOBUF_DEFINE_ACCESSOR(EnumDescriptor, is_placeholder, bool)

PROTOBUF_DEFINE_STRING_ACCESSOR(EnumValueDescriptor, name)
PROTOBUF_DEFINE_STRING_ACCESSOR(EnumValueDescriptor, full_name)
PROTOBUF_DEFINE_ACCESSOR(EnumValueDescriptor, number, int)
PROTOBUF_DEFINE_ACCESSOR(EnumValueDescriptor, type, const EnumDescriptor*)
PROTOBUF_DEFINE_OPTIONS_ACCESSOR(EnumValueDescriptor, EnumValueOptions)

PROTOBUF_DEFINE_STRING_ACCESSOR(ServiceDescriptor, name)
PROTOBUF_DEFINE_STRING_ACCESSOR(ServiceDescriptor, full_name)
PROTOBUF_DEFINE_ACCESSOR(ServiceDescriptor, file, const FileDescriptor*)
PROTOBUF_DEFINE_ACCESSOR(ServiceDescriptor, method_count, int)
PROTOBUF_DEFINE_ARRAY_ACCESSOR(ServiceDescriptor, method,
                               const MethodDescriptor*)
PROTOBUF_DEFINE_OPTIONS_ACCESSOR(ServiceDescriptor, ServiceOptions)

PROTOBUF_DEFINE_STRING_ACCESSOR(MethodDescriptor, name)
PROTOBUF_DEFINE_STRING_ACCESSOR(MethodDescriptor, full_name)
PROTOBUF_DEFINE_ACCESSOR(MethodDescriptor, service, const ServiceDescriptor*)
PROTOBUF_DEFINE_ACCESSOR(MethodDescriptor, input_type, const Descriptor*)
PROTOBUF_DEFINE_ACCESSOR(MethodDescriptor, output_type, const Descriptor*)
PROTOBUF_DEFINE_OPTIONS_ACCESSOR(MethodDescriptor, MethodOptions)
PROTOBUF_DEFINE_ACCESSOR(MethodDescriptor, client_streaming, bool)
PROTOBUF_DEFINE_ACCESSOR(MethodDescriptor, server_streaming, bool)

PROTOBUF_DEFINE_STRING_ACCESSOR(FileDescriptor, name)
PROTOBUF_DEFINE_STRING_ACCESSOR(FileDescriptor, package)
PROTOBUF_DEFINE_ACCESSOR(FileDescriptor, pool, const DescriptorPool*)
PROTOBUF_DEFINE_ACCESSOR(FileDescriptor, dependency_count, int)
PROTOBUF_DEFINE_ACCESSOR(FileDescriptor, public_dependency_count, int)
PROTOBUF_DEFINE_ACCESSOR(FileDescriptor, weak_dependency_count, int)
PROTOBUF_DEFINE_ACCESSOR(FileDescriptor, message_type_count, int)
PROTOBUF_DEFINE_ACCESSOR(FileDescriptor, enum_type_count, int)
PROTOBUF_DEFINE_ACCESSOR(FileDescriptor, service_count, int)
PROTOBUF_DEFINE_ACCESSOR(FileDescriptor, extension_count, int)
PROTOBUF_DEFINE_OPTIONS_ACCESSOR(FileDescriptor, FileOptions)
PROTOBUF_DEFINE_ACCESSOR(FileDescriptor, is_placeholder, bool)

PROTOBUF_DEFINE_ARRAY_ACCESSOR(FileDescriptor, message_type, const Descriptor*)
PROTOBUF_DEFINE_ARRAY_ACCESSOR(FileDescriptor, enum_type, const EnumDescriptor*)
PROTOBUF_DEFINE_ARRAY_ACCESSOR(FileDescriptor, service,
                               const ServiceDescriptor*)
PROTOBUF_DEFINE_ARRAY_ACCESSOR(FileDescriptor, extension,
                               const FieldDescriptor*)

#undef PROTOBUF_DEFINE_ACCESSOR
#undef PROTOBUF_DEFINE_STRING_ACCESSOR
#undef PROTOBUF_DEFINE_ARRAY_ACCESSOR

// A few accessors differ from the macros...

inline bool Descriptor::IsExtensionNumber(int number) const {
  return FindExtensionRangeContainingNumber(number) != NULL;
}

inline bool Descriptor::IsReservedNumber(int number) const {
  return FindReservedRangeContainingNumber(number) != NULL;
}

inline bool Descriptor::IsReservedName(const string& name) const {
  for (int i = 0; i < reserved_name_count(); i++) {
    if (name == reserved_name(i)) {
      return true;
    }
  }
  return false;
}

// Can't use PROTOBUF_DEFINE_ARRAY_ACCESSOR because reserved_names_ is actually
// an array of pointers rather than the usual array of objects.
inline const string& Descriptor::reserved_name(int index) const {
  return *reserved_names_[index];
}

inline bool FieldDescriptor::is_required() const {
  return label() == LABEL_REQUIRED;
}

inline bool FieldDescriptor::is_optional() const {
  return label() == LABEL_OPTIONAL;
}

inline bool FieldDescriptor::is_repeated() const {
  return label() == LABEL_REPEATED;
}

inline bool FieldDescriptor::is_packable() const {
  return is_repeated() && IsTypePackable(type());
}

// To save space, index() is computed by looking at the descriptor's position
// in the parent's array of children.
inline int FieldDescriptor::index() const {
  if (!is_extension_) {
    return static_cast<int>(this - containing_type_->fields_);
  } else if (extension_scope_ != NULL) {
    return static_cast<int>(this - extension_scope_->extensions_);
  } else {
    return static_cast<int>(this - file_->extensions_);
  }
}

inline int Descriptor::index() const {
  if (containing_type_ == NULL) {
    return static_cast<int>(this - file_->message_types_);
  } else {
    return static_cast<int>(this - containing_type_->nested_types_);
  }
}

inline int OneofDescriptor::index() const {
  return static_cast<int>(this - containing_type_->oneof_decls_);
}

inline int EnumDescriptor::index() const {
  if (containing_type_ == NULL) {
    return static_cast<int>(this - file_->enum_types_);
  } else {
    return static_cast<int>(this - containing_type_->enum_types_);
  }
}

inline int EnumValueDescriptor::index() const {
  return static_cast<int>(this - type_->values_);
}

inline int ServiceDescriptor::index() const {
  return static_cast<int>(this - file_->services_);
}

inline int MethodDescriptor::index() const {
  return static_cast<int>(this - service_->methods_);
}

inline const char* FieldDescriptor::type_name() const {
  return kTypeToName[type_];
}

inline FieldDescriptor::CppType FieldDescriptor::cpp_type() const {
  return kTypeToCppTypeMap[type_];
}

inline const char* FieldDescriptor::cpp_type_name() const {
  return kCppTypeToName[kTypeToCppTypeMap[type_]];
}

inline FieldDescriptor::CppType FieldDescriptor::TypeToCppType(Type type) {
  return kTypeToCppTypeMap[type];
}

inline const char* FieldDescriptor::TypeName(Type type) {
  return kTypeToName[type];
}

inline const char* FieldDescriptor::CppTypeName(CppType cpp_type) {
  return kCppTypeToName[cpp_type];
}

inline bool FieldDescriptor::IsTypePackable(Type field_type) {
  return (field_type != FieldDescriptor::TYPE_STRING &&
          field_type != FieldDescriptor::TYPE_GROUP &&
          field_type != FieldDescriptor::TYPE_MESSAGE &&
          field_type != FieldDescriptor::TYPE_BYTES);
}

inline const FileDescriptor* FileDescriptor::dependency(int index) const {
  return dependencies_[index];
}

inline const FileDescriptor* FileDescriptor::public_dependency(
    int index) const {
  return dependencies_[public_dependencies_[index]];
}

inline const FileDescriptor* FileDescriptor::weak_dependency(
    int index) const {
  return dependencies_[weak_dependencies_[index]];
}

inline FileDescriptor::Syntax FileDescriptor::syntax() const {
  return syntax_;
}

// Can't use PROTOBUF_DEFINE_ARRAY_ACCESSOR because fields_ is actually an array
// of pointers rather than the usual array of objects.
inline const FieldDescriptor* OneofDescriptor::field(int index) const {
  return fields_[index];
}

}  // namespace protobuf

}  // namespace google
#endif  // GOOGLE_PROTOBUF_DESCRIPTOR_H__

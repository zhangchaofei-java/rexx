
#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include <google/protobuf/compiler/plugin.pb.h>

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace google {
namespace protobuf {
namespace compiler {

namespace {

const ::google::protobuf::Descriptor* CodeGeneratorRequest_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  CodeGeneratorRequest_reflection_ = NULL;
const ::google::protobuf::Descriptor* CodeGeneratorResponse_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  CodeGeneratorResponse_reflection_ = NULL;
const ::google::protobuf::Descriptor* CodeGeneratorResponse_File_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  CodeGeneratorResponse_File_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_google_2fprotobuf_2fcompiler_2fplugin_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_google_2fprotobuf_2fcompiler_2fplugin_2eproto() {
  protobuf_AddDesc_google_2fprotobuf_2fcompiler_2fplugin_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "google/protobuf/compiler/plugin.proto");
  GOOGLE_CHECK(file != NULL);
  CodeGeneratorRequest_descriptor_ = file->message_type(0);
  static const int CodeGeneratorRequest_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CodeGeneratorRequest, file_to_generate_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CodeGeneratorRequest, parameter_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CodeGeneratorRequest, proto_file_),
  };
  CodeGeneratorRequest_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      CodeGeneratorRequest_descriptor_,
      CodeGeneratorRequest::default_instance_,
      CodeGeneratorRequest_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CodeGeneratorRequest, _has_bits_[0]),
      -1,
      -1,
      sizeof(CodeGeneratorRequest),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CodeGeneratorRequest, _internal_metadata_),
      -1);
  CodeGeneratorResponse_descriptor_ = file->message_type(1);
  static const int CodeGeneratorResponse_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CodeGeneratorResponse, error_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CodeGeneratorResponse, file_),
  };
  CodeGeneratorResponse_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      CodeGeneratorResponse_descriptor_,
      CodeGeneratorResponse::default_instance_,
      CodeGeneratorResponse_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CodeGeneratorResponse, _has_bits_[0]),
      -1,
      -1,
      sizeof(CodeGeneratorResponse),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CodeGeneratorResponse, _internal_metadata_),
      -1);
  CodeGeneratorResponse_File_descriptor_ = CodeGeneratorResponse_descriptor_->nested_type(0);
  static const int CodeGeneratorResponse_File_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CodeGeneratorResponse_File, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CodeGeneratorResponse_File, insertion_point_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CodeGeneratorResponse_File, content_),
  };
  CodeGeneratorResponse_File_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      CodeGeneratorResponse_File_descriptor_,
      CodeGeneratorResponse_File::default_instance_,
      CodeGeneratorResponse_File_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CodeGeneratorResponse_File, _has_bits_[0]),
      -1,
      -1,
      sizeof(CodeGeneratorResponse_File),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CodeGeneratorResponse_File, _internal_metadata_),
      -1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_google_2fprotobuf_2fcompiler_2fplugin_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      CodeGeneratorRequest_descriptor_, &CodeGeneratorRequest::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      CodeGeneratorResponse_descriptor_, &CodeGeneratorResponse::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      CodeGeneratorResponse_File_descriptor_, &CodeGeneratorResponse_File::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_google_2fprotobuf_2fcompiler_2fplugin_2eproto() {
  delete CodeGeneratorRequest::default_instance_;
  delete CodeGeneratorRequest_reflection_;
  delete CodeGeneratorResponse::default_instance_;
  delete CodeGeneratorResponse_reflection_;
  delete CodeGeneratorResponse_File::default_instance_;
  delete CodeGeneratorResponse_File_reflection_;
}

void protobuf_AddDesc_google_2fprotobuf_2fcompiler_2fplugin_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_google_2fprotobuf_2fcompiler_2fplugin_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::protobuf_AddDesc_google_2fprotobuf_2fdescriptor_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n%google/protobuf/compiler/plugin.proto\022"
    "\030google.protobuf.compiler\032 google/protob"
    "uf/descriptor.proto\"}\n\024CodeGeneratorRequ"
    "est\022\030\n\020file_to_generate\030\001 \003(\t\022\021\n\tparamet"
    "er\030\002 \001(\t\0228\n\nproto_file\030\017 \003(\0132$.google.pr"
    "otobuf.FileDescriptorProto\"\252\001\n\025CodeGener"
    "atorResponse\022\r\n\005error\030\001 \001(\t\022B\n\004file\030\017 \003("
    "\01324.google.protobuf.compiler.CodeGenerat"
    "orResponse.File\032>\n\004File\022\014\n\004name\030\001 \001(\t\022\027\n"
    "\017insertion_point\030\002 \001(\t\022\017\n\007content\030\017 \001(\tB"
    "7\n\034com.google.protobuf.compilerB\014PluginP"
    "rotosZ\tplugin_go", 456);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/protobuf/compiler/plugin.proto", &protobuf_RegisterTypes);
  CodeGeneratorRequest::default_instance_ = new CodeGeneratorRequest();
  CodeGeneratorResponse::default_instance_ = new CodeGeneratorResponse();
  CodeGeneratorResponse_File::default_instance_ = new CodeGeneratorResponse_File();
  CodeGeneratorRequest::default_instance_->InitAsDefaultInstance();
  CodeGeneratorResponse::default_instance_->InitAsDefaultInstance();
  CodeGeneratorResponse_File::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_google_2fprotobuf_2fcompiler_2fplugin_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_google_2fprotobuf_2fcompiler_2fplugin_2eproto {
  StaticDescriptorInitializer_google_2fprotobuf_2fcompiler_2fplugin_2eproto() {
    protobuf_AddDesc_google_2fprotobuf_2fcompiler_2fplugin_2eproto();
  }
} static_descriptor_initializer_google_2fprotobuf_2fcompiler_2fplugin_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int CodeGeneratorRequest::kFileToGenerateFieldNumber;
const int CodeGeneratorRequest::kParameterFieldNumber;
const int CodeGeneratorRequest::kProtoFileFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

CodeGeneratorRequest::CodeGeneratorRequest()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.protobuf.compiler.CodeGeneratorRequest)
}

void CodeGeneratorRequest::InitAsDefaultInstance() {
}

CodeGeneratorRequest::CodeGeneratorRequest(const CodeGeneratorRequest& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:google.protobuf.compiler.CodeGeneratorRequest)
}

void CodeGeneratorRequest::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  parameter_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CodeGeneratorRequest::~CodeGeneratorRequest() {
  // @@protoc_insertion_point(destructor:google.protobuf.compiler.CodeGeneratorRequest)
  SharedDtor();
}

void CodeGeneratorRequest::SharedDtor() {
  parameter_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void CodeGeneratorRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CodeGeneratorRequest::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CodeGeneratorRequest_descriptor_;
}

const CodeGeneratorRequest& CodeGeneratorRequest::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_google_2fprotobuf_2fcompiler_2fplugin_2eproto();
  return *default_instance_;
}

CodeGeneratorRequest* CodeGeneratorRequest::default_instance_ = NULL;

CodeGeneratorRequest* CodeGeneratorRequest::New(::google::protobuf::Arena* arena) const {
  CodeGeneratorRequest* n = new CodeGeneratorRequest;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void CodeGeneratorRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.compiler.CodeGeneratorRequest)
  if (has_parameter()) {
    parameter_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  file_to_generate_.Clear();
  proto_file_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool CodeGeneratorRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.protobuf.compiler.CodeGeneratorRequest)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated string file_to_generate = 1;
      case 1: {
        if (tag == 10) {
         parse_file_to_generate:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_file_to_generate()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->file_to_generate(this->file_to_generate_size() - 1).data(),
            this->file_to_generate(this->file_to_generate_size() - 1).length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "google.protobuf.compiler.CodeGeneratorRequest.file_to_generate");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(10)) goto parse_file_to_generate;
        if (input->ExpectTag(18)) goto parse_parameter;
        break;
      }

      // optional string parameter = 2;
      case 2: {
        if (tag == 18) {
         parse_parameter:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_parameter()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->parameter().data(), this->parameter().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "google.protobuf.compiler.CodeGeneratorRequest.parameter");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(122)) goto parse_proto_file;
        break;
      }

      // repeated .google.protobuf.FileDescriptorProto proto_file = 15;
      case 15: {
        if (tag == 122) {
         parse_proto_file:
          DO_(input->IncrementRecursionDepth());
         parse_loop_proto_file:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_proto_file()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(122)) goto parse_loop_proto_file;
        input->UnsafeDecrementRecursionDepth();
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:google.protobuf.compiler.CodeGeneratorRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.protobuf.compiler.CodeGeneratorRequest)
  return false;
#undef DO_
}

void CodeGeneratorRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.protobuf.compiler.CodeGeneratorRequest)
  // repeated string file_to_generate = 1;
  for (int i = 0; i < this->file_to_generate_size(); i++) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->file_to_generate(i).data(), this->file_to_generate(i).length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.compiler.CodeGeneratorRequest.file_to_generate");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->file_to_generate(i), output);
  }

  // optional string parameter = 2;
  if (has_parameter()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->parameter().data(), this->parameter().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.compiler.CodeGeneratorRequest.parameter");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->parameter(), output);
  }

  // repeated .google.protobuf.FileDescriptorProto proto_file = 15;
  for (unsigned int i = 0, n = this->proto_file_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      15, this->proto_file(i), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:google.protobuf.compiler.CodeGeneratorRequest)
}

::google::protobuf::uint8* CodeGeneratorRequest::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.compiler.CodeGeneratorRequest)
  // repeated string file_to_generate = 1;
  for (int i = 0; i < this->file_to_generate_size(); i++) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->file_to_generate(i).data(), this->file_to_generate(i).length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.compiler.CodeGeneratorRequest.file_to_generate");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(1, this->file_to_generate(i), target);
  }

  // optional string parameter = 2;
  if (has_parameter()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->parameter().data(), this->parameter().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.compiler.CodeGeneratorRequest.parameter");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->parameter(), target);
  }

  // repeated .google.protobuf.FileDescriptorProto proto_file = 15;
  for (unsigned int i = 0, n = this->proto_file_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        15, this->proto_file(i), false, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.compiler.CodeGeneratorRequest)
  return target;
}

int CodeGeneratorRequest::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.compiler.CodeGeneratorRequest)
  int total_size = 0;

  // optional string parameter = 2;
  if (has_parameter()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->parameter());
  }

  // repeated string file_to_generate = 1;
  total_size += 1 * this->file_to_generate_size();
  for (int i = 0; i < this->file_to_generate_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->file_to_generate(i));
  }

  // repeated .google.protobuf.FileDescriptorProto proto_file = 15;
  total_size += 1 * this->proto_file_size();
  for (int i = 0; i < this->proto_file_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->proto_file(i));
  }

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void CodeGeneratorRequest::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.protobuf.compiler.CodeGeneratorRequest)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const CodeGeneratorRequest* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const CodeGeneratorRequest>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.protobuf.compiler.CodeGeneratorRequest)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.protobuf.compiler.CodeGeneratorRequest)
    MergeFrom(*source);
  }
}

void CodeGeneratorRequest::MergeFrom(const CodeGeneratorRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.compiler.CodeGeneratorRequest)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  file_to_generate_.MergeFrom(from.file_to_generate_);
  proto_file_.MergeFrom(from.proto_file_);
  if (from._has_bits_[1 / 32] & (0xffu << (1 % 32))) {
    if (from.has_parameter()) {
      set_has_parameter();
      parameter_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.parameter_);
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void CodeGeneratorRequest::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.protobuf.compiler.CodeGeneratorRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CodeGeneratorRequest::CopyFrom(const CodeGeneratorRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.compiler.CodeGeneratorRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CodeGeneratorRequest::IsInitialized() const {

  if (!::google::protobuf::internal::AllAreInitialized(this->proto_file())) return false;
  return true;
}

void CodeGeneratorRequest::Swap(CodeGeneratorRequest* other) {
  if (other == this) return;
  InternalSwap(other);
}
void CodeGeneratorRequest::InternalSwap(CodeGeneratorRequest* other) {
  file_to_generate_.UnsafeArenaSwap(&other->file_to_generate_);
  parameter_.Swap(&other->parameter_);
  proto_file_.UnsafeArenaSwap(&other->proto_file_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata CodeGeneratorRequest::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = CodeGeneratorRequest_descriptor_;
  metadata.reflection = CodeGeneratorRequest_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// CodeGeneratorRequest

// repeated string file_to_generate = 1;
int CodeGeneratorRequest::file_to_generate_size() const {
  return file_to_generate_.size();
}
void CodeGeneratorRequest::clear_file_to_generate() {
  file_to_generate_.Clear();
}
 const ::std::string& CodeGeneratorRequest::file_to_generate(int index) const {
  // @@protoc_insertion_point(field_get:google.protobuf.compiler.CodeGeneratorRequest.file_to_generate)
  return file_to_generate_.Get(index);
}
 ::std::string* CodeGeneratorRequest::mutable_file_to_generate(int index) {
  // @@protoc_insertion_point(field_mutable:google.protobuf.compiler.CodeGeneratorRequest.file_to_generate)
  return file_to_generate_.Mutable(index);
}
 void CodeGeneratorRequest::set_file_to_generate(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:google.protobuf.compiler.CodeGeneratorRequest.file_to_generate)
  file_to_generate_.Mutable(index)->assign(value);
}
 void CodeGeneratorRequest::set_file_to_generate(int index, const char* value) {
  file_to_generate_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:google.protobuf.compiler.CodeGeneratorRequest.file_to_generate)
}
 void CodeGeneratorRequest::set_file_to_generate(int index, const char* value, size_t size) {
  file_to_generate_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.compiler.CodeGeneratorRequest.file_to_generate)
}
 ::std::string* CodeGeneratorRequest::add_file_to_generate() {
  // @@protoc_insertion_point(field_add_mutable:google.protobuf.compiler.CodeGeneratorRequest.file_to_generate)
  return file_to_generate_.Add();
}
 void CodeGeneratorRequest::add_file_to_generate(const ::std::string& value) {
  file_to_generate_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:google.protobuf.compiler.CodeGeneratorRequest.file_to_generate)
}
 void CodeGeneratorRequest::add_file_to_generate(const char* value) {
  file_to_generate_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:google.protobuf.compiler.CodeGeneratorRequest.file_to_generate)
}
 void CodeGeneratorRequest::add_file_to_generate(const char* value, size_t size) {
  file_to_generate_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:google.protobuf.compiler.CodeGeneratorRequest.file_to_generate)
}
 const ::google::protobuf::RepeatedPtrField< ::std::string>&
CodeGeneratorRequest::file_to_generate() const {
  // @@protoc_insertion_point(field_list:google.protobuf.compiler.CodeGeneratorRequest.file_to_generate)
  return file_to_generate_;
}
 ::google::protobuf::RepeatedPtrField< ::std::string>*
CodeGeneratorRequest::mutable_file_to_generate() {
  // @@protoc_insertion_point(field_mutable_list:google.protobuf.compiler.CodeGeneratorRequest.file_to_generate)
  return &file_to_generate_;
}

// optional string parameter = 2;
bool CodeGeneratorRequest::has_parameter() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void CodeGeneratorRequest::set_has_parameter() {
  _has_bits_[0] |= 0x00000002u;
}
void CodeGeneratorRequest::clear_has_parameter() {
  _has_bits_[0] &= ~0x00000002u;
}
void CodeGeneratorRequest::clear_parameter() {
  parameter_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_parameter();
}
 const ::std::string& CodeGeneratorRequest::parameter() const {
  // @@protoc_insertion_point(field_get:google.protobuf.compiler.CodeGeneratorRequest.parameter)
  return parameter_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void CodeGeneratorRequest::set_parameter(const ::std::string& value) {
  set_has_parameter();
  parameter_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.compiler.CodeGeneratorRequest.parameter)
}
 void CodeGeneratorRequest::set_parameter(const char* value) {
  set_has_parameter();
  parameter_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.compiler.CodeGeneratorRequest.parameter)
}
 void CodeGeneratorRequest::set_parameter(const char* value, size_t size) {
  set_has_parameter();
  parameter_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.compiler.CodeGeneratorRequest.parameter)
}
 ::std::string* CodeGeneratorRequest::mutable_parameter() {
  set_has_parameter();
  // @@protoc_insertion_point(field_mutable:google.protobuf.compiler.CodeGeneratorRequest.parameter)
  return parameter_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* CodeGeneratorRequest::release_parameter() {
  // @@protoc_insertion_point(field_release:google.protobuf.compiler.CodeGeneratorRequest.parameter)
  clear_has_parameter();
  return parameter_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void CodeGeneratorRequest::set_allocated_parameter(::std::string* parameter) {
  if (parameter != NULL) {
    set_has_parameter();
  } else {
    clear_has_parameter();
  }
  parameter_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), parameter);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.compiler.CodeGeneratorRequest.parameter)
}

// repeated .google.protobuf.FileDescriptorProto proto_file = 15;
int CodeGeneratorRequest::proto_file_size() const {
  return proto_file_.size();
}
void CodeGeneratorRequest::clear_proto_file() {
  proto_file_.Clear();
}
const ::google::protobuf::FileDescriptorProto& CodeGeneratorRequest::proto_file(int index) const {
  // @@protoc_insertion_point(field_get:google.protobuf.compiler.CodeGeneratorRequest.proto_file)
  return proto_file_.Get(index);
}
::google::protobuf::FileDescriptorProto* CodeGeneratorRequest::mutable_proto_file(int index) {
  // @@protoc_insertion_point(field_mutable:google.protobuf.compiler.CodeGeneratorRequest.proto_file)
  return proto_file_.Mutable(index);
}
::google::protobuf::FileDescriptorProto* CodeGeneratorRequest::add_proto_file() {
  // @@protoc_insertion_point(field_add:google.protobuf.compiler.CodeGeneratorRequest.proto_file)
  return proto_file_.Add();
}
::google::protobuf::RepeatedPtrField< ::google::protobuf::FileDescriptorProto >*
CodeGeneratorRequest::mutable_proto_file() {
  // @@protoc_insertion_point(field_mutable_list:google.protobuf.compiler.CodeGeneratorRequest.proto_file)
  return &proto_file_;
}
const ::google::protobuf::RepeatedPtrField< ::google::protobuf::FileDescriptorProto >&
CodeGeneratorRequest::proto_file() const {
  // @@protoc_insertion_point(field_list:google.protobuf.compiler.CodeGeneratorRequest.proto_file)
  return proto_file_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int CodeGeneratorResponse_File::kNameFieldNumber;
const int CodeGeneratorResponse_File::kInsertionPointFieldNumber;
const int CodeGeneratorResponse_File::kContentFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

CodeGeneratorResponse_File::CodeGeneratorResponse_File()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.protobuf.compiler.CodeGeneratorResponse.File)
}

void CodeGeneratorResponse_File::InitAsDefaultInstance() {
}

CodeGeneratorResponse_File::CodeGeneratorResponse_File(const CodeGeneratorResponse_File& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:google.protobuf.compiler.CodeGeneratorResponse.File)
}

void CodeGeneratorResponse_File::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  insertion_point_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  content_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CodeGeneratorResponse_File::~CodeGeneratorResponse_File() {
  // @@protoc_insertion_point(destructor:google.protobuf.compiler.CodeGeneratorResponse.File)
  SharedDtor();
}

void CodeGeneratorResponse_File::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  insertion_point_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  content_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void CodeGeneratorResponse_File::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CodeGeneratorResponse_File::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CodeGeneratorResponse_File_descriptor_;
}

const CodeGeneratorResponse_File& CodeGeneratorResponse_File::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_google_2fprotobuf_2fcompiler_2fplugin_2eproto();
  return *default_instance_;
}

CodeGeneratorResponse_File* CodeGeneratorResponse_File::default_instance_ = NULL;

CodeGeneratorResponse_File* CodeGeneratorResponse_File::New(::google::protobuf::Arena* arena) const {
  CodeGeneratorResponse_File* n = new CodeGeneratorResponse_File;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void CodeGeneratorResponse_File::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.compiler.CodeGeneratorResponse.File)
  if (_has_bits_[0 / 32] & 7u) {
    if (has_name()) {
      name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    if (has_insertion_point()) {
      insertion_point_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    if (has_content()) {
      content_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool CodeGeneratorResponse_File::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.protobuf.compiler.CodeGeneratorResponse.File)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string name = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "google.protobuf.compiler.CodeGeneratorResponse.File.name");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_insertion_point;
        break;
      }

      // optional string insertion_point = 2;
      case 2: {
        if (tag == 18) {
         parse_insertion_point:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_insertion_point()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->insertion_point().data(), this->insertion_point().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "google.protobuf.compiler.CodeGeneratorResponse.File.insertion_point");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(122)) goto parse_content;
        break;
      }

      // optional string content = 15;
      case 15: {
        if (tag == 122) {
         parse_content:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_content()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->content().data(), this->content().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "google.protobuf.compiler.CodeGeneratorResponse.File.content");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:google.protobuf.compiler.CodeGeneratorResponse.File)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.protobuf.compiler.CodeGeneratorResponse.File)
  return false;
#undef DO_
}

void CodeGeneratorResponse_File::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.protobuf.compiler.CodeGeneratorResponse.File)
  // optional string name = 1;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.compiler.CodeGeneratorResponse.File.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // optional string insertion_point = 2;
  if (has_insertion_point()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->insertion_point().data(), this->insertion_point().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.compiler.CodeGeneratorResponse.File.insertion_point");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->insertion_point(), output);
  }

  // optional string content = 15;
  if (has_content()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->content().data(), this->content().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.compiler.CodeGeneratorResponse.File.content");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      15, this->content(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:google.protobuf.compiler.CodeGeneratorResponse.File)
}

::google::protobuf::uint8* CodeGeneratorResponse_File::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.compiler.CodeGeneratorResponse.File)
  // optional string name = 1;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.compiler.CodeGeneratorResponse.File.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // optional string insertion_point = 2;
  if (has_insertion_point()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->insertion_point().data(), this->insertion_point().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.compiler.CodeGeneratorResponse.File.insertion_point");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->insertion_point(), target);
  }

  // optional string content = 15;
  if (has_content()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->content().data(), this->content().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.compiler.CodeGeneratorResponse.File.content");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        15, this->content(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.compiler.CodeGeneratorResponse.File)
  return target;
}

int CodeGeneratorResponse_File::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.compiler.CodeGeneratorResponse.File)
  int total_size = 0;

  if (_has_bits_[0 / 32] & 7u) {
    // optional string name = 1;
    if (has_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->name());
    }

    // optional string insertion_point = 2;
    if (has_insertion_point()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->insertion_point());
    }

    // optional string content = 15;
    if (has_content()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->content());
    }

  }
  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void CodeGeneratorResponse_File::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.protobuf.compiler.CodeGeneratorResponse.File)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const CodeGeneratorResponse_File* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const CodeGeneratorResponse_File>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.protobuf.compiler.CodeGeneratorResponse.File)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.protobuf.compiler.CodeGeneratorResponse.File)
    MergeFrom(*source);
  }
}

void CodeGeneratorResponse_File::MergeFrom(const CodeGeneratorResponse_File& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.compiler.CodeGeneratorResponse.File)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_name()) {
      set_has_name();
      name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
    }
    if (from.has_insertion_point()) {
      set_has_insertion_point();
      insertion_point_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.insertion_point_);
    }
    if (from.has_content()) {
      set_has_content();
      content_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.content_);
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void CodeGeneratorResponse_File::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.protobuf.compiler.CodeGeneratorResponse.File)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CodeGeneratorResponse_File::CopyFrom(const CodeGeneratorResponse_File& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.compiler.CodeGeneratorResponse.File)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CodeGeneratorResponse_File::IsInitialized() const {

  return true;
}

void CodeGeneratorResponse_File::Swap(CodeGeneratorResponse_File* other) {
  if (other == this) return;
  InternalSwap(other);
}
void CodeGeneratorResponse_File::InternalSwap(CodeGeneratorResponse_File* other) {
  name_.Swap(&other->name_);
  insertion_point_.Swap(&other->insertion_point_);
  content_.Swap(&other->content_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata CodeGeneratorResponse_File::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = CodeGeneratorResponse_File_descriptor_;
  metadata.reflection = CodeGeneratorResponse_File_reflection_;
  return metadata;
}


// -------------------------------------------------------------------

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int CodeGeneratorResponse::kErrorFieldNumber;
const int CodeGeneratorResponse::kFileFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

CodeGeneratorResponse::CodeGeneratorResponse()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.protobuf.compiler.CodeGeneratorResponse)
}

void CodeGeneratorResponse::InitAsDefaultInstance() {
}

CodeGeneratorResponse::CodeGeneratorResponse(const CodeGeneratorResponse& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:google.protobuf.compiler.CodeGeneratorResponse)
}

void CodeGeneratorResponse::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  error_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CodeGeneratorResponse::~CodeGeneratorResponse() {
  // @@protoc_insertion_point(destructor:google.protobuf.compiler.CodeGeneratorResponse)
  SharedDtor();
}

void CodeGeneratorResponse::SharedDtor() {
  error_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void CodeGeneratorResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CodeGeneratorResponse::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CodeGeneratorResponse_descriptor_;
}

const CodeGeneratorResponse& CodeGeneratorResponse::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_google_2fprotobuf_2fcompiler_2fplugin_2eproto();
  return *default_instance_;
}

CodeGeneratorResponse* CodeGeneratorResponse::default_instance_ = NULL;

CodeGeneratorResponse* CodeGeneratorResponse::New(::google::protobuf::Arena* arena) const {
  CodeGeneratorResponse* n = new CodeGeneratorResponse;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void CodeGeneratorResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.compiler.CodeGeneratorResponse)
  if (has_error()) {
    error_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  file_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool CodeGeneratorResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.protobuf.compiler.CodeGeneratorResponse)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string error = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_error()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->error().data(), this->error().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "google.protobuf.compiler.CodeGeneratorResponse.error");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(122)) goto parse_file;
        break;
      }

      // repeated .google.protobuf.compiler.CodeGeneratorResponse.File file = 15;
      case 15: {
        if (tag == 122) {
         parse_file:
          DO_(input->IncrementRecursionDepth());
         parse_loop_file:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_file()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(122)) goto parse_loop_file;
        input->UnsafeDecrementRecursionDepth();
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:google.protobuf.compiler.CodeGeneratorResponse)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.protobuf.compiler.CodeGeneratorResponse)
  return false;
#undef DO_
}

void CodeGeneratorResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.protobuf.compiler.CodeGeneratorResponse)
  // optional string error = 1;
  if (has_error()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->error().data(), this->error().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.compiler.CodeGeneratorResponse.error");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->error(), output);
  }

  // repeated .google.protobuf.compiler.CodeGeneratorResponse.File file = 15;
  for (unsigned int i = 0, n = this->file_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      15, this->file(i), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:google.protobuf.compiler.CodeGeneratorResponse)
}

::google::protobuf::uint8* CodeGeneratorResponse::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.compiler.CodeGeneratorResponse)
  // optional string error = 1;
  if (has_error()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->error().data(), this->error().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.compiler.CodeGeneratorResponse.error");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->error(), target);
  }

  // repeated .google.protobuf.compiler.CodeGeneratorResponse.File file = 15;
  for (unsigned int i = 0, n = this->file_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        15, this->file(i), false, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.compiler.CodeGeneratorResponse)
  return target;
}

int CodeGeneratorResponse::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.compiler.CodeGeneratorResponse)
  int total_size = 0;

  // optional string error = 1;
  if (has_error()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->error());
  }

  // repeated .google.protobuf.compiler.CodeGeneratorResponse.File file = 15;
  total_size += 1 * this->file_size();
  for (int i = 0; i < this->file_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->file(i));
  }

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void CodeGeneratorResponse::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.protobuf.compiler.CodeGeneratorResponse)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const CodeGeneratorResponse* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const CodeGeneratorResponse>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.protobuf.compiler.CodeGeneratorResponse)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.protobuf.compiler.CodeGeneratorResponse)
    MergeFrom(*source);
  }
}

void CodeGeneratorResponse::MergeFrom(const CodeGeneratorResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.compiler.CodeGeneratorResponse)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  file_.MergeFrom(from.file_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_error()) {
      set_has_error();
      error_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.error_);
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void CodeGeneratorResponse::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.protobuf.compiler.CodeGeneratorResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CodeGeneratorResponse::CopyFrom(const CodeGeneratorResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.compiler.CodeGeneratorResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CodeGeneratorResponse::IsInitialized() const {

  return true;
}

void CodeGeneratorResponse::Swap(CodeGeneratorResponse* other) {
  if (other == this) return;
  InternalSwap(other);
}
void CodeGeneratorResponse::InternalSwap(CodeGeneratorResponse* other) {
  error_.Swap(&other->error_);
  file_.UnsafeArenaSwap(&other->file_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata CodeGeneratorResponse::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = CodeGeneratorResponse_descriptor_;
  metadata.reflection = CodeGeneratorResponse_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// CodeGeneratorResponse_File

// optional string name = 1;
bool CodeGeneratorResponse_File::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void CodeGeneratorResponse_File::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
void CodeGeneratorResponse_File::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
void CodeGeneratorResponse_File::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_name();
}
 const ::std::string& CodeGeneratorResponse_File::name() const {
  // @@protoc_insertion_point(field_get:google.protobuf.compiler.CodeGeneratorResponse.File.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void CodeGeneratorResponse_File::set_name(const ::std::string& value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.compiler.CodeGeneratorResponse.File.name)
}
 void CodeGeneratorResponse_File::set_name(const char* value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.compiler.CodeGeneratorResponse.File.name)
}
 void CodeGeneratorResponse_File::set_name(const char* value, size_t size) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.compiler.CodeGeneratorResponse.File.name)
}
 ::std::string* CodeGeneratorResponse_File::mutable_name() {
  set_has_name();
  // @@protoc_insertion_point(field_mutable:google.protobuf.compiler.CodeGeneratorResponse.File.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* CodeGeneratorResponse_File::release_name() {
  // @@protoc_insertion_point(field_release:google.protobuf.compiler.CodeGeneratorResponse.File.name)
  clear_has_name();
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void CodeGeneratorResponse_File::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    set_has_name();
  } else {
    clear_has_name();
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.compiler.CodeGeneratorResponse.File.name)
}

// optional string insertion_point = 2;
bool CodeGeneratorResponse_File::has_insertion_point() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void CodeGeneratorResponse_File::set_has_insertion_point() {
  _has_bits_[0] |= 0x00000002u;
}
void CodeGeneratorResponse_File::clear_has_insertion_point() {
  _has_bits_[0] &= ~0x00000002u;
}
void CodeGeneratorResponse_File::clear_insertion_point() {
  insertion_point_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_insertion_point();
}
 const ::std::string& CodeGeneratorResponse_File::insertion_point() const {
  // @@protoc_insertion_point(field_get:google.protobuf.compiler.CodeGeneratorResponse.File.insertion_point)
  return insertion_point_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void CodeGeneratorResponse_File::set_insertion_point(const ::std::string& value) {
  set_has_insertion_point();
  insertion_point_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.compiler.CodeGeneratorResponse.File.insertion_point)
}
 void CodeGeneratorResponse_File::set_insertion_point(const char* value) {
  set_has_insertion_point();
  insertion_point_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.compiler.CodeGeneratorResponse.File.insertion_point)
}
 void CodeGeneratorResponse_File::set_insertion_point(const char* value, size_t size) {
  set_has_insertion_point();
  insertion_point_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.compiler.CodeGeneratorResponse.File.insertion_point)
}
 ::std::string* CodeGeneratorResponse_File::mutable_insertion_point() {
  set_has_insertion_point();
  // @@protoc_insertion_point(field_mutable:google.protobuf.compiler.CodeGeneratorResponse.File.insertion_point)
  return insertion_point_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* CodeGeneratorResponse_File::release_insertion_point() {
  // @@protoc_insertion_point(field_release:google.protobuf.compiler.CodeGeneratorResponse.File.insertion_point)
  clear_has_insertion_point();
  return insertion_point_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void CodeGeneratorResponse_File::set_allocated_insertion_point(::std::string* insertion_point) {
  if (insertion_point != NULL) {
    set_has_insertion_point();
  } else {
    clear_has_insertion_point();
  }
  insertion_point_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), insertion_point);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.compiler.CodeGeneratorResponse.File.insertion_point)
}

// optional string content = 15;
bool CodeGeneratorResponse_File::has_content() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void CodeGeneratorResponse_File::set_has_content() {
  _has_bits_[0] |= 0x00000004u;
}
void CodeGeneratorResponse_File::clear_has_content() {
  _has_bits_[0] &= ~0x00000004u;
}
void CodeGeneratorResponse_File::clear_content() {
  content_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_content();
}
 const ::std::string& CodeGeneratorResponse_File::content() const {
  // @@protoc_insertion_point(field_get:google.protobuf.compiler.CodeGeneratorResponse.File.content)
  return content_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void CodeGeneratorResponse_File::set_content(const ::std::string& value) {
  set_has_content();
  content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.compiler.CodeGeneratorResponse.File.content)
}
 void CodeGeneratorResponse_File::set_content(const char* value) {
  set_has_content();
  content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.compiler.CodeGeneratorResponse.File.content)
}
 void CodeGeneratorResponse_File::set_content(const char* value, size_t size) {
  set_has_content();
  content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.compiler.CodeGeneratorResponse.File.content)
}
 ::std::string* CodeGeneratorResponse_File::mutable_content() {
  set_has_content();
  // @@protoc_insertion_point(field_mutable:google.protobuf.compiler.CodeGeneratorResponse.File.content)
  return content_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* CodeGeneratorResponse_File::release_content() {
  // @@protoc_insertion_point(field_release:google.protobuf.compiler.CodeGeneratorResponse.File.content)
  clear_has_content();
  return content_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void CodeGeneratorResponse_File::set_allocated_content(::std::string* content) {
  if (content != NULL) {
    set_has_content();
  } else {
    clear_has_content();
  }
  content_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), content);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.compiler.CodeGeneratorResponse.File.content)
}

// -------------------------------------------------------------------

// CodeGeneratorResponse

// optional string error = 1;
bool CodeGeneratorResponse::has_error() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void CodeGeneratorResponse::set_has_error() {
  _has_bits_[0] |= 0x00000001u;
}
void CodeGeneratorResponse::clear_has_error() {
  _has_bits_[0] &= ~0x00000001u;
}
void CodeGeneratorResponse::clear_error() {
  error_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_error();
}
 const ::std::string& CodeGeneratorResponse::error() const {
  // @@protoc_insertion_point(field_get:google.protobuf.compiler.CodeGeneratorResponse.error)
  return error_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void CodeGeneratorResponse::set_error(const ::std::string& value) {
  set_has_error();
  error_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.compiler.CodeGeneratorResponse.error)
}
 void CodeGeneratorResponse::set_error(const char* value) {
  set_has_error();
  error_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.compiler.CodeGeneratorResponse.error)
}
 void CodeGeneratorResponse::set_error(const char* value, size_t size) {
  set_has_error();
  error_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.compiler.CodeGeneratorResponse.error)
}
 ::std::string* CodeGeneratorResponse::mutable_error() {
  set_has_error();
  // @@protoc_insertion_point(field_mutable:google.protobuf.compiler.CodeGeneratorResponse.error)
  return error_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* CodeGeneratorResponse::release_error() {
  // @@protoc_insertion_point(field_release:google.protobuf.compiler.CodeGeneratorResponse.error)
  clear_has_error();
  return error_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void CodeGeneratorResponse::set_allocated_error(::std::string* error) {
  if (error != NULL) {
    set_has_error();
  } else {
    clear_has_error();
  }
  error_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), error);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.compiler.CodeGeneratorResponse.error)
}

// repeated .google.protobuf.compiler.CodeGeneratorResponse.File file = 15;
int CodeGeneratorResponse::file_size() const {
  return file_.size();
}
void CodeGeneratorResponse::clear_file() {
  file_.Clear();
}
const ::google::protobuf::compiler::CodeGeneratorResponse_File& CodeGeneratorResponse::file(int index) const {
  // @@protoc_insertion_point(field_get:google.protobuf.compiler.CodeGeneratorResponse.file)
  return file_.Get(index);
}
::google::protobuf::compiler::CodeGeneratorResponse_File* CodeGeneratorResponse::mutable_file(int index) {
  // @@protoc_insertion_point(field_mutable:google.protobuf.compiler.CodeGeneratorResponse.file)
  return file_.Mutable(index);
}
::google::protobuf::compiler::CodeGeneratorResponse_File* CodeGeneratorResponse::add_file() {
  // @@protoc_insertion_point(field_add:google.protobuf.compiler.CodeGeneratorResponse.file)
  return file_.Add();
}
::google::protobuf::RepeatedPtrField< ::google::protobuf::compiler::CodeGeneratorResponse_File >*
CodeGeneratorResponse::mutable_file() {
  // @@protoc_insertion_point(field_mutable_list:google.protobuf.compiler.CodeGeneratorResponse.file)
  return &file_;
}
const ::google::protobuf::RepeatedPtrField< ::google::protobuf::compiler::CodeGeneratorResponse_File >&
CodeGeneratorResponse::file() const {
  // @@protoc_insertion_point(field_list:google.protobuf.compiler.CodeGeneratorResponse.file)
  return file_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace compiler
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

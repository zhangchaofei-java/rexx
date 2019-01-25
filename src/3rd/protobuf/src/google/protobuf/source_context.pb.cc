
#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include <google/protobuf/source_context.pb.h>

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

namespace {

const ::google::protobuf::Descriptor* SourceContext_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  SourceContext_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_google_2fprotobuf_2fsource_5fcontext_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_google_2fprotobuf_2fsource_5fcontext_2eproto() {
  protobuf_AddDesc_google_2fprotobuf_2fsource_5fcontext_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "google/protobuf/source_context.proto");
  GOOGLE_CHECK(file != NULL);
  SourceContext_descriptor_ = file->message_type(0);
  static const int SourceContext_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SourceContext, file_name_),
  };
  SourceContext_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      SourceContext_descriptor_,
      SourceContext::default_instance_,
      SourceContext_offsets_,
      -1,
      -1,
      -1,
      sizeof(SourceContext),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SourceContext, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SourceContext, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_google_2fprotobuf_2fsource_5fcontext_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      SourceContext_descriptor_, &SourceContext::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_google_2fprotobuf_2fsource_5fcontext_2eproto() {
  delete SourceContext::default_instance_;
  delete SourceContext_reflection_;
}

void protobuf_AddDesc_google_2fprotobuf_2fsource_5fcontext_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_google_2fprotobuf_2fsource_5fcontext_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n$google/protobuf/source_context.proto\022\017"
    "google.protobuf\"\"\n\rSourceContext\022\021\n\tfile"
    "_name\030\001 \001(\tBU\n\023com.google.protobufB\022Sour"
    "ceContextProtoP\001\240\001\001\242\002\003GPB\252\002\036Google.Proto"
    "buf.WellKnownTypesb\006proto3", 186);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/protobuf/source_context.proto", &protobuf_RegisterTypes);
  SourceContext::default_instance_ = new SourceContext();
  SourceContext::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_google_2fprotobuf_2fsource_5fcontext_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_google_2fprotobuf_2fsource_5fcontext_2eproto {
  StaticDescriptorInitializer_google_2fprotobuf_2fsource_5fcontext_2eproto() {
    protobuf_AddDesc_google_2fprotobuf_2fsource_5fcontext_2eproto();
  }
} static_descriptor_initializer_google_2fprotobuf_2fsource_5fcontext_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SourceContext::kFileNameFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SourceContext::SourceContext()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.protobuf.SourceContext)
}

void SourceContext::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

SourceContext::SourceContext(const SourceContext& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:google.protobuf.SourceContext)
}

void SourceContext::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  file_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

SourceContext::~SourceContext() {
  // @@protoc_insertion_point(destructor:google.protobuf.SourceContext)
  SharedDtor();
}

void SourceContext::SharedDtor() {
  file_name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void SourceContext::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SourceContext::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SourceContext_descriptor_;
}

const SourceContext& SourceContext::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_google_2fprotobuf_2fsource_5fcontext_2eproto();
  return *default_instance_;
}

SourceContext* SourceContext::default_instance_ = NULL;

SourceContext* SourceContext::New(::google::protobuf::Arena* arena) const {
  SourceContext* n = new SourceContext;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void SourceContext::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.SourceContext)
  file_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool SourceContext::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.protobuf.SourceContext)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string file_name = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_file_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->file_name().data(), this->file_name().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.protobuf.SourceContext.file_name"));
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
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:google.protobuf.SourceContext)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.protobuf.SourceContext)
  return false;
#undef DO_
}

void SourceContext::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.protobuf.SourceContext)
  // optional string file_name = 1;
  if (this->file_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->file_name().data(), this->file_name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.protobuf.SourceContext.file_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->file_name(), output);
  }

  // @@protoc_insertion_point(serialize_end:google.protobuf.SourceContext)
}

::google::protobuf::uint8* SourceContext::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.SourceContext)
  // optional string file_name = 1;
  if (this->file_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->file_name().data(), this->file_name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.protobuf.SourceContext.file_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->file_name(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.SourceContext)
  return target;
}

int SourceContext::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.SourceContext)
  int total_size = 0;

  // optional string file_name = 1;
  if (this->file_name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->file_name());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SourceContext::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.protobuf.SourceContext)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const SourceContext* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const SourceContext>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.protobuf.SourceContext)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.protobuf.SourceContext)
    MergeFrom(*source);
  }
}

void SourceContext::MergeFrom(const SourceContext& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.SourceContext)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.file_name().size() > 0) {

    file_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.file_name_);
  }
}

void SourceContext::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.protobuf.SourceContext)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SourceContext::CopyFrom(const SourceContext& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.SourceContext)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SourceContext::IsInitialized() const {

  return true;
}

void SourceContext::Swap(SourceContext* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SourceContext::InternalSwap(SourceContext* other) {
  file_name_.Swap(&other->file_name_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata SourceContext::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = SourceContext_descriptor_;
  metadata.reflection = SourceContext_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// SourceContext

// optional string file_name = 1;
void SourceContext::clear_file_name() {
  file_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& SourceContext::file_name() const {
  // @@protoc_insertion_point(field_get:google.protobuf.SourceContext.file_name)
  return file_name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void SourceContext::set_file_name(const ::std::string& value) {
  
  file_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.SourceContext.file_name)
}
 void SourceContext::set_file_name(const char* value) {
  
  file_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.SourceContext.file_name)
}
 void SourceContext::set_file_name(const char* value, size_t size) {
  
  file_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.SourceContext.file_name)
}
 ::std::string* SourceContext::mutable_file_name() {
  
  // @@protoc_insertion_point(field_mutable:google.protobuf.SourceContext.file_name)
  return file_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* SourceContext::release_file_name() {
  // @@protoc_insertion_point(field_release:google.protobuf.SourceContext.file_name)
  
  return file_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void SourceContext::set_allocated_file_name(::std::string* file_name) {
  if (file_name != NULL) {
    
  } else {
    
  }
  file_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), file_name);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.SourceContext.file_name)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

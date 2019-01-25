
#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include <google/protobuf/any.pb.h>

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

const ::google::protobuf::Descriptor* Any_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Any_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_google_2fprotobuf_2fany_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_google_2fprotobuf_2fany_2eproto() {
  protobuf_AddDesc_google_2fprotobuf_2fany_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "google/protobuf/any.proto");
  GOOGLE_CHECK(file != NULL);
  Any_descriptor_ = file->message_type(0);
  static const int Any_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Any, type_url_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Any, value_),
  };
  Any_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Any_descriptor_,
      Any::default_instance_,
      Any_offsets_,
      -1,
      -1,
      -1,
      sizeof(Any),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Any, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Any, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_google_2fprotobuf_2fany_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Any_descriptor_, &Any::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_google_2fprotobuf_2fany_2eproto() {
  delete Any::default_instance_;
  delete Any_reflection_;
}

void protobuf_AddDesc_google_2fprotobuf_2fany_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_google_2fprotobuf_2fany_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\031google/protobuf/any.proto\022\017google.prot"
    "obuf\"&\n\003Any\022\020\n\010type_url\030\001 \001(\t\022\r\n\005value\030\002"
    " \001(\014Br\n\023com.google.protobufB\010AnyProtoP\001Z"
    "%github.com/golang/protobuf/ptypes/any\240\001"
    "\001\242\002\003GPB\252\002\036Google.Protobuf.WellKnownTypes"
    "b\006proto3", 208);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/protobuf/any.proto", &protobuf_RegisterTypes);
  Any::default_instance_ = new Any();
  Any::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_google_2fprotobuf_2fany_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_google_2fprotobuf_2fany_2eproto {
  StaticDescriptorInitializer_google_2fprotobuf_2fany_2eproto() {
    protobuf_AddDesc_google_2fprotobuf_2fany_2eproto();
  }
} static_descriptor_initializer_google_2fprotobuf_2fany_2eproto_;

// ===================================================================

void Any::PackFrom(const ::google::protobuf::Message& message) {
  _any_metadata_.PackFrom(message);
}

void Any::PackFrom(const ::google::protobuf::Message& message,
                           const ::std::string& type_url_prefix) {
  _any_metadata_.PackFrom(message, type_url_prefix);
}

bool Any::UnpackTo(::google::protobuf::Message* message) const {
  return _any_metadata_.UnpackTo(message);
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Any::kTypeUrlFieldNumber;
const int Any::kValueFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Any::Any()
  : ::google::protobuf::Message(), _internal_metadata_(NULL), _any_metadata_(&type_url_, &value_) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.protobuf.Any)
}

void Any::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

Any::Any(const Any& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL),
    _any_metadata_(&type_url_, &value_) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:google.protobuf.Any)
}

void Any::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  type_url_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

Any::~Any() {
  // @@protoc_insertion_point(destructor:google.protobuf.Any)
  SharedDtor();
}

void Any::SharedDtor() {
  type_url_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  value_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void Any::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Any::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Any_descriptor_;
}

const Any& Any::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_google_2fprotobuf_2fany_2eproto();
  return *default_instance_;
}

Any* Any::default_instance_ = NULL;

Any* Any::New(::google::protobuf::Arena* arena) const {
  Any* n = new Any;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Any::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.Any)
  type_url_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool Any::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.protobuf.Any)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string type_url = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_type_url()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->type_url().data(), this->type_url().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.protobuf.Any.type_url"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_value;
        break;
      }

      // optional bytes value = 2;
      case 2: {
        if (tag == 18) {
         parse_value:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_value()));
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
  // @@protoc_insertion_point(parse_success:google.protobuf.Any)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.protobuf.Any)
  return false;
#undef DO_
}

void Any::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.protobuf.Any)
  // optional string type_url = 1;
  if (this->type_url().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->type_url().data(), this->type_url().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.protobuf.Any.type_url");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->type_url(), output);
  }

  // optional bytes value = 2;
  if (this->value().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      2, this->value(), output);
  }

  // @@protoc_insertion_point(serialize_end:google.protobuf.Any)
}

::google::protobuf::uint8* Any::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.Any)
  // optional string type_url = 1;
  if (this->type_url().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->type_url().data(), this->type_url().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.protobuf.Any.type_url");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->type_url(), target);
  }

  // optional bytes value = 2;
  if (this->value().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        2, this->value(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.Any)
  return target;
}

int Any::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.Any)
  int total_size = 0;

  // optional string type_url = 1;
  if (this->type_url().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->type_url());
  }

  // optional bytes value = 2;
  if (this->value().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->value());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Any::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.protobuf.Any)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const Any* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Any>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.protobuf.Any)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.protobuf.Any)
    MergeFrom(*source);
  }
}

void Any::MergeFrom(const Any& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.Any)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.type_url().size() > 0) {

    type_url_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.type_url_);
  }
  if (from.value().size() > 0) {

    value_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.value_);
  }
}

void Any::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.protobuf.Any)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Any::CopyFrom(const Any& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.Any)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Any::IsInitialized() const {

  return true;
}

void Any::Swap(Any* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Any::InternalSwap(Any* other) {
  type_url_.Swap(&other->type_url_);
  value_.Swap(&other->value_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Any::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Any_descriptor_;
  metadata.reflection = Any_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Any

// optional string type_url = 1;
void Any::clear_type_url() {
  type_url_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& Any::type_url() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Any.type_url)
  return type_url_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Any::set_type_url(const ::std::string& value) {
  
  type_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.Any.type_url)
}
 void Any::set_type_url(const char* value) {
  
  type_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.Any.type_url)
}
 void Any::set_type_url(const char* value, size_t size) {
  
  type_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.Any.type_url)
}
 ::std::string* Any::mutable_type_url() {
  
  // @@protoc_insertion_point(field_mutable:google.protobuf.Any.type_url)
  return type_url_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* Any::release_type_url() {
  // @@protoc_insertion_point(field_release:google.protobuf.Any.type_url)
  
  return type_url_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Any::set_allocated_type_url(::std::string* type_url) {
  if (type_url != NULL) {
    
  } else {
    
  }
  type_url_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), type_url);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.Any.type_url)
}

// optional bytes value = 2;
void Any::clear_value() {
  value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& Any::value() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Any.value)
  return value_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Any::set_value(const ::std::string& value) {
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.Any.value)
}
 void Any::set_value(const char* value) {
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.Any.value)
}
 void Any::set_value(const void* value, size_t size) {
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.Any.value)
}
 ::std::string* Any::mutable_value() {
  
  // @@protoc_insertion_point(field_mutable:google.protobuf.Any.value)
  return value_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* Any::release_value() {
  // @@protoc_insertion_point(field_release:google.protobuf.Any.value)
  
  return value_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Any::set_allocated_value(::std::string* value) {
  if (value != NULL) {
    
  } else {
    
  }
  value_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.Any.value)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

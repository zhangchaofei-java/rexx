

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "helloworld.pb.h"

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

namespace helloworld {

namespace {

const ::google::protobuf::Descriptor* HelloRequest_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  HelloRequest_reflection_ = NULL;
const ::google::protobuf::Descriptor* HelloReply_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  HelloReply_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_helloworld_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_helloworld_2eproto() {
  protobuf_AddDesc_helloworld_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "helloworld.proto");
  GOOGLE_CHECK(file != NULL);
  HelloRequest_descriptor_ = file->message_type(0);
  static const int HelloRequest_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HelloRequest, name_),
  };
  HelloRequest_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      HelloRequest_descriptor_,
      HelloRequest::default_instance_,
      HelloRequest_offsets_,
      -1,
      -1,
      -1,
      sizeof(HelloRequest),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HelloRequest, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HelloRequest, _is_default_instance_));
  HelloReply_descriptor_ = file->message_type(1);
  static const int HelloReply_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HelloReply, message_),
  };
  HelloReply_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      HelloReply_descriptor_,
      HelloReply::default_instance_,
      HelloReply_offsets_,
      -1,
      -1,
      -1,
      sizeof(HelloReply),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HelloReply, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HelloReply, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_helloworld_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      HelloRequest_descriptor_, &HelloRequest::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      HelloReply_descriptor_, &HelloReply::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_helloworld_2eproto() {
  delete HelloRequest::default_instance_;
  delete HelloRequest_reflection_;
  delete HelloReply::default_instance_;
  delete HelloReply_reflection_;
}

void protobuf_AddDesc_helloworld_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_helloworld_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\020helloworld.proto\022\nhelloworld\"\034\n\014HelloR"
    "equest\022\014\n\004name\030\001 \001(\t\"\035\n\nHelloReply\022\017\n\007me"
    "ssage\030\001 \001(\t2I\n\007Greeter\022>\n\010SayHello\022\030.hel"
    "loworld.HelloRequest\032\026.helloworld.HelloR"
    "eply\"\000B6\n\033io.grpc.examples.helloworldB\017H"
    "elloWorldProtoP\001\242\002\003HLWb\006proto3", 230);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "helloworld.proto", &protobuf_RegisterTypes);
  HelloRequest::default_instance_ = new HelloRequest();
  HelloReply::default_instance_ = new HelloReply();
  HelloRequest::default_instance_->InitAsDefaultInstance();
  HelloReply::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_helloworld_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_helloworld_2eproto {
  StaticDescriptorInitializer_helloworld_2eproto() {
    protobuf_AddDesc_helloworld_2eproto();
  }
} static_descriptor_initializer_helloworld_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int HelloRequest::kNameFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

HelloRequest::HelloRequest()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:helloworld.HelloRequest)
}

void HelloRequest::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

HelloRequest::HelloRequest(const HelloRequest& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:helloworld.HelloRequest)
}

void HelloRequest::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

HelloRequest::~HelloRequest() {
  // @@protoc_insertion_point(destructor:helloworld.HelloRequest)
  SharedDtor();
}

void HelloRequest::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void HelloRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* HelloRequest::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return HelloRequest_descriptor_;
}

const HelloRequest& HelloRequest::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_helloworld_2eproto();
  return *default_instance_;
}

HelloRequest* HelloRequest::default_instance_ = NULL;

HelloRequest* HelloRequest::New(::google::protobuf::Arena* arena) const {
  HelloRequest* n = new HelloRequest;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void HelloRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:helloworld.HelloRequest)
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool HelloRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:helloworld.HelloRequest)
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
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "helloworld.HelloRequest.name"));
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
  // @@protoc_insertion_point(parse_success:helloworld.HelloRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:helloworld.HelloRequest)
  return false;
#undef DO_
}

void HelloRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:helloworld.HelloRequest)
  // optional string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "helloworld.HelloRequest.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // @@protoc_insertion_point(serialize_end:helloworld.HelloRequest)
}

::google::protobuf::uint8* HelloRequest::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:helloworld.HelloRequest)
  // optional string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "helloworld.HelloRequest.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:helloworld.HelloRequest)
  return target;
}

int HelloRequest::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:helloworld.HelloRequest)
  int total_size = 0;

  // optional string name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void HelloRequest::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:helloworld.HelloRequest)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const HelloRequest* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const HelloRequest>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:helloworld.HelloRequest)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:helloworld.HelloRequest)
    MergeFrom(*source);
  }
}

void HelloRequest::MergeFrom(const HelloRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:helloworld.HelloRequest)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
}

void HelloRequest::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:helloworld.HelloRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void HelloRequest::CopyFrom(const HelloRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:helloworld.HelloRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool HelloRequest::IsInitialized() const {

  return true;
}

void HelloRequest::Swap(HelloRequest* other) {
  if (other == this) return;
  InternalSwap(other);
}
void HelloRequest::InternalSwap(HelloRequest* other) {
  name_.Swap(&other->name_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata HelloRequest::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = HelloRequest_descriptor_;
  metadata.reflection = HelloRequest_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// HelloRequest

// optional string name = 1;
void HelloRequest::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& HelloRequest::name() const {
  // @@protoc_insertion_point(field_get:helloworld.HelloRequest.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void HelloRequest::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:helloworld.HelloRequest.name)
}
 void HelloRequest::set_name(const char* value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:helloworld.HelloRequest.name)
}
 void HelloRequest::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:helloworld.HelloRequest.name)
}
 ::std::string* HelloRequest::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:helloworld.HelloRequest.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* HelloRequest::release_name() {
  // @@protoc_insertion_point(field_release:helloworld.HelloRequest.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void HelloRequest::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:helloworld.HelloRequest.name)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int HelloReply::kMessageFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

HelloReply::HelloReply()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:helloworld.HelloReply)
}

void HelloReply::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

HelloReply::HelloReply(const HelloReply& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:helloworld.HelloReply)
}

void HelloReply::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  message_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

HelloReply::~HelloReply() {
  // @@protoc_insertion_point(destructor:helloworld.HelloReply)
  SharedDtor();
}

void HelloReply::SharedDtor() {
  message_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void HelloReply::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* HelloReply::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return HelloReply_descriptor_;
}

const HelloReply& HelloReply::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_helloworld_2eproto();
  return *default_instance_;
}

HelloReply* HelloReply::default_instance_ = NULL;

HelloReply* HelloReply::New(::google::protobuf::Arena* arena) const {
  HelloReply* n = new HelloReply;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void HelloReply::Clear() {
// @@protoc_insertion_point(message_clear_start:helloworld.HelloReply)
  message_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool HelloReply::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:helloworld.HelloReply)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string message = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_message()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->message().data(), this->message().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "helloworld.HelloReply.message"));
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
  // @@protoc_insertion_point(parse_success:helloworld.HelloReply)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:helloworld.HelloReply)
  return false;
#undef DO_
}

void HelloReply::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:helloworld.HelloReply)
  // optional string message = 1;
  if (this->message().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->message().data(), this->message().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "helloworld.HelloReply.message");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->message(), output);
  }

  // @@protoc_insertion_point(serialize_end:helloworld.HelloReply)
}

::google::protobuf::uint8* HelloReply::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:helloworld.HelloReply)
  // optional string message = 1;
  if (this->message().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->message().data(), this->message().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "helloworld.HelloReply.message");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->message(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:helloworld.HelloReply)
  return target;
}

int HelloReply::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:helloworld.HelloReply)
  int total_size = 0;

  // optional string message = 1;
  if (this->message().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->message());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void HelloReply::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:helloworld.HelloReply)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const HelloReply* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const HelloReply>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:helloworld.HelloReply)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:helloworld.HelloReply)
    MergeFrom(*source);
  }
}

void HelloReply::MergeFrom(const HelloReply& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:helloworld.HelloReply)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.message().size() > 0) {

    message_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.message_);
  }
}

void HelloReply::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:helloworld.HelloReply)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void HelloReply::CopyFrom(const HelloReply& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:helloworld.HelloReply)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool HelloReply::IsInitialized() const {

  return true;
}

void HelloReply::Swap(HelloReply* other) {
  if (other == this) return;
  InternalSwap(other);
}
void HelloReply::InternalSwap(HelloReply* other) {
  message_.Swap(&other->message_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata HelloReply::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = HelloReply_descriptor_;
  metadata.reflection = HelloReply_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// HelloReply

// optional string message = 1;
void HelloReply::clear_message() {
  message_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& HelloReply::message() const {
  // @@protoc_insertion_point(field_get:helloworld.HelloReply.message)
  return message_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void HelloReply::set_message(const ::std::string& value) {
  
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:helloworld.HelloReply.message)
}
 void HelloReply::set_message(const char* value) {
  
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:helloworld.HelloReply.message)
}
 void HelloReply::set_message(const char* value, size_t size) {
  
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:helloworld.HelloReply.message)
}
 ::std::string* HelloReply::mutable_message() {
  
  // @@protoc_insertion_point(field_mutable:helloworld.HelloReply.message)
  return message_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* HelloReply::release_message() {
  // @@protoc_insertion_point(field_release:helloworld.HelloReply.message)
  
  return message_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void HelloReply::set_allocated_message(::std::string* message) {
  if (message != NULL) {
    
  } else {
    
  }
  message_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), message);
  // @@protoc_insertion_point(field_set_allocated:helloworld.HelloReply.message)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace helloworld

// @@protoc_insertion_point(global_scope)

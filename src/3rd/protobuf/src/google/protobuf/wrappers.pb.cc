
#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include <google/protobuf/wrappers.pb.h>

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

const ::google::protobuf::Descriptor* DoubleValue_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  DoubleValue_reflection_ = NULL;
const ::google::protobuf::Descriptor* FloatValue_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  FloatValue_reflection_ = NULL;
const ::google::protobuf::Descriptor* Int64Value_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Int64Value_reflection_ = NULL;
const ::google::protobuf::Descriptor* UInt64Value_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  UInt64Value_reflection_ = NULL;
const ::google::protobuf::Descriptor* Int32Value_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Int32Value_reflection_ = NULL;
const ::google::protobuf::Descriptor* UInt32Value_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  UInt32Value_reflection_ = NULL;
const ::google::protobuf::Descriptor* BoolValue_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  BoolValue_reflection_ = NULL;
const ::google::protobuf::Descriptor* StringValue_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  StringValue_reflection_ = NULL;
const ::google::protobuf::Descriptor* BytesValue_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  BytesValue_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_google_2fprotobuf_2fwrappers_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_google_2fprotobuf_2fwrappers_2eproto() {
  protobuf_AddDesc_google_2fprotobuf_2fwrappers_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "google/protobuf/wrappers.proto");
  GOOGLE_CHECK(file != NULL);
  DoubleValue_descriptor_ = file->message_type(0);
  static const int DoubleValue_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DoubleValue, value_),
  };
  DoubleValue_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      DoubleValue_descriptor_,
      DoubleValue::default_instance_,
      DoubleValue_offsets_,
      -1,
      -1,
      -1,
      sizeof(DoubleValue),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DoubleValue, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DoubleValue, _is_default_instance_));
  FloatValue_descriptor_ = file->message_type(1);
  static const int FloatValue_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FloatValue, value_),
  };
  FloatValue_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      FloatValue_descriptor_,
      FloatValue::default_instance_,
      FloatValue_offsets_,
      -1,
      -1,
      -1,
      sizeof(FloatValue),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FloatValue, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FloatValue, _is_default_instance_));
  Int64Value_descriptor_ = file->message_type(2);
  static const int Int64Value_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Int64Value, value_),
  };
  Int64Value_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Int64Value_descriptor_,
      Int64Value::default_instance_,
      Int64Value_offsets_,
      -1,
      -1,
      -1,
      sizeof(Int64Value),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Int64Value, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Int64Value, _is_default_instance_));
  UInt64Value_descriptor_ = file->message_type(3);
  static const int UInt64Value_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UInt64Value, value_),
  };
  UInt64Value_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      UInt64Value_descriptor_,
      UInt64Value::default_instance_,
      UInt64Value_offsets_,
      -1,
      -1,
      -1,
      sizeof(UInt64Value),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UInt64Value, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UInt64Value, _is_default_instance_));
  Int32Value_descriptor_ = file->message_type(4);
  static const int Int32Value_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Int32Value, value_),
  };
  Int32Value_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Int32Value_descriptor_,
      Int32Value::default_instance_,
      Int32Value_offsets_,
      -1,
      -1,
      -1,
      sizeof(Int32Value),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Int32Value, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Int32Value, _is_default_instance_));
  UInt32Value_descriptor_ = file->message_type(5);
  static const int UInt32Value_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UInt32Value, value_),
  };
  UInt32Value_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      UInt32Value_descriptor_,
      UInt32Value::default_instance_,
      UInt32Value_offsets_,
      -1,
      -1,
      -1,
      sizeof(UInt32Value),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UInt32Value, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UInt32Value, _is_default_instance_));
  BoolValue_descriptor_ = file->message_type(6);
  static const int BoolValue_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BoolValue, value_),
  };
  BoolValue_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      BoolValue_descriptor_,
      BoolValue::default_instance_,
      BoolValue_offsets_,
      -1,
      -1,
      -1,
      sizeof(BoolValue),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BoolValue, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BoolValue, _is_default_instance_));
  StringValue_descriptor_ = file->message_type(7);
  static const int StringValue_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StringValue, value_),
  };
  StringValue_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      StringValue_descriptor_,
      StringValue::default_instance_,
      StringValue_offsets_,
      -1,
      -1,
      -1,
      sizeof(StringValue),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StringValue, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StringValue, _is_default_instance_));
  BytesValue_descriptor_ = file->message_type(8);
  static const int BytesValue_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BytesValue, value_),
  };
  BytesValue_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      BytesValue_descriptor_,
      BytesValue::default_instance_,
      BytesValue_offsets_,
      -1,
      -1,
      -1,
      sizeof(BytesValue),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BytesValue, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BytesValue, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_google_2fprotobuf_2fwrappers_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      DoubleValue_descriptor_, &DoubleValue::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      FloatValue_descriptor_, &FloatValue::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Int64Value_descriptor_, &Int64Value::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      UInt64Value_descriptor_, &UInt64Value::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Int32Value_descriptor_, &Int32Value::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      UInt32Value_descriptor_, &UInt32Value::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      BoolValue_descriptor_, &BoolValue::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      StringValue_descriptor_, &StringValue::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      BytesValue_descriptor_, &BytesValue::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_google_2fprotobuf_2fwrappers_2eproto() {
  delete DoubleValue::default_instance_;
  delete DoubleValue_reflection_;
  delete FloatValue::default_instance_;
  delete FloatValue_reflection_;
  delete Int64Value::default_instance_;
  delete Int64Value_reflection_;
  delete UInt64Value::default_instance_;
  delete UInt64Value_reflection_;
  delete Int32Value::default_instance_;
  delete Int32Value_reflection_;
  delete UInt32Value::default_instance_;
  delete UInt32Value_reflection_;
  delete BoolValue::default_instance_;
  delete BoolValue_reflection_;
  delete StringValue::default_instance_;
  delete StringValue_reflection_;
  delete BytesValue::default_instance_;
  delete BytesValue_reflection_;
}

void protobuf_AddDesc_google_2fprotobuf_2fwrappers_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_google_2fprotobuf_2fwrappers_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\036google/protobuf/wrappers.proto\022\017google"
    ".protobuf\"\034\n\013DoubleValue\022\r\n\005value\030\001 \001(\001\""
    "\033\n\nFloatValue\022\r\n\005value\030\001 \001(\002\"\033\n\nInt64Val"
    "ue\022\r\n\005value\030\001 \001(\003\"\034\n\013UInt64Value\022\r\n\005valu"
    "e\030\001 \001(\004\"\033\n\nInt32Value\022\r\n\005value\030\001 \001(\005\"\034\n\013"
    "UInt32Value\022\r\n\005value\030\001 \001(\r\"\032\n\tBoolValue\022"
    "\r\n\005value\030\001 \001(\010\"\034\n\013StringValue\022\r\n\005value\030\001"
    " \001(\t\"\033\n\nBytesValue\022\r\n\005value\030\001 \001(\014B\177\n\023com"
    ".google.protobufB\rWrappersProtoP\001Z*githu"
    "b.com/golang/protobuf/ptypes/wrappers\240\001\001"
    "\370\001\001\242\002\003GPB\252\002\036Google.Protobuf.WellKnownTyp"
    "esb\006proto3", 450);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/protobuf/wrappers.proto", &protobuf_RegisterTypes);
  DoubleValue::default_instance_ = new DoubleValue();
  FloatValue::default_instance_ = new FloatValue();
  Int64Value::default_instance_ = new Int64Value();
  UInt64Value::default_instance_ = new UInt64Value();
  Int32Value::default_instance_ = new Int32Value();
  UInt32Value::default_instance_ = new UInt32Value();
  BoolValue::default_instance_ = new BoolValue();
  StringValue::default_instance_ = new StringValue();
  BytesValue::default_instance_ = new BytesValue();
  DoubleValue::default_instance_->InitAsDefaultInstance();
  FloatValue::default_instance_->InitAsDefaultInstance();
  Int64Value::default_instance_->InitAsDefaultInstance();
  UInt64Value::default_instance_->InitAsDefaultInstance();
  Int32Value::default_instance_->InitAsDefaultInstance();
  UInt32Value::default_instance_->InitAsDefaultInstance();
  BoolValue::default_instance_->InitAsDefaultInstance();
  StringValue::default_instance_->InitAsDefaultInstance();
  BytesValue::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_google_2fprotobuf_2fwrappers_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_google_2fprotobuf_2fwrappers_2eproto {
  StaticDescriptorInitializer_google_2fprotobuf_2fwrappers_2eproto() {
    protobuf_AddDesc_google_2fprotobuf_2fwrappers_2eproto();
  }
} static_descriptor_initializer_google_2fprotobuf_2fwrappers_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int DoubleValue::kValueFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

DoubleValue::DoubleValue()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.protobuf.DoubleValue)
}

DoubleValue::DoubleValue(::google::protobuf::Arena* arena)
  : ::google::protobuf::Message(),
  _internal_metadata_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:google.protobuf.DoubleValue)
}

void DoubleValue::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

DoubleValue::DoubleValue(const DoubleValue& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:google.protobuf.DoubleValue)
}

void DoubleValue::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  value_ = 0;
}

DoubleValue::~DoubleValue() {
  // @@protoc_insertion_point(destructor:google.protobuf.DoubleValue)
  SharedDtor();
}

void DoubleValue::SharedDtor() {
  if (GetArenaNoVirtual() != NULL) {
    return;
  }

  if (this != default_instance_) {
  }
}

void DoubleValue::ArenaDtor(void* object) {
  DoubleValue* _this = reinterpret_cast< DoubleValue* >(object);
  (void)_this;
}
void DoubleValue::RegisterArenaDtor(::google::protobuf::Arena* arena) {
}
void DoubleValue::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* DoubleValue::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return DoubleValue_descriptor_;
}

const DoubleValue& DoubleValue::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_google_2fprotobuf_2fwrappers_2eproto();
  return *default_instance_;
}

DoubleValue* DoubleValue::default_instance_ = NULL;

DoubleValue* DoubleValue::New(::google::protobuf::Arena* arena) const {
  return ::google::protobuf::Arena::CreateMessage<DoubleValue>(arena);
}

void DoubleValue::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.DoubleValue)
  value_ = 0;
}

bool DoubleValue::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.protobuf.DoubleValue)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional double value = 1;
      case 1: {
        if (tag == 9) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &value_)));

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
  // @@protoc_insertion_point(parse_success:google.protobuf.DoubleValue)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.protobuf.DoubleValue)
  return false;
#undef DO_
}

void DoubleValue::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.protobuf.DoubleValue)
  // optional double value = 1;
  if (this->value() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(1, this->value(), output);
  }

  // @@protoc_insertion_point(serialize_end:google.protobuf.DoubleValue)
}

::google::protobuf::uint8* DoubleValue::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.DoubleValue)
  // optional double value = 1;
  if (this->value() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(1, this->value(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.DoubleValue)
  return target;
}

int DoubleValue::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.DoubleValue)
  int total_size = 0;

  // optional double value = 1;
  if (this->value() != 0) {
    total_size += 1 + 8;
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void DoubleValue::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.protobuf.DoubleValue)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const DoubleValue* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const DoubleValue>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.protobuf.DoubleValue)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.protobuf.DoubleValue)
    MergeFrom(*source);
  }
}

void DoubleValue::MergeFrom(const DoubleValue& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.DoubleValue)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.value() != 0) {
    set_value(from.value());
  }
}

void DoubleValue::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.protobuf.DoubleValue)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void DoubleValue::CopyFrom(const DoubleValue& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.DoubleValue)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DoubleValue::IsInitialized() const {

  return true;
}

void DoubleValue::Swap(DoubleValue* other) {
  if (other == this) return;
  if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
    InternalSwap(other);
  } else {
    DoubleValue temp;
    temp.MergeFrom(*this);
    CopyFrom(*other);
    other->CopyFrom(temp);
  }
}
void DoubleValue::UnsafeArenaSwap(DoubleValue* other) {
  if (other == this) return;
  GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
  InternalSwap(other);
}
void DoubleValue::InternalSwap(DoubleValue* other) {
  std::swap(value_, other->value_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata DoubleValue::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = DoubleValue_descriptor_;
  metadata.reflection = DoubleValue_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// DoubleValue

// optional double value = 1;
void DoubleValue::clear_value() {
  value_ = 0;
}
 double DoubleValue::value() const {
  // @@protoc_insertion_point(field_get:google.protobuf.DoubleValue.value)
  return value_;
}
 void DoubleValue::set_value(double value) {
  
  value_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.DoubleValue.value)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int FloatValue::kValueFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

FloatValue::FloatValue()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.protobuf.FloatValue)
}

FloatValue::FloatValue(::google::protobuf::Arena* arena)
  : ::google::protobuf::Message(),
  _internal_metadata_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:google.protobuf.FloatValue)
}

void FloatValue::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

FloatValue::FloatValue(const FloatValue& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:google.protobuf.FloatValue)
}

void FloatValue::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  value_ = 0;
}

FloatValue::~FloatValue() {
  // @@protoc_insertion_point(destructor:google.protobuf.FloatValue)
  SharedDtor();
}

void FloatValue::SharedDtor() {
  if (GetArenaNoVirtual() != NULL) {
    return;
  }

  if (this != default_instance_) {
  }
}

void FloatValue::ArenaDtor(void* object) {
  FloatValue* _this = reinterpret_cast< FloatValue* >(object);
  (void)_this;
}
void FloatValue::RegisterArenaDtor(::google::protobuf::Arena* arena) {
}
void FloatValue::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* FloatValue::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return FloatValue_descriptor_;
}

const FloatValue& FloatValue::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_google_2fprotobuf_2fwrappers_2eproto();
  return *default_instance_;
}

FloatValue* FloatValue::default_instance_ = NULL;

FloatValue* FloatValue::New(::google::protobuf::Arena* arena) const {
  return ::google::protobuf::Arena::CreateMessage<FloatValue>(arena);
}

void FloatValue::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.FloatValue)
  value_ = 0;
}

bool FloatValue::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.protobuf.FloatValue)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional float value = 1;
      case 1: {
        if (tag == 13) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &value_)));

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
  // @@protoc_insertion_point(parse_success:google.protobuf.FloatValue)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.protobuf.FloatValue)
  return false;
#undef DO_
}

void FloatValue::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.protobuf.FloatValue)
  // optional float value = 1;
  if (this->value() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(1, this->value(), output);
  }

  // @@protoc_insertion_point(serialize_end:google.protobuf.FloatValue)
}

::google::protobuf::uint8* FloatValue::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.FloatValue)
  // optional float value = 1;
  if (this->value() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(1, this->value(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.FloatValue)
  return target;
}

int FloatValue::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.FloatValue)
  int total_size = 0;

  // optional float value = 1;
  if (this->value() != 0) {
    total_size += 1 + 4;
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void FloatValue::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.protobuf.FloatValue)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const FloatValue* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const FloatValue>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.protobuf.FloatValue)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.protobuf.FloatValue)
    MergeFrom(*source);
  }
}

void FloatValue::MergeFrom(const FloatValue& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.FloatValue)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.value() != 0) {
    set_value(from.value());
  }
}

void FloatValue::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.protobuf.FloatValue)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void FloatValue::CopyFrom(const FloatValue& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.FloatValue)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FloatValue::IsInitialized() const {

  return true;
}

void FloatValue::Swap(FloatValue* other) {
  if (other == this) return;
  if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
    InternalSwap(other);
  } else {
    FloatValue temp;
    temp.MergeFrom(*this);
    CopyFrom(*other);
    other->CopyFrom(temp);
  }
}
void FloatValue::UnsafeArenaSwap(FloatValue* other) {
  if (other == this) return;
  GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
  InternalSwap(other);
}
void FloatValue::InternalSwap(FloatValue* other) {
  std::swap(value_, other->value_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata FloatValue::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = FloatValue_descriptor_;
  metadata.reflection = FloatValue_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// FloatValue

// optional float value = 1;
void FloatValue::clear_value() {
  value_ = 0;
}
 float FloatValue::value() const {
  // @@protoc_insertion_point(field_get:google.protobuf.FloatValue.value)
  return value_;
}
 void FloatValue::set_value(float value) {
  
  value_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.FloatValue.value)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Int64Value::kValueFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Int64Value::Int64Value()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.protobuf.Int64Value)
}

Int64Value::Int64Value(::google::protobuf::Arena* arena)
  : ::google::protobuf::Message(),
  _internal_metadata_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:google.protobuf.Int64Value)
}

void Int64Value::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

Int64Value::Int64Value(const Int64Value& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:google.protobuf.Int64Value)
}

void Int64Value::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  value_ = GOOGLE_LONGLONG(0);
}

Int64Value::~Int64Value() {
  // @@protoc_insertion_point(destructor:google.protobuf.Int64Value)
  SharedDtor();
}

void Int64Value::SharedDtor() {
  if (GetArenaNoVirtual() != NULL) {
    return;
  }

  if (this != default_instance_) {
  }
}

void Int64Value::ArenaDtor(void* object) {
  Int64Value* _this = reinterpret_cast< Int64Value* >(object);
  (void)_this;
}
void Int64Value::RegisterArenaDtor(::google::protobuf::Arena* arena) {
}
void Int64Value::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Int64Value::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Int64Value_descriptor_;
}

const Int64Value& Int64Value::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_google_2fprotobuf_2fwrappers_2eproto();
  return *default_instance_;
}

Int64Value* Int64Value::default_instance_ = NULL;

Int64Value* Int64Value::New(::google::protobuf::Arena* arena) const {
  return ::google::protobuf::Arena::CreateMessage<Int64Value>(arena);
}

void Int64Value::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.Int64Value)
  value_ = GOOGLE_LONGLONG(0);
}

bool Int64Value::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.protobuf.Int64Value)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int64 value = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &value_)));

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
  // @@protoc_insertion_point(parse_success:google.protobuf.Int64Value)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.protobuf.Int64Value)
  return false;
#undef DO_
}

void Int64Value::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.protobuf.Int64Value)
  // optional int64 value = 1;
  if (this->value() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->value(), output);
  }

  // @@protoc_insertion_point(serialize_end:google.protobuf.Int64Value)
}

::google::protobuf::uint8* Int64Value::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.Int64Value)
  // optional int64 value = 1;
  if (this->value() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->value(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.Int64Value)
  return target;
}

int Int64Value::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.Int64Value)
  int total_size = 0;

  // optional int64 value = 1;
  if (this->value() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->value());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Int64Value::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.protobuf.Int64Value)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const Int64Value* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Int64Value>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.protobuf.Int64Value)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.protobuf.Int64Value)
    MergeFrom(*source);
  }
}

void Int64Value::MergeFrom(const Int64Value& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.Int64Value)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.value() != 0) {
    set_value(from.value());
  }
}

void Int64Value::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.protobuf.Int64Value)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Int64Value::CopyFrom(const Int64Value& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.Int64Value)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Int64Value::IsInitialized() const {

  return true;
}

void Int64Value::Swap(Int64Value* other) {
  if (other == this) return;
  if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
    InternalSwap(other);
  } else {
    Int64Value temp;
    temp.MergeFrom(*this);
    CopyFrom(*other);
    other->CopyFrom(temp);
  }
}
void Int64Value::UnsafeArenaSwap(Int64Value* other) {
  if (other == this) return;
  GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
  InternalSwap(other);
}
void Int64Value::InternalSwap(Int64Value* other) {
  std::swap(value_, other->value_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Int64Value::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Int64Value_descriptor_;
  metadata.reflection = Int64Value_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Int64Value

// optional int64 value = 1;
void Int64Value::clear_value() {
  value_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 Int64Value::value() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Int64Value.value)
  return value_;
}
 void Int64Value::set_value(::google::protobuf::int64 value) {
  
  value_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.Int64Value.value)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int UInt64Value::kValueFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

UInt64Value::UInt64Value()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.protobuf.UInt64Value)
}

UInt64Value::UInt64Value(::google::protobuf::Arena* arena)
  : ::google::protobuf::Message(),
  _internal_metadata_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:google.protobuf.UInt64Value)
}

void UInt64Value::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

UInt64Value::UInt64Value(const UInt64Value& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:google.protobuf.UInt64Value)
}

void UInt64Value::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  value_ = GOOGLE_ULONGLONG(0);
}

UInt64Value::~UInt64Value() {
  // @@protoc_insertion_point(destructor:google.protobuf.UInt64Value)
  SharedDtor();
}

void UInt64Value::SharedDtor() {
  if (GetArenaNoVirtual() != NULL) {
    return;
  }

  if (this != default_instance_) {
  }
}

void UInt64Value::ArenaDtor(void* object) {
  UInt64Value* _this = reinterpret_cast< UInt64Value* >(object);
  (void)_this;
}
void UInt64Value::RegisterArenaDtor(::google::protobuf::Arena* arena) {
}
void UInt64Value::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* UInt64Value::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return UInt64Value_descriptor_;
}

const UInt64Value& UInt64Value::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_google_2fprotobuf_2fwrappers_2eproto();
  return *default_instance_;
}

UInt64Value* UInt64Value::default_instance_ = NULL;

UInt64Value* UInt64Value::New(::google::protobuf::Arena* arena) const {
  return ::google::protobuf::Arena::CreateMessage<UInt64Value>(arena);
}

void UInt64Value::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.UInt64Value)
  value_ = GOOGLE_ULONGLONG(0);
}

bool UInt64Value::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.protobuf.UInt64Value)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint64 value = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &value_)));

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
  // @@protoc_insertion_point(parse_success:google.protobuf.UInt64Value)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.protobuf.UInt64Value)
  return false;
#undef DO_
}

void UInt64Value::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.protobuf.UInt64Value)
  // optional uint64 value = 1;
  if (this->value() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->value(), output);
  }

  // @@protoc_insertion_point(serialize_end:google.protobuf.UInt64Value)
}

::google::protobuf::uint8* UInt64Value::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.UInt64Value)
  // optional uint64 value = 1;
  if (this->value() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(1, this->value(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.UInt64Value)
  return target;
}

int UInt64Value::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.UInt64Value)
  int total_size = 0;

  // optional uint64 value = 1;
  if (this->value() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->value());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void UInt64Value::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.protobuf.UInt64Value)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const UInt64Value* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const UInt64Value>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.protobuf.UInt64Value)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.protobuf.UInt64Value)
    MergeFrom(*source);
  }
}

void UInt64Value::MergeFrom(const UInt64Value& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.UInt64Value)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.value() != 0) {
    set_value(from.value());
  }
}

void UInt64Value::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.protobuf.UInt64Value)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void UInt64Value::CopyFrom(const UInt64Value& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.UInt64Value)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UInt64Value::IsInitialized() const {

  return true;
}

void UInt64Value::Swap(UInt64Value* other) {
  if (other == this) return;
  if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
    InternalSwap(other);
  } else {
    UInt64Value temp;
    temp.MergeFrom(*this);
    CopyFrom(*other);
    other->CopyFrom(temp);
  }
}
void UInt64Value::UnsafeArenaSwap(UInt64Value* other) {
  if (other == this) return;
  GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
  InternalSwap(other);
}
void UInt64Value::InternalSwap(UInt64Value* other) {
  std::swap(value_, other->value_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata UInt64Value::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = UInt64Value_descriptor_;
  metadata.reflection = UInt64Value_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// UInt64Value

// optional uint64 value = 1;
void UInt64Value::clear_value() {
  value_ = GOOGLE_ULONGLONG(0);
}
 ::google::protobuf::uint64 UInt64Value::value() const {
  // @@protoc_insertion_point(field_get:google.protobuf.UInt64Value.value)
  return value_;
}
 void UInt64Value::set_value(::google::protobuf::uint64 value) {
  
  value_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.UInt64Value.value)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Int32Value::kValueFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Int32Value::Int32Value()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.protobuf.Int32Value)
}

Int32Value::Int32Value(::google::protobuf::Arena* arena)
  : ::google::protobuf::Message(),
  _internal_metadata_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:google.protobuf.Int32Value)
}

void Int32Value::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

Int32Value::Int32Value(const Int32Value& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:google.protobuf.Int32Value)
}

void Int32Value::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  value_ = 0;
}

Int32Value::~Int32Value() {
  // @@protoc_insertion_point(destructor:google.protobuf.Int32Value)
  SharedDtor();
}

void Int32Value::SharedDtor() {
  if (GetArenaNoVirtual() != NULL) {
    return;
  }

  if (this != default_instance_) {
  }
}

void Int32Value::ArenaDtor(void* object) {
  Int32Value* _this = reinterpret_cast< Int32Value* >(object);
  (void)_this;
}
void Int32Value::RegisterArenaDtor(::google::protobuf::Arena* arena) {
}
void Int32Value::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Int32Value::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Int32Value_descriptor_;
}

const Int32Value& Int32Value::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_google_2fprotobuf_2fwrappers_2eproto();
  return *default_instance_;
}

Int32Value* Int32Value::default_instance_ = NULL;

Int32Value* Int32Value::New(::google::protobuf::Arena* arena) const {
  return ::google::protobuf::Arena::CreateMessage<Int32Value>(arena);
}

void Int32Value::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.Int32Value)
  value_ = 0;
}

bool Int32Value::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.protobuf.Int32Value)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 value = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &value_)));

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
  // @@protoc_insertion_point(parse_success:google.protobuf.Int32Value)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.protobuf.Int32Value)
  return false;
#undef DO_
}

void Int32Value::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.protobuf.Int32Value)
  // optional int32 value = 1;
  if (this->value() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->value(), output);
  }

  // @@protoc_insertion_point(serialize_end:google.protobuf.Int32Value)
}

::google::protobuf::uint8* Int32Value::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.Int32Value)
  // optional int32 value = 1;
  if (this->value() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->value(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.Int32Value)
  return target;
}

int Int32Value::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.Int32Value)
  int total_size = 0;

  // optional int32 value = 1;
  if (this->value() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->value());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Int32Value::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.protobuf.Int32Value)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const Int32Value* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Int32Value>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.protobuf.Int32Value)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.protobuf.Int32Value)
    MergeFrom(*source);
  }
}

void Int32Value::MergeFrom(const Int32Value& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.Int32Value)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.value() != 0) {
    set_value(from.value());
  }
}

void Int32Value::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.protobuf.Int32Value)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Int32Value::CopyFrom(const Int32Value& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.Int32Value)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Int32Value::IsInitialized() const {

  return true;
}

void Int32Value::Swap(Int32Value* other) {
  if (other == this) return;
  if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
    InternalSwap(other);
  } else {
    Int32Value temp;
    temp.MergeFrom(*this);
    CopyFrom(*other);
    other->CopyFrom(temp);
  }
}
void Int32Value::UnsafeArenaSwap(Int32Value* other) {
  if (other == this) return;
  GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
  InternalSwap(other);
}
void Int32Value::InternalSwap(Int32Value* other) {
  std::swap(value_, other->value_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Int32Value::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Int32Value_descriptor_;
  metadata.reflection = Int32Value_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Int32Value

// optional int32 value = 1;
void Int32Value::clear_value() {
  value_ = 0;
}
 ::google::protobuf::int32 Int32Value::value() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Int32Value.value)
  return value_;
}
 void Int32Value::set_value(::google::protobuf::int32 value) {
  
  value_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.Int32Value.value)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int UInt32Value::kValueFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

UInt32Value::UInt32Value()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.protobuf.UInt32Value)
}

UInt32Value::UInt32Value(::google::protobuf::Arena* arena)
  : ::google::protobuf::Message(),
  _internal_metadata_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:google.protobuf.UInt32Value)
}

void UInt32Value::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

UInt32Value::UInt32Value(const UInt32Value& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:google.protobuf.UInt32Value)
}

void UInt32Value::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  value_ = 0u;
}

UInt32Value::~UInt32Value() {
  // @@protoc_insertion_point(destructor:google.protobuf.UInt32Value)
  SharedDtor();
}

void UInt32Value::SharedDtor() {
  if (GetArenaNoVirtual() != NULL) {
    return;
  }

  if (this != default_instance_) {
  }
}

void UInt32Value::ArenaDtor(void* object) {
  UInt32Value* _this = reinterpret_cast< UInt32Value* >(object);
  (void)_this;
}
void UInt32Value::RegisterArenaDtor(::google::protobuf::Arena* arena) {
}
void UInt32Value::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* UInt32Value::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return UInt32Value_descriptor_;
}

const UInt32Value& UInt32Value::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_google_2fprotobuf_2fwrappers_2eproto();
  return *default_instance_;
}

UInt32Value* UInt32Value::default_instance_ = NULL;

UInt32Value* UInt32Value::New(::google::protobuf::Arena* arena) const {
  return ::google::protobuf::Arena::CreateMessage<UInt32Value>(arena);
}

void UInt32Value::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.UInt32Value)
  value_ = 0u;
}

bool UInt32Value::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.protobuf.UInt32Value)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint32 value = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &value_)));

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
  // @@protoc_insertion_point(parse_success:google.protobuf.UInt32Value)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.protobuf.UInt32Value)
  return false;
#undef DO_
}

void UInt32Value::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.protobuf.UInt32Value)
  // optional uint32 value = 1;
  if (this->value() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->value(), output);
  }

  // @@protoc_insertion_point(serialize_end:google.protobuf.UInt32Value)
}

::google::protobuf::uint8* UInt32Value::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.UInt32Value)
  // optional uint32 value = 1;
  if (this->value() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->value(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.UInt32Value)
  return target;
}

int UInt32Value::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.UInt32Value)
  int total_size = 0;

  // optional uint32 value = 1;
  if (this->value() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->value());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void UInt32Value::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.protobuf.UInt32Value)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const UInt32Value* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const UInt32Value>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.protobuf.UInt32Value)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.protobuf.UInt32Value)
    MergeFrom(*source);
  }
}

void UInt32Value::MergeFrom(const UInt32Value& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.UInt32Value)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.value() != 0) {
    set_value(from.value());
  }
}

void UInt32Value::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.protobuf.UInt32Value)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void UInt32Value::CopyFrom(const UInt32Value& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.UInt32Value)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UInt32Value::IsInitialized() const {

  return true;
}

void UInt32Value::Swap(UInt32Value* other) {
  if (other == this) return;
  if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
    InternalSwap(other);
  } else {
    UInt32Value temp;
    temp.MergeFrom(*this);
    CopyFrom(*other);
    other->CopyFrom(temp);
  }
}
void UInt32Value::UnsafeArenaSwap(UInt32Value* other) {
  if (other == this) return;
  GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
  InternalSwap(other);
}
void UInt32Value::InternalSwap(UInt32Value* other) {
  std::swap(value_, other->value_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata UInt32Value::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = UInt32Value_descriptor_;
  metadata.reflection = UInt32Value_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// UInt32Value

// optional uint32 value = 1;
void UInt32Value::clear_value() {
  value_ = 0u;
}
 ::google::protobuf::uint32 UInt32Value::value() const {
  // @@protoc_insertion_point(field_get:google.protobuf.UInt32Value.value)
  return value_;
}
 void UInt32Value::set_value(::google::protobuf::uint32 value) {
  
  value_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.UInt32Value.value)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int BoolValue::kValueFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

BoolValue::BoolValue()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.protobuf.BoolValue)
}

BoolValue::BoolValue(::google::protobuf::Arena* arena)
  : ::google::protobuf::Message(),
  _internal_metadata_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:google.protobuf.BoolValue)
}

void BoolValue::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

BoolValue::BoolValue(const BoolValue& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:google.protobuf.BoolValue)
}

void BoolValue::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  value_ = false;
}

BoolValue::~BoolValue() {
  // @@protoc_insertion_point(destructor:google.protobuf.BoolValue)
  SharedDtor();
}

void BoolValue::SharedDtor() {
  if (GetArenaNoVirtual() != NULL) {
    return;
  }

  if (this != default_instance_) {
  }
}

void BoolValue::ArenaDtor(void* object) {
  BoolValue* _this = reinterpret_cast< BoolValue* >(object);
  (void)_this;
}
void BoolValue::RegisterArenaDtor(::google::protobuf::Arena* arena) {
}
void BoolValue::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* BoolValue::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return BoolValue_descriptor_;
}

const BoolValue& BoolValue::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_google_2fprotobuf_2fwrappers_2eproto();
  return *default_instance_;
}

BoolValue* BoolValue::default_instance_ = NULL;

BoolValue* BoolValue::New(::google::protobuf::Arena* arena) const {
  return ::google::protobuf::Arena::CreateMessage<BoolValue>(arena);
}

void BoolValue::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.BoolValue)
  value_ = false;
}

bool BoolValue::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.protobuf.BoolValue)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional bool value = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &value_)));

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
  // @@protoc_insertion_point(parse_success:google.protobuf.BoolValue)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.protobuf.BoolValue)
  return false;
#undef DO_
}

void BoolValue::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.protobuf.BoolValue)
  // optional bool value = 1;
  if (this->value() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->value(), output);
  }

  // @@protoc_insertion_point(serialize_end:google.protobuf.BoolValue)
}

::google::protobuf::uint8* BoolValue::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.BoolValue)
  // optional bool value = 1;
  if (this->value() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->value(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.BoolValue)
  return target;
}

int BoolValue::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.BoolValue)
  int total_size = 0;

  // optional bool value = 1;
  if (this->value() != 0) {
    total_size += 1 + 1;
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void BoolValue::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.protobuf.BoolValue)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const BoolValue* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const BoolValue>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.protobuf.BoolValue)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.protobuf.BoolValue)
    MergeFrom(*source);
  }
}

void BoolValue::MergeFrom(const BoolValue& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.BoolValue)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.value() != 0) {
    set_value(from.value());
  }
}

void BoolValue::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.protobuf.BoolValue)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BoolValue::CopyFrom(const BoolValue& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.BoolValue)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BoolValue::IsInitialized() const {

  return true;
}

void BoolValue::Swap(BoolValue* other) {
  if (other == this) return;
  if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
    InternalSwap(other);
  } else {
    BoolValue temp;
    temp.MergeFrom(*this);
    CopyFrom(*other);
    other->CopyFrom(temp);
  }
}
void BoolValue::UnsafeArenaSwap(BoolValue* other) {
  if (other == this) return;
  GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
  InternalSwap(other);
}
void BoolValue::InternalSwap(BoolValue* other) {
  std::swap(value_, other->value_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata BoolValue::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = BoolValue_descriptor_;
  metadata.reflection = BoolValue_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// BoolValue

// optional bool value = 1;
void BoolValue::clear_value() {
  value_ = false;
}
 bool BoolValue::value() const {
  // @@protoc_insertion_point(field_get:google.protobuf.BoolValue.value)
  return value_;
}
 void BoolValue::set_value(bool value) {
  
  value_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.BoolValue.value)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int StringValue::kValueFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

StringValue::StringValue()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.protobuf.StringValue)
}

StringValue::StringValue(::google::protobuf::Arena* arena)
  : ::google::protobuf::Message(),
  _internal_metadata_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:google.protobuf.StringValue)
}

void StringValue::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

StringValue::StringValue(const StringValue& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:google.protobuf.StringValue)
}

void StringValue::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

StringValue::~StringValue() {
  // @@protoc_insertion_point(destructor:google.protobuf.StringValue)
  SharedDtor();
}

void StringValue::SharedDtor() {
  if (GetArenaNoVirtual() != NULL) {
    return;
  }

  value_.Destroy(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
  if (this != default_instance_) {
  }
}

void StringValue::ArenaDtor(void* object) {
  StringValue* _this = reinterpret_cast< StringValue* >(object);
  (void)_this;
}
void StringValue::RegisterArenaDtor(::google::protobuf::Arena* arena) {
}
void StringValue::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* StringValue::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return StringValue_descriptor_;
}

const StringValue& StringValue::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_google_2fprotobuf_2fwrappers_2eproto();
  return *default_instance_;
}

StringValue* StringValue::default_instance_ = NULL;

StringValue* StringValue::New(::google::protobuf::Arena* arena) const {
  return ::google::protobuf::Arena::CreateMessage<StringValue>(arena);
}

void StringValue::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.StringValue)
  value_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}

bool StringValue::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.protobuf.StringValue)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string value = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_value()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->value().data(), this->value().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.protobuf.StringValue.value"));
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
  // @@protoc_insertion_point(parse_success:google.protobuf.StringValue)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.protobuf.StringValue)
  return false;
#undef DO_
}

void StringValue::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.protobuf.StringValue)
  // optional string value = 1;
  if (this->value().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->value().data(), this->value().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.protobuf.StringValue.value");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->value(), output);
  }

  // @@protoc_insertion_point(serialize_end:google.protobuf.StringValue)
}

::google::protobuf::uint8* StringValue::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.StringValue)
  // optional string value = 1;
  if (this->value().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->value().data(), this->value().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.protobuf.StringValue.value");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->value(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.StringValue)
  return target;
}

int StringValue::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.StringValue)
  int total_size = 0;

  // optional string value = 1;
  if (this->value().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->value());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void StringValue::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.protobuf.StringValue)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const StringValue* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const StringValue>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.protobuf.StringValue)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.protobuf.StringValue)
    MergeFrom(*source);
  }
}

void StringValue::MergeFrom(const StringValue& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.StringValue)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.value().size() > 0) {
    set_value(from.value());
  }
}

void StringValue::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.protobuf.StringValue)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void StringValue::CopyFrom(const StringValue& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.StringValue)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool StringValue::IsInitialized() const {

  return true;
}

void StringValue::Swap(StringValue* other) {
  if (other == this) return;
  if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
    InternalSwap(other);
  } else {
    StringValue temp;
    temp.MergeFrom(*this);
    CopyFrom(*other);
    other->CopyFrom(temp);
  }
}
void StringValue::UnsafeArenaSwap(StringValue* other) {
  if (other == this) return;
  GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
  InternalSwap(other);
}
void StringValue::InternalSwap(StringValue* other) {
  value_.Swap(&other->value_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata StringValue::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = StringValue_descriptor_;
  metadata.reflection = StringValue_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// StringValue

// optional string value = 1;
void StringValue::clear_value() {
  value_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
 const ::std::string& StringValue::value() const {
  // @@protoc_insertion_point(field_get:google.protobuf.StringValue.value)
  return value_.Get(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void StringValue::set_value(const ::std::string& value) {
  
  value_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:google.protobuf.StringValue.value)
}
 void StringValue::set_value(const char* value) {
  
  value_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:google.protobuf.StringValue.value)
}
 void StringValue::set_value(const char* value,
    size_t size) {
  
  value_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.StringValue.value)
}
 ::std::string* StringValue::mutable_value() {
  
  // @@protoc_insertion_point(field_mutable:google.protobuf.StringValue.value)
  return value_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
 ::std::string* StringValue::release_value() {
  // @@protoc_insertion_point(field_release:google.protobuf.StringValue.value)
  
  return value_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
 ::std::string* StringValue::unsafe_arena_release_value() {
  // @@protoc_insertion_point(field_unsafe_arena_release:google.protobuf.StringValue.value)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return value_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
 void StringValue::set_allocated_value(::std::string* value) {
  if (value != NULL) {
    
  } else {
    
  }
  value_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.StringValue.value)
}
 void StringValue::unsafe_arena_set_allocated_value(
    ::std::string* value) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (value != NULL) {
    
  } else {
    
  }
  value_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:google.protobuf.StringValue.value)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int BytesValue::kValueFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

BytesValue::BytesValue()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.protobuf.BytesValue)
}

BytesValue::BytesValue(::google::protobuf::Arena* arena)
  : ::google::protobuf::Message(),
  _internal_metadata_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:google.protobuf.BytesValue)
}

void BytesValue::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

BytesValue::BytesValue(const BytesValue& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:google.protobuf.BytesValue)
}

void BytesValue::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

BytesValue::~BytesValue() {
  // @@protoc_insertion_point(destructor:google.protobuf.BytesValue)
  SharedDtor();
}

void BytesValue::SharedDtor() {
  if (GetArenaNoVirtual() != NULL) {
    return;
  }

  value_.Destroy(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
  if (this != default_instance_) {
  }
}

void BytesValue::ArenaDtor(void* object) {
  BytesValue* _this = reinterpret_cast< BytesValue* >(object);
  (void)_this;
}
void BytesValue::RegisterArenaDtor(::google::protobuf::Arena* arena) {
}
void BytesValue::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* BytesValue::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return BytesValue_descriptor_;
}

const BytesValue& BytesValue::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_google_2fprotobuf_2fwrappers_2eproto();
  return *default_instance_;
}

BytesValue* BytesValue::default_instance_ = NULL;

BytesValue* BytesValue::New(::google::protobuf::Arena* arena) const {
  return ::google::protobuf::Arena::CreateMessage<BytesValue>(arena);
}

void BytesValue::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.BytesValue)
  value_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}

bool BytesValue::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.protobuf.BytesValue)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional bytes value = 1;
      case 1: {
        if (tag == 10) {
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
  // @@protoc_insertion_point(parse_success:google.protobuf.BytesValue)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.protobuf.BytesValue)
  return false;
#undef DO_
}

void BytesValue::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.protobuf.BytesValue)
  // optional bytes value = 1;
  if (this->value().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      1, this->value(), output);
  }

  // @@protoc_insertion_point(serialize_end:google.protobuf.BytesValue)
}

::google::protobuf::uint8* BytesValue::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.BytesValue)
  // optional bytes value = 1;
  if (this->value().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        1, this->value(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.BytesValue)
  return target;
}

int BytesValue::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.BytesValue)
  int total_size = 0;

  // optional bytes value = 1;
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

void BytesValue::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.protobuf.BytesValue)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const BytesValue* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const BytesValue>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.protobuf.BytesValue)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.protobuf.BytesValue)
    MergeFrom(*source);
  }
}

void BytesValue::MergeFrom(const BytesValue& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.BytesValue)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.value().size() > 0) {
    set_value(from.value());
  }
}

void BytesValue::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.protobuf.BytesValue)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BytesValue::CopyFrom(const BytesValue& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.BytesValue)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BytesValue::IsInitialized() const {

  return true;
}

void BytesValue::Swap(BytesValue* other) {
  if (other == this) return;
  if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
    InternalSwap(other);
  } else {
    BytesValue temp;
    temp.MergeFrom(*this);
    CopyFrom(*other);
    other->CopyFrom(temp);
  }
}
void BytesValue::UnsafeArenaSwap(BytesValue* other) {
  if (other == this) return;
  GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
  InternalSwap(other);
}
void BytesValue::InternalSwap(BytesValue* other) {
  value_.Swap(&other->value_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata BytesValue::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = BytesValue_descriptor_;
  metadata.reflection = BytesValue_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// BytesValue

// optional bytes value = 1;
void BytesValue::clear_value() {
  value_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
 const ::std::string& BytesValue::value() const {
  // @@protoc_insertion_point(field_get:google.protobuf.BytesValue.value)
  return value_.Get(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void BytesValue::set_value(const ::std::string& value) {
  
  value_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:google.protobuf.BytesValue.value)
}
 void BytesValue::set_value(const char* value) {
  
  value_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:google.protobuf.BytesValue.value)
}
 void BytesValue::set_value(const void* value,
    size_t size) {
  
  value_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.BytesValue.value)
}
 ::std::string* BytesValue::mutable_value() {
  
  // @@protoc_insertion_point(field_mutable:google.protobuf.BytesValue.value)
  return value_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
 ::std::string* BytesValue::release_value() {
  // @@protoc_insertion_point(field_release:google.protobuf.BytesValue.value)
  
  return value_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
 ::std::string* BytesValue::unsafe_arena_release_value() {
  // @@protoc_insertion_point(field_unsafe_arena_release:google.protobuf.BytesValue.value)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return value_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
 void BytesValue::set_allocated_value(::std::string* value) {
  if (value != NULL) {
    
  } else {
    
  }
  value_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.BytesValue.value)
}
 void BytesValue::unsafe_arena_set_allocated_value(
    ::std::string* value) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (value != NULL) {
    
  } else {
    
  }
  value_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:google.protobuf.BytesValue.value)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

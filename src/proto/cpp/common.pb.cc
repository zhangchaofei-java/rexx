

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "common.pb.h"

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

namespace protocol {

namespace {

const ::google::protobuf::Descriptor* KeyPair_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  KeyPair_reflection_ = NULL;
const ::google::protobuf::Descriptor* Signature_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Signature_reflection_ = NULL;
const ::google::protobuf::Descriptor* LedgerUpgrade_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  LedgerUpgrade_reflection_ = NULL;
const ::google::protobuf::Descriptor* WsMessage_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  WsMessage_reflection_ = NULL;
const ::google::protobuf::Descriptor* Ping_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Ping_reflection_ = NULL;
const ::google::protobuf::Descriptor* Pong_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Pong_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* ERRORCODE_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_common_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_common_2eproto() {
  protobuf_AddDesc_common_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "common.proto");
  GOOGLE_CHECK(file != NULL);
  KeyPair_descriptor_ = file->message_type(0);
  static const int KeyPair_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(KeyPair, key_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(KeyPair, value_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(KeyPair, version_),
  };
  KeyPair_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      KeyPair_descriptor_,
      KeyPair::default_instance_,
      KeyPair_offsets_,
      -1,
      -1,
      -1,
      sizeof(KeyPair),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(KeyPair, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(KeyPair, _is_default_instance_));
  Signature_descriptor_ = file->message_type(1);
  static const int Signature_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Signature, public_key_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Signature, sign_data_),
  };
  Signature_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Signature_descriptor_,
      Signature::default_instance_,
      Signature_offsets_,
      -1,
      -1,
      -1,
      sizeof(Signature),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Signature, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Signature, _is_default_instance_));
  LedgerUpgrade_descriptor_ = file->message_type(2);
  static const int LedgerUpgrade_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LedgerUpgrade, new_ledger_version_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LedgerUpgrade, new_validator_),
  };
  LedgerUpgrade_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      LedgerUpgrade_descriptor_,
      LedgerUpgrade::default_instance_,
      LedgerUpgrade_offsets_,
      -1,
      -1,
      -1,
      sizeof(LedgerUpgrade),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LedgerUpgrade, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LedgerUpgrade, _is_default_instance_));
  WsMessage_descriptor_ = file->message_type(3);
  static const int WsMessage_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WsMessage, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WsMessage, request_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WsMessage, sequence_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WsMessage, data_),
  };
  WsMessage_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      WsMessage_descriptor_,
      WsMessage::default_instance_,
      WsMessage_offsets_,
      -1,
      -1,
      -1,
      sizeof(WsMessage),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WsMessage, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WsMessage, _is_default_instance_));
  Ping_descriptor_ = file->message_type(4);
  static const int Ping_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Ping, nonce_),
  };
  Ping_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Ping_descriptor_,
      Ping::default_instance_,
      Ping_offsets_,
      -1,
      -1,
      -1,
      sizeof(Ping),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Ping, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Ping, _is_default_instance_));
  Pong_descriptor_ = file->message_type(5);
  static const int Pong_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Pong, nonce_),
  };
  Pong_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Pong_descriptor_,
      Pong::default_instance_,
      Pong_offsets_,
      -1,
      -1,
      -1,
      sizeof(Pong),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Pong, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Pong, _is_default_instance_));
  ERRORCODE_descriptor_ = file->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_common_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      KeyPair_descriptor_, &KeyPair::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Signature_descriptor_, &Signature::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      LedgerUpgrade_descriptor_, &LedgerUpgrade::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      WsMessage_descriptor_, &WsMessage::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Ping_descriptor_, &Ping::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Pong_descriptor_, &Pong::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_common_2eproto() {
  delete KeyPair::default_instance_;
  delete KeyPair_reflection_;
  delete Signature::default_instance_;
  delete Signature_reflection_;
  delete LedgerUpgrade::default_instance_;
  delete LedgerUpgrade_reflection_;
  delete WsMessage::default_instance_;
  delete WsMessage_reflection_;
  delete Ping::default_instance_;
  delete Ping_reflection_;
  delete Pong::default_instance_;
  delete Pong_reflection_;
}

void protobuf_AddDesc_common_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_common_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\014common.proto\022\010protocol\"6\n\007KeyPair\022\013\n\003k"
    "ey\030\001 \001(\t\022\r\n\005value\030\002 \001(\t\022\017\n\007version\030\003 \001(\003"
    "\"2\n\tSignature\022\022\n\npublic_key\030\001 \001(\t\022\021\n\tsig"
    "n_data\030\002 \001(\014\"B\n\rLedgerUpgrade\022\032\n\022new_led"
    "ger_version\030\001 \001(\003\022\025\n\rnew_validator\030\002 \001(\t"
    "\"J\n\tWsMessage\022\014\n\004type\030\001 \001(\003\022\017\n\007request\030\002"
    " \001(\010\022\020\n\010sequence\030\003 \001(\003\022\014\n\004data\030\004 \001(\014\"\025\n\004"
    "Ping\022\r\n\005nonce\030\001 \001(\003\"\025\n\004Pong\022\r\n\005nonce\030\001 \001"
    "(\003*\317\t\n\tERRORCODE\022\023\n\017ERRCODE_SUCCESS\020\000\022\032\n"
    "\026ERRCODE_INTERNAL_ERROR\020\001\022\035\n\031ERRCODE_INV"
    "ALID_PARAMETER\020\002\022\031\n\025ERRCODE_ALREADY_EXIS"
    "T\020\003\022\025\n\021ERRCODE_NOT_EXIST\020\004\022\026\n\022ERRCODE_TX"
    "_TIMEOUT\020\005\022\031\n\025ERRCODE_ACCESS_DENIED\020\006\022\031\n"
    "\025ERRCODE_MATH_OVERFLOW\020\007\022\'\n#ERRCODE_EXPR"
    "_CONDITION_RESULT_FALSE\020\024\022\'\n#ERRCODE_EXP"
    "R_CONDITION_SYNTAX_ERROR\020\025\022\032\n\026ERRCODE_IN"
    "VALID_PUBKEY\020Z\022\032\n\026ERRCODE_INVALID_PRIKEY"
    "\020[\022\031\n\025ERRCODE_ASSET_INVALID\020\\\022\035\n\031ERRCODE"
    "_INVALID_SIGNATURE\020]\022\033\n\027ERRCODE_INVALID_"
    "ADDRESS\020^\022\036\n\032ERRCODE_MISSING_OPERATIONS\020"
    "a\022\037\n\033ERRCODE_TOO_MANY_OPERATIONS\020b\022\030\n\024ER"
    "RCODE_BAD_SEQUENCE\020c\022\037\n\033ERRCODE_ACCOUNT_"
    "LOW_RESERVE\020d\022$\n ERRCODE_ACCOUNT_SOURCED"
    "EST_EQUAL\020e\022\036\n\032ERRCODE_ACCOUNT_DEST_EXIS"
    "T\020f\022\035\n\031ERRCODE_ACCOUNT_NOT_EXIST\020g\022%\n!ER"
    "RCODE_ACCOUNT_ASSET_LOW_RESERVE\020h\022*\n&ERR"
    "CODE_ACCOUNT_ASSET_AMOUNT_TOO_LARGE\020i\022$\n"
    " ERRCODE_ACCOUNT_INIT_LOW_RESERVE\020j\022\032\n\026E"
    "RRCODE_FEE_NOT_ENOUGH\020o\022\027\n\023ERRCODE_FEE_I"
    "NVALID\020p\022\032\n\026ERRCODE_OUT_OF_TXCACHE\020r\022\034\n\030"
    "ERRCODE_WEIGHT_NOT_VALID\020x\022\037\n\033ERRCODE_TH"
    "RESHOLD_NOT_VALID\020y\022 \n\033ERRCODE_INVALID_D"
    "ATAVERSION\020\220\001\022\034\n\027ERRCODE_TX_SIZE_TOO_BIG"
    "\020\222\001\022\"\n\035ERRCODE_CONTRACT_EXECUTE_FAIL\020\227\001\022"
    "\"\n\035ERRCODE_CONTRACT_SYNTAX_ERROR\020\230\001\022(\n#E"
    "RRCODE_CONTRACT_TOO_MANY_RECURSION\020\231\001\022+\n"
    "&ERRCODE_CONTRACT_TOO_MANY_TRANSACTIONS\020"
    "\232\001\022%\n ERRCODE_CONTRACT_EXECUTE_EXPIRED\020\233"
    "\001\022!\n\034ERRCODE_TX_INSERT_QUEUE_FAIL\020\240\001B\"\n "
    "io.rexx.sdk.core.extend.protobufb\006proto3", 1600);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "common.proto", &protobuf_RegisterTypes);
  KeyPair::default_instance_ = new KeyPair();
  Signature::default_instance_ = new Signature();
  LedgerUpgrade::default_instance_ = new LedgerUpgrade();
  WsMessage::default_instance_ = new WsMessage();
  Ping::default_instance_ = new Ping();
  Pong::default_instance_ = new Pong();
  KeyPair::default_instance_->InitAsDefaultInstance();
  Signature::default_instance_->InitAsDefaultInstance();
  LedgerUpgrade::default_instance_->InitAsDefaultInstance();
  WsMessage::default_instance_->InitAsDefaultInstance();
  Ping::default_instance_->InitAsDefaultInstance();
  Pong::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_common_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_common_2eproto {
  StaticDescriptorInitializer_common_2eproto() {
    protobuf_AddDesc_common_2eproto();
  }
} static_descriptor_initializer_common_2eproto_;
const ::google::protobuf::EnumDescriptor* ERRORCODE_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ERRORCODE_descriptor_;
}
bool ERRORCODE_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 20:
    case 21:
    case 90:
    case 91:
    case 92:
    case 93:
    case 94:
    case 97:
    case 98:
    case 99:
    case 100:
    case 101:
    case 102:
    case 103:
    case 104:
    case 105:
    case 106:
    case 111:
    case 112:
    case 114:
    case 120:
    case 121:
    case 144:
    case 146:
    case 151:
    case 152:
    case 153:
    case 154:
    case 155:
    case 160:
      return true;
    default:
      return false;
  }
}


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int KeyPair::kKeyFieldNumber;
const int KeyPair::kValueFieldNumber;
const int KeyPair::kVersionFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

KeyPair::KeyPair()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.KeyPair)
}

void KeyPair::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

KeyPair::KeyPair(const KeyPair& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protocol.KeyPair)
}

void KeyPair::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  key_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  version_ = GOOGLE_LONGLONG(0);
}

KeyPair::~KeyPair() {
  // @@protoc_insertion_point(destructor:protocol.KeyPair)
  SharedDtor();
}

void KeyPair::SharedDtor() {
  key_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  value_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void KeyPair::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* KeyPair::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return KeyPair_descriptor_;
}

const KeyPair& KeyPair::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_common_2eproto();
  return *default_instance_;
}

KeyPair* KeyPair::default_instance_ = NULL;

KeyPair* KeyPair::New(::google::protobuf::Arena* arena) const {
  KeyPair* n = new KeyPair;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void KeyPair::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.KeyPair)
  key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  version_ = GOOGLE_LONGLONG(0);
}

bool KeyPair::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.KeyPair)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string key = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_key()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->key().data(), this->key().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "protocol.KeyPair.key"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_value;
        break;
      }

      // optional string value = 2;
      case 2: {
        if (tag == 18) {
         parse_value:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_value()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->value().data(), this->value().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "protocol.KeyPair.value"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_version;
        break;
      }

      // optional int64 version = 3;
      case 3: {
        if (tag == 24) {
         parse_version:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &version_)));

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
  // @@protoc_insertion_point(parse_success:protocol.KeyPair)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.KeyPair)
  return false;
#undef DO_
}

void KeyPair::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.KeyPair)
  // optional string key = 1;
  if (this->key().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->key().data(), this->key().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.KeyPair.key");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->key(), output);
  }

  // optional string value = 2;
  if (this->value().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->value().data(), this->value().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.KeyPair.value");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->value(), output);
  }

  // optional int64 version = 3;
  if (this->version() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(3, this->version(), output);
  }

  // @@protoc_insertion_point(serialize_end:protocol.KeyPair)
}

::google::protobuf::uint8* KeyPair::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.KeyPair)
  // optional string key = 1;
  if (this->key().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->key().data(), this->key().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.KeyPair.key");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->key(), target);
  }

  // optional string value = 2;
  if (this->value().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->value().data(), this->value().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.KeyPair.value");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->value(), target);
  }

  // optional int64 version = 3;
  if (this->version() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(3, this->version(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:protocol.KeyPair)
  return target;
}

int KeyPair::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.KeyPair)
  int total_size = 0;

  // optional string key = 1;
  if (this->key().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->key());
  }

  // optional string value = 2;
  if (this->value().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->value());
  }

  // optional int64 version = 3;
  if (this->version() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->version());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void KeyPair::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protocol.KeyPair)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const KeyPair* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const KeyPair>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protocol.KeyPair)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protocol.KeyPair)
    MergeFrom(*source);
  }
}

void KeyPair::MergeFrom(const KeyPair& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.KeyPair)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.key().size() > 0) {

    key_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.key_);
  }
  if (from.value().size() > 0) {

    value_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.value_);
  }
  if (from.version() != 0) {
    set_version(from.version());
  }
}

void KeyPair::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protocol.KeyPair)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void KeyPair::CopyFrom(const KeyPair& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.KeyPair)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool KeyPair::IsInitialized() const {

  return true;
}

void KeyPair::Swap(KeyPair* other) {
  if (other == this) return;
  InternalSwap(other);
}
void KeyPair::InternalSwap(KeyPair* other) {
  key_.Swap(&other->key_);
  value_.Swap(&other->value_);
  std::swap(version_, other->version_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata KeyPair::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = KeyPair_descriptor_;
  metadata.reflection = KeyPair_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// KeyPair

// optional string key = 1;
void KeyPair::clear_key() {
  key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& KeyPair::key() const {
  // @@protoc_insertion_point(field_get:protocol.KeyPair.key)
  return key_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void KeyPair::set_key(const ::std::string& value) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.KeyPair.key)
}
 void KeyPair::set_key(const char* value) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.KeyPair.key)
}
 void KeyPair::set_key(const char* value, size_t size) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.KeyPair.key)
}
 ::std::string* KeyPair::mutable_key() {
  
  // @@protoc_insertion_point(field_mutable:protocol.KeyPair.key)
  return key_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* KeyPair::release_key() {
  // @@protoc_insertion_point(field_release:protocol.KeyPair.key)
  
  return key_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void KeyPair::set_allocated_key(::std::string* key) {
  if (key != NULL) {
    
  } else {
    
  }
  key_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), key);
  // @@protoc_insertion_point(field_set_allocated:protocol.KeyPair.key)
}

// optional string value = 2;
void KeyPair::clear_value() {
  value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& KeyPair::value() const {
  // @@protoc_insertion_point(field_get:protocol.KeyPair.value)
  return value_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void KeyPair::set_value(const ::std::string& value) {
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.KeyPair.value)
}
 void KeyPair::set_value(const char* value) {
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.KeyPair.value)
}
 void KeyPair::set_value(const char* value, size_t size) {
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.KeyPair.value)
}
 ::std::string* KeyPair::mutable_value() {
  
  // @@protoc_insertion_point(field_mutable:protocol.KeyPair.value)
  return value_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* KeyPair::release_value() {
  // @@protoc_insertion_point(field_release:protocol.KeyPair.value)
  
  return value_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void KeyPair::set_allocated_value(::std::string* value) {
  if (value != NULL) {
    
  } else {
    
  }
  value_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set_allocated:protocol.KeyPair.value)
}

// optional int64 version = 3;
void KeyPair::clear_version() {
  version_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 KeyPair::version() const {
  // @@protoc_insertion_point(field_get:protocol.KeyPair.version)
  return version_;
}
 void KeyPair::set_version(::google::protobuf::int64 value) {
  
  version_ = value;
  // @@protoc_insertion_point(field_set:protocol.KeyPair.version)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Signature::kPublicKeyFieldNumber;
const int Signature::kSignDataFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Signature::Signature()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.Signature)
}

void Signature::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

Signature::Signature(const Signature& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protocol.Signature)
}

void Signature::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  public_key_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  sign_data_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

Signature::~Signature() {
  // @@protoc_insertion_point(destructor:protocol.Signature)
  SharedDtor();
}

void Signature::SharedDtor() {
  public_key_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  sign_data_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void Signature::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Signature::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Signature_descriptor_;
}

const Signature& Signature::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_common_2eproto();
  return *default_instance_;
}

Signature* Signature::default_instance_ = NULL;

Signature* Signature::New(::google::protobuf::Arena* arena) const {
  Signature* n = new Signature;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Signature::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.Signature)
  public_key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  sign_data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool Signature::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.Signature)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string public_key = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_public_key()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->public_key().data(), this->public_key().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "protocol.Signature.public_key"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_sign_data;
        break;
      }

      // optional bytes sign_data = 2;
      case 2: {
        if (tag == 18) {
         parse_sign_data:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_sign_data()));
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
  // @@protoc_insertion_point(parse_success:protocol.Signature)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.Signature)
  return false;
#undef DO_
}

void Signature::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.Signature)
  // optional string public_key = 1;
  if (this->public_key().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->public_key().data(), this->public_key().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.Signature.public_key");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->public_key(), output);
  }

  // optional bytes sign_data = 2;
  if (this->sign_data().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      2, this->sign_data(), output);
  }

  // @@protoc_insertion_point(serialize_end:protocol.Signature)
}

::google::protobuf::uint8* Signature::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.Signature)
  // optional string public_key = 1;
  if (this->public_key().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->public_key().data(), this->public_key().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.Signature.public_key");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->public_key(), target);
  }

  // optional bytes sign_data = 2;
  if (this->sign_data().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        2, this->sign_data(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:protocol.Signature)
  return target;
}

int Signature::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.Signature)
  int total_size = 0;

  // optional string public_key = 1;
  if (this->public_key().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->public_key());
  }

  // optional bytes sign_data = 2;
  if (this->sign_data().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->sign_data());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Signature::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protocol.Signature)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const Signature* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Signature>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protocol.Signature)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protocol.Signature)
    MergeFrom(*source);
  }
}

void Signature::MergeFrom(const Signature& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.Signature)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.public_key().size() > 0) {

    public_key_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.public_key_);
  }
  if (from.sign_data().size() > 0) {

    sign_data_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.sign_data_);
  }
}

void Signature::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protocol.Signature)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Signature::CopyFrom(const Signature& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.Signature)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Signature::IsInitialized() const {

  return true;
}

void Signature::Swap(Signature* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Signature::InternalSwap(Signature* other) {
  public_key_.Swap(&other->public_key_);
  sign_data_.Swap(&other->sign_data_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Signature::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Signature_descriptor_;
  metadata.reflection = Signature_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Signature

// optional string public_key = 1;
void Signature::clear_public_key() {
  public_key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& Signature::public_key() const {
  // @@protoc_insertion_point(field_get:protocol.Signature.public_key)
  return public_key_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Signature::set_public_key(const ::std::string& value) {
  
  public_key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.Signature.public_key)
}
 void Signature::set_public_key(const char* value) {
  
  public_key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.Signature.public_key)
}
 void Signature::set_public_key(const char* value, size_t size) {
  
  public_key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.Signature.public_key)
}
 ::std::string* Signature::mutable_public_key() {
  
  // @@protoc_insertion_point(field_mutable:protocol.Signature.public_key)
  return public_key_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* Signature::release_public_key() {
  // @@protoc_insertion_point(field_release:protocol.Signature.public_key)
  
  return public_key_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Signature::set_allocated_public_key(::std::string* public_key) {
  if (public_key != NULL) {
    
  } else {
    
  }
  public_key_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), public_key);
  // @@protoc_insertion_point(field_set_allocated:protocol.Signature.public_key)
}

// optional bytes sign_data = 2;
void Signature::clear_sign_data() {
  sign_data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& Signature::sign_data() const {
  // @@protoc_insertion_point(field_get:protocol.Signature.sign_data)
  return sign_data_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Signature::set_sign_data(const ::std::string& value) {
  
  sign_data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.Signature.sign_data)
}
 void Signature::set_sign_data(const char* value) {
  
  sign_data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.Signature.sign_data)
}
 void Signature::set_sign_data(const void* value, size_t size) {
  
  sign_data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.Signature.sign_data)
}
 ::std::string* Signature::mutable_sign_data() {
  
  // @@protoc_insertion_point(field_mutable:protocol.Signature.sign_data)
  return sign_data_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* Signature::release_sign_data() {
  // @@protoc_insertion_point(field_release:protocol.Signature.sign_data)
  
  return sign_data_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Signature::set_allocated_sign_data(::std::string* sign_data) {
  if (sign_data != NULL) {
    
  } else {
    
  }
  sign_data_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), sign_data);
  // @@protoc_insertion_point(field_set_allocated:protocol.Signature.sign_data)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LedgerUpgrade::kNewLedgerVersionFieldNumber;
const int LedgerUpgrade::kNewValidatorFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LedgerUpgrade::LedgerUpgrade()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.LedgerUpgrade)
}

void LedgerUpgrade::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

LedgerUpgrade::LedgerUpgrade(const LedgerUpgrade& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protocol.LedgerUpgrade)
}

void LedgerUpgrade::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  new_ledger_version_ = GOOGLE_LONGLONG(0);
  new_validator_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

LedgerUpgrade::~LedgerUpgrade() {
  // @@protoc_insertion_point(destructor:protocol.LedgerUpgrade)
  SharedDtor();
}

void LedgerUpgrade::SharedDtor() {
  new_validator_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void LedgerUpgrade::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LedgerUpgrade::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return LedgerUpgrade_descriptor_;
}

const LedgerUpgrade& LedgerUpgrade::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_common_2eproto();
  return *default_instance_;
}

LedgerUpgrade* LedgerUpgrade::default_instance_ = NULL;

LedgerUpgrade* LedgerUpgrade::New(::google::protobuf::Arena* arena) const {
  LedgerUpgrade* n = new LedgerUpgrade;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LedgerUpgrade::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.LedgerUpgrade)
  new_ledger_version_ = GOOGLE_LONGLONG(0);
  new_validator_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool LedgerUpgrade::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.LedgerUpgrade)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int64 new_ledger_version = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &new_ledger_version_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_new_validator;
        break;
      }

      // optional string new_validator = 2;
      case 2: {
        if (tag == 18) {
         parse_new_validator:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_new_validator()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->new_validator().data(), this->new_validator().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "protocol.LedgerUpgrade.new_validator"));
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
  // @@protoc_insertion_point(parse_success:protocol.LedgerUpgrade)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.LedgerUpgrade)
  return false;
#undef DO_
}

void LedgerUpgrade::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.LedgerUpgrade)
  // optional int64 new_ledger_version = 1;
  if (this->new_ledger_version() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->new_ledger_version(), output);
  }

  // optional string new_validator = 2;
  if (this->new_validator().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->new_validator().data(), this->new_validator().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.LedgerUpgrade.new_validator");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->new_validator(), output);
  }

  // @@protoc_insertion_point(serialize_end:protocol.LedgerUpgrade)
}

::google::protobuf::uint8* LedgerUpgrade::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.LedgerUpgrade)
  // optional int64 new_ledger_version = 1;
  if (this->new_ledger_version() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->new_ledger_version(), target);
  }

  // optional string new_validator = 2;
  if (this->new_validator().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->new_validator().data(), this->new_validator().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.LedgerUpgrade.new_validator");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->new_validator(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:protocol.LedgerUpgrade)
  return target;
}

int LedgerUpgrade::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.LedgerUpgrade)
  int total_size = 0;

  // optional int64 new_ledger_version = 1;
  if (this->new_ledger_version() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->new_ledger_version());
  }

  // optional string new_validator = 2;
  if (this->new_validator().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->new_validator());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LedgerUpgrade::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protocol.LedgerUpgrade)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const LedgerUpgrade* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const LedgerUpgrade>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protocol.LedgerUpgrade)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protocol.LedgerUpgrade)
    MergeFrom(*source);
  }
}

void LedgerUpgrade::MergeFrom(const LedgerUpgrade& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.LedgerUpgrade)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.new_ledger_version() != 0) {
    set_new_ledger_version(from.new_ledger_version());
  }
  if (from.new_validator().size() > 0) {

    new_validator_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.new_validator_);
  }
}

void LedgerUpgrade::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protocol.LedgerUpgrade)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LedgerUpgrade::CopyFrom(const LedgerUpgrade& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.LedgerUpgrade)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LedgerUpgrade::IsInitialized() const {

  return true;
}

void LedgerUpgrade::Swap(LedgerUpgrade* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LedgerUpgrade::InternalSwap(LedgerUpgrade* other) {
  std::swap(new_ledger_version_, other->new_ledger_version_);
  new_validator_.Swap(&other->new_validator_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LedgerUpgrade::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = LedgerUpgrade_descriptor_;
  metadata.reflection = LedgerUpgrade_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LedgerUpgrade

// optional int64 new_ledger_version = 1;
void LedgerUpgrade::clear_new_ledger_version() {
  new_ledger_version_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 LedgerUpgrade::new_ledger_version() const {
  // @@protoc_insertion_point(field_get:protocol.LedgerUpgrade.new_ledger_version)
  return new_ledger_version_;
}
 void LedgerUpgrade::set_new_ledger_version(::google::protobuf::int64 value) {
  
  new_ledger_version_ = value;
  // @@protoc_insertion_point(field_set:protocol.LedgerUpgrade.new_ledger_version)
}

// optional string new_validator = 2;
void LedgerUpgrade::clear_new_validator() {
  new_validator_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& LedgerUpgrade::new_validator() const {
  // @@protoc_insertion_point(field_get:protocol.LedgerUpgrade.new_validator)
  return new_validator_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void LedgerUpgrade::set_new_validator(const ::std::string& value) {
  
  new_validator_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.LedgerUpgrade.new_validator)
}
 void LedgerUpgrade::set_new_validator(const char* value) {
  
  new_validator_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.LedgerUpgrade.new_validator)
}
 void LedgerUpgrade::set_new_validator(const char* value, size_t size) {
  
  new_validator_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.LedgerUpgrade.new_validator)
}
 ::std::string* LedgerUpgrade::mutable_new_validator() {
  
  // @@protoc_insertion_point(field_mutable:protocol.LedgerUpgrade.new_validator)
  return new_validator_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* LedgerUpgrade::release_new_validator() {
  // @@protoc_insertion_point(field_release:protocol.LedgerUpgrade.new_validator)
  
  return new_validator_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void LedgerUpgrade::set_allocated_new_validator(::std::string* new_validator) {
  if (new_validator != NULL) {
    
  } else {
    
  }
  new_validator_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), new_validator);
  // @@protoc_insertion_point(field_set_allocated:protocol.LedgerUpgrade.new_validator)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int WsMessage::kTypeFieldNumber;
const int WsMessage::kRequestFieldNumber;
const int WsMessage::kSequenceFieldNumber;
const int WsMessage::kDataFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

WsMessage::WsMessage()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.WsMessage)
}

void WsMessage::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

WsMessage::WsMessage(const WsMessage& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protocol.WsMessage)
}

void WsMessage::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  type_ = GOOGLE_LONGLONG(0);
  request_ = false;
  sequence_ = GOOGLE_LONGLONG(0);
  data_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

WsMessage::~WsMessage() {
  // @@protoc_insertion_point(destructor:protocol.WsMessage)
  SharedDtor();
}

void WsMessage::SharedDtor() {
  data_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void WsMessage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* WsMessage::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return WsMessage_descriptor_;
}

const WsMessage& WsMessage::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_common_2eproto();
  return *default_instance_;
}

WsMessage* WsMessage::default_instance_ = NULL;

WsMessage* WsMessage::New(::google::protobuf::Arena* arena) const {
  WsMessage* n = new WsMessage;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void WsMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.WsMessage)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(WsMessage, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<WsMessage*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(type_, sequence_);
  request_ = false;
  data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());

#undef ZR_HELPER_
#undef ZR_

}

bool WsMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.WsMessage)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int64 type = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &type_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_request;
        break;
      }

      // optional bool request = 2;
      case 2: {
        if (tag == 16) {
         parse_request:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &request_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_sequence;
        break;
      }

      // optional int64 sequence = 3;
      case 3: {
        if (tag == 24) {
         parse_sequence:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &sequence_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_data;
        break;
      }

      // optional bytes data = 4;
      case 4: {
        if (tag == 34) {
         parse_data:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_data()));
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
  // @@protoc_insertion_point(parse_success:protocol.WsMessage)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.WsMessage)
  return false;
#undef DO_
}

void WsMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.WsMessage)
  // optional int64 type = 1;
  if (this->type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->type(), output);
  }

  // optional bool request = 2;
  if (this->request() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(2, this->request(), output);
  }

  // optional int64 sequence = 3;
  if (this->sequence() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(3, this->sequence(), output);
  }

  // optional bytes data = 4;
  if (this->data().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      4, this->data(), output);
  }

  // @@protoc_insertion_point(serialize_end:protocol.WsMessage)
}

::google::protobuf::uint8* WsMessage::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.WsMessage)
  // optional int64 type = 1;
  if (this->type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->type(), target);
  }

  // optional bool request = 2;
  if (this->request() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(2, this->request(), target);
  }

  // optional int64 sequence = 3;
  if (this->sequence() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(3, this->sequence(), target);
  }

  // optional bytes data = 4;
  if (this->data().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        4, this->data(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:protocol.WsMessage)
  return target;
}

int WsMessage::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.WsMessage)
  int total_size = 0;

  // optional int64 type = 1;
  if (this->type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->type());
  }

  // optional bool request = 2;
  if (this->request() != 0) {
    total_size += 1 + 1;
  }

  // optional int64 sequence = 3;
  if (this->sequence() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->sequence());
  }

  // optional bytes data = 4;
  if (this->data().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->data());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void WsMessage::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protocol.WsMessage)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const WsMessage* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const WsMessage>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protocol.WsMessage)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protocol.WsMessage)
    MergeFrom(*source);
  }
}

void WsMessage::MergeFrom(const WsMessage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.WsMessage)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.type() != 0) {
    set_type(from.type());
  }
  if (from.request() != 0) {
    set_request(from.request());
  }
  if (from.sequence() != 0) {
    set_sequence(from.sequence());
  }
  if (from.data().size() > 0) {

    data_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.data_);
  }
}

void WsMessage::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protocol.WsMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void WsMessage::CopyFrom(const WsMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.WsMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool WsMessage::IsInitialized() const {

  return true;
}

void WsMessage::Swap(WsMessage* other) {
  if (other == this) return;
  InternalSwap(other);
}
void WsMessage::InternalSwap(WsMessage* other) {
  std::swap(type_, other->type_);
  std::swap(request_, other->request_);
  std::swap(sequence_, other->sequence_);
  data_.Swap(&other->data_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata WsMessage::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = WsMessage_descriptor_;
  metadata.reflection = WsMessage_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// WsMessage

// optional int64 type = 1;
void WsMessage::clear_type() {
  type_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 WsMessage::type() const {
  // @@protoc_insertion_point(field_get:protocol.WsMessage.type)
  return type_;
}
 void WsMessage::set_type(::google::protobuf::int64 value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:protocol.WsMessage.type)
}

// optional bool request = 2;
void WsMessage::clear_request() {
  request_ = false;
}
 bool WsMessage::request() const {
  // @@protoc_insertion_point(field_get:protocol.WsMessage.request)
  return request_;
}
 void WsMessage::set_request(bool value) {
  
  request_ = value;
  // @@protoc_insertion_point(field_set:protocol.WsMessage.request)
}

// optional int64 sequence = 3;
void WsMessage::clear_sequence() {
  sequence_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 WsMessage::sequence() const {
  // @@protoc_insertion_point(field_get:protocol.WsMessage.sequence)
  return sequence_;
}
 void WsMessage::set_sequence(::google::protobuf::int64 value) {
  
  sequence_ = value;
  // @@protoc_insertion_point(field_set:protocol.WsMessage.sequence)
}

// optional bytes data = 4;
void WsMessage::clear_data() {
  data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& WsMessage::data() const {
  // @@protoc_insertion_point(field_get:protocol.WsMessage.data)
  return data_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void WsMessage::set_data(const ::std::string& value) {
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.WsMessage.data)
}
 void WsMessage::set_data(const char* value) {
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.WsMessage.data)
}
 void WsMessage::set_data(const void* value, size_t size) {
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.WsMessage.data)
}
 ::std::string* WsMessage::mutable_data() {
  
  // @@protoc_insertion_point(field_mutable:protocol.WsMessage.data)
  return data_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* WsMessage::release_data() {
  // @@protoc_insertion_point(field_release:protocol.WsMessage.data)
  
  return data_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void WsMessage::set_allocated_data(::std::string* data) {
  if (data != NULL) {
    
  } else {
    
  }
  data_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), data);
  // @@protoc_insertion_point(field_set_allocated:protocol.WsMessage.data)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Ping::kNonceFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Ping::Ping()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.Ping)
}

void Ping::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

Ping::Ping(const Ping& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protocol.Ping)
}

void Ping::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  nonce_ = GOOGLE_LONGLONG(0);
}

Ping::~Ping() {
  // @@protoc_insertion_point(destructor:protocol.Ping)
  SharedDtor();
}

void Ping::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Ping::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Ping::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Ping_descriptor_;
}

const Ping& Ping::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_common_2eproto();
  return *default_instance_;
}

Ping* Ping::default_instance_ = NULL;

Ping* Ping::New(::google::protobuf::Arena* arena) const {
  Ping* n = new Ping;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Ping::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.Ping)
  nonce_ = GOOGLE_LONGLONG(0);
}

bool Ping::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.Ping)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int64 nonce = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &nonce_)));

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
  // @@protoc_insertion_point(parse_success:protocol.Ping)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.Ping)
  return false;
#undef DO_
}

void Ping::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.Ping)
  // optional int64 nonce = 1;
  if (this->nonce() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->nonce(), output);
  }

  // @@protoc_insertion_point(serialize_end:protocol.Ping)
}

::google::protobuf::uint8* Ping::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.Ping)
  // optional int64 nonce = 1;
  if (this->nonce() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->nonce(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:protocol.Ping)
  return target;
}

int Ping::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.Ping)
  int total_size = 0;

  // optional int64 nonce = 1;
  if (this->nonce() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->nonce());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Ping::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protocol.Ping)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const Ping* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Ping>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protocol.Ping)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protocol.Ping)
    MergeFrom(*source);
  }
}

void Ping::MergeFrom(const Ping& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.Ping)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.nonce() != 0) {
    set_nonce(from.nonce());
  }
}

void Ping::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protocol.Ping)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Ping::CopyFrom(const Ping& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.Ping)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Ping::IsInitialized() const {

  return true;
}

void Ping::Swap(Ping* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Ping::InternalSwap(Ping* other) {
  std::swap(nonce_, other->nonce_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Ping::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Ping_descriptor_;
  metadata.reflection = Ping_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Ping

// optional int64 nonce = 1;
void Ping::clear_nonce() {
  nonce_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 Ping::nonce() const {
  // @@protoc_insertion_point(field_get:protocol.Ping.nonce)
  return nonce_;
}
 void Ping::set_nonce(::google::protobuf::int64 value) {
  
  nonce_ = value;
  // @@protoc_insertion_point(field_set:protocol.Ping.nonce)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Pong::kNonceFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Pong::Pong()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.Pong)
}

void Pong::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

Pong::Pong(const Pong& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protocol.Pong)
}

void Pong::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  nonce_ = GOOGLE_LONGLONG(0);
}

Pong::~Pong() {
  // @@protoc_insertion_point(destructor:protocol.Pong)
  SharedDtor();
}

void Pong::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Pong::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Pong::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Pong_descriptor_;
}

const Pong& Pong::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_common_2eproto();
  return *default_instance_;
}

Pong* Pong::default_instance_ = NULL;

Pong* Pong::New(::google::protobuf::Arena* arena) const {
  Pong* n = new Pong;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Pong::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.Pong)
  nonce_ = GOOGLE_LONGLONG(0);
}

bool Pong::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.Pong)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int64 nonce = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &nonce_)));

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
  // @@protoc_insertion_point(parse_success:protocol.Pong)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.Pong)
  return false;
#undef DO_
}

void Pong::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.Pong)
  // optional int64 nonce = 1;
  if (this->nonce() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->nonce(), output);
  }

  // @@protoc_insertion_point(serialize_end:protocol.Pong)
}

::google::protobuf::uint8* Pong::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.Pong)
  // optional int64 nonce = 1;
  if (this->nonce() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->nonce(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:protocol.Pong)
  return target;
}

int Pong::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.Pong)
  int total_size = 0;

  // optional int64 nonce = 1;
  if (this->nonce() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->nonce());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Pong::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protocol.Pong)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const Pong* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Pong>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protocol.Pong)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protocol.Pong)
    MergeFrom(*source);
  }
}

void Pong::MergeFrom(const Pong& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.Pong)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.nonce() != 0) {
    set_nonce(from.nonce());
  }
}

void Pong::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protocol.Pong)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Pong::CopyFrom(const Pong& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.Pong)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Pong::IsInitialized() const {

  return true;
}

void Pong::Swap(Pong* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Pong::InternalSwap(Pong* other) {
  std::swap(nonce_, other->nonce_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Pong::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Pong_descriptor_;
  metadata.reflection = Pong_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Pong

// optional int64 nonce = 1;
void Pong::clear_nonce() {
  nonce_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 Pong::nonce() const {
  // @@protoc_insertion_point(field_get:protocol.Pong.nonce)
  return nonce_;
}
 void Pong::set_nonce(::google::protobuf::int64 value) {
  
  nonce_ = value;
  // @@protoc_insertion_point(field_set:protocol.Pong.nonce)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace protocol

// @@protoc_insertion_point(global_scope)

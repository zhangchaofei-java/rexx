
#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include <google/protobuf/api.pb.h>

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

const ::google::protobuf::Descriptor* Api_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Api_reflection_ = NULL;
const ::google::protobuf::Descriptor* Method_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Method_reflection_ = NULL;
const ::google::protobuf::Descriptor* Mixin_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Mixin_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_google_2fprotobuf_2fapi_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_google_2fprotobuf_2fapi_2eproto() {
  protobuf_AddDesc_google_2fprotobuf_2fapi_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "google/protobuf/api.proto");
  GOOGLE_CHECK(file != NULL);
  Api_descriptor_ = file->message_type(0);
  static const int Api_offsets_[7] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Api, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Api, methods_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Api, options_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Api, version_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Api, source_context_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Api, mixins_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Api, syntax_),
  };
  Api_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Api_descriptor_,
      Api::default_instance_,
      Api_offsets_,
      -1,
      -1,
      -1,
      sizeof(Api),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Api, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Api, _is_default_instance_));
  Method_descriptor_ = file->message_type(1);
  static const int Method_offsets_[7] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Method, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Method, request_type_url_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Method, request_streaming_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Method, response_type_url_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Method, response_streaming_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Method, options_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Method, syntax_),
  };
  Method_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Method_descriptor_,
      Method::default_instance_,
      Method_offsets_,
      -1,
      -1,
      -1,
      sizeof(Method),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Method, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Method, _is_default_instance_));
  Mixin_descriptor_ = file->message_type(2);
  static const int Mixin_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Mixin, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Mixin, root_),
  };
  Mixin_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Mixin_descriptor_,
      Mixin::default_instance_,
      Mixin_offsets_,
      -1,
      -1,
      -1,
      sizeof(Mixin),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Mixin, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Mixin, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_google_2fprotobuf_2fapi_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Api_descriptor_, &Api::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Method_descriptor_, &Method::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Mixin_descriptor_, &Mixin::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_google_2fprotobuf_2fapi_2eproto() {
  delete Api::default_instance_;
  delete Api_reflection_;
  delete Method::default_instance_;
  delete Method_reflection_;
  delete Mixin::default_instance_;
  delete Mixin_reflection_;
}

void protobuf_AddDesc_google_2fprotobuf_2fapi_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_google_2fprotobuf_2fapi_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::protobuf_AddDesc_google_2fprotobuf_2fsource_5fcontext_2eproto();
  ::google::protobuf::protobuf_AddDesc_google_2fprotobuf_2ftype_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\031google/protobuf/api.proto\022\017google.prot"
    "obuf\032$google/protobuf/source_context.pro"
    "to\032\032google/protobuf/type.proto\"\201\002\n\003Api\022\014"
    "\n\004name\030\001 \001(\t\022(\n\007methods\030\002 \003(\0132\027.google.p"
    "rotobuf.Method\022(\n\007options\030\003 \003(\0132\027.google"
    ".protobuf.Option\022\017\n\007version\030\004 \001(\t\0226\n\016sou"
    "rce_context\030\005 \001(\0132\036.google.protobuf.Sour"
    "ceContext\022&\n\006mixins\030\006 \003(\0132\026.google.proto"
    "buf.Mixin\022\'\n\006syntax\030\007 \001(\0162\027.google.proto"
    "buf.Syntax\"\325\001\n\006Method\022\014\n\004name\030\001 \001(\t\022\030\n\020r"
    "equest_type_url\030\002 \001(\t\022\031\n\021request_streami"
    "ng\030\003 \001(\010\022\031\n\021response_type_url\030\004 \001(\t\022\032\n\022r"
    "esponse_streaming\030\005 \001(\010\022(\n\007options\030\006 \003(\013"
    "2\027.google.protobuf.Option\022\'\n\006syntax\030\007 \001("
    "\0162\027.google.protobuf.Syntax\"#\n\005Mixin\022\014\n\004n"
    "ame\030\001 \001(\t\022\014\n\004root\030\002 \001(\tBK\n\023com.google.pr"
    "otobufB\010ApiProtoP\001\240\001\001\242\002\003GPB\252\002\036Google.Pro"
    "tobuf.WellKnownTypesb\006proto3", 708);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/protobuf/api.proto", &protobuf_RegisterTypes);
  Api::default_instance_ = new Api();
  Method::default_instance_ = new Method();
  Mixin::default_instance_ = new Mixin();
  Api::default_instance_->InitAsDefaultInstance();
  Method::default_instance_->InitAsDefaultInstance();
  Mixin::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_google_2fprotobuf_2fapi_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_google_2fprotobuf_2fapi_2eproto {
  StaticDescriptorInitializer_google_2fprotobuf_2fapi_2eproto() {
    protobuf_AddDesc_google_2fprotobuf_2fapi_2eproto();
  }
} static_descriptor_initializer_google_2fprotobuf_2fapi_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Api::kNameFieldNumber;
const int Api::kMethodsFieldNumber;
const int Api::kOptionsFieldNumber;
const int Api::kVersionFieldNumber;
const int Api::kSourceContextFieldNumber;
const int Api::kMixinsFieldNumber;
const int Api::kSyntaxFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Api::Api()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.protobuf.Api)
}

void Api::InitAsDefaultInstance() {
  _is_default_instance_ = true;
  source_context_ = const_cast< ::google::protobuf::SourceContext*>(&::google::protobuf::SourceContext::default_instance());
}

Api::Api(const Api& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:google.protobuf.Api)
}

void Api::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  version_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  source_context_ = NULL;
  syntax_ = 0;
}

Api::~Api() {
  // @@protoc_insertion_point(destructor:google.protobuf.Api)
  SharedDtor();
}

void Api::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  version_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
    delete source_context_;
  }
}

void Api::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Api::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Api_descriptor_;
}

const Api& Api::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_google_2fprotobuf_2fapi_2eproto();
  return *default_instance_;
}

Api* Api::default_instance_ = NULL;

Api* Api::New(::google::protobuf::Arena* arena) const {
  Api* n = new Api;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Api::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.Api)
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  version_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == NULL && source_context_ != NULL) delete source_context_;
  source_context_ = NULL;
  syntax_ = 0;
  methods_.Clear();
  options_.Clear();
  mixins_.Clear();
}

bool Api::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.protobuf.Api)
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
            "google.protobuf.Api.name"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_methods;
        break;
      }

      // repeated .google.protobuf.Method methods = 2;
      case 2: {
        if (tag == 18) {
         parse_methods:
          DO_(input->IncrementRecursionDepth());
         parse_loop_methods:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_methods()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_loop_methods;
        if (input->ExpectTag(26)) goto parse_loop_options;
        input->UnsafeDecrementRecursionDepth();
        break;
      }

      // repeated .google.protobuf.Option options = 3;
      case 3: {
        if (tag == 26) {
          DO_(input->IncrementRecursionDepth());
         parse_loop_options:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_options()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_loop_options;
        input->UnsafeDecrementRecursionDepth();
        if (input->ExpectTag(34)) goto parse_version;
        break;
      }

      // optional string version = 4;
      case 4: {
        if (tag == 34) {
         parse_version:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_version()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->version().data(), this->version().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.protobuf.Api.version"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(42)) goto parse_source_context;
        break;
      }

      // optional .google.protobuf.SourceContext source_context = 5;
      case 5: {
        if (tag == 42) {
         parse_source_context:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_source_context()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(50)) goto parse_mixins;
        break;
      }

      // repeated .google.protobuf.Mixin mixins = 6;
      case 6: {
        if (tag == 50) {
         parse_mixins:
          DO_(input->IncrementRecursionDepth());
         parse_loop_mixins:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_mixins()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(50)) goto parse_loop_mixins;
        input->UnsafeDecrementRecursionDepth();
        if (input->ExpectTag(56)) goto parse_syntax;
        break;
      }

      // optional .google.protobuf.Syntax syntax = 7;
      case 7: {
        if (tag == 56) {
         parse_syntax:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_syntax(static_cast< ::google::protobuf::Syntax >(value));
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
  // @@protoc_insertion_point(parse_success:google.protobuf.Api)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.protobuf.Api)
  return false;
#undef DO_
}

void Api::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.protobuf.Api)
  // optional string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.protobuf.Api.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // repeated .google.protobuf.Method methods = 2;
  for (unsigned int i = 0, n = this->methods_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->methods(i), output);
  }

  // repeated .google.protobuf.Option options = 3;
  for (unsigned int i = 0, n = this->options_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->options(i), output);
  }

  // optional string version = 4;
  if (this->version().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->version().data(), this->version().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.protobuf.Api.version");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->version(), output);
  }

  // optional .google.protobuf.SourceContext source_context = 5;
  if (this->has_source_context()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, *this->source_context_, output);
  }

  // repeated .google.protobuf.Mixin mixins = 6;
  for (unsigned int i = 0, n = this->mixins_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      6, this->mixins(i), output);
  }

  // optional .google.protobuf.Syntax syntax = 7;
  if (this->syntax() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      7, this->syntax(), output);
  }

  // @@protoc_insertion_point(serialize_end:google.protobuf.Api)
}

::google::protobuf::uint8* Api::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.Api)
  // optional string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.protobuf.Api.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // repeated .google.protobuf.Method methods = 2;
  for (unsigned int i = 0, n = this->methods_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, this->methods(i), false, target);
  }

  // repeated .google.protobuf.Option options = 3;
  for (unsigned int i = 0, n = this->options_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        3, this->options(i), false, target);
  }

  // optional string version = 4;
  if (this->version().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->version().data(), this->version().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.protobuf.Api.version");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->version(), target);
  }

  // optional .google.protobuf.SourceContext source_context = 5;
  if (this->has_source_context()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        5, *this->source_context_, false, target);
  }

  // repeated .google.protobuf.Mixin mixins = 6;
  for (unsigned int i = 0, n = this->mixins_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        6, this->mixins(i), false, target);
  }

  // optional .google.protobuf.Syntax syntax = 7;
  if (this->syntax() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      7, this->syntax(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.Api)
  return target;
}

int Api::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.Api)
  int total_size = 0;

  // optional string name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  // optional string version = 4;
  if (this->version().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->version());
  }

  // optional .google.protobuf.SourceContext source_context = 5;
  if (this->has_source_context()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->source_context_);
  }

  // optional .google.protobuf.Syntax syntax = 7;
  if (this->syntax() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->syntax());
  }

  // repeated .google.protobuf.Method methods = 2;
  total_size += 1 * this->methods_size();
  for (int i = 0; i < this->methods_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->methods(i));
  }

  // repeated .google.protobuf.Option options = 3;
  total_size += 1 * this->options_size();
  for (int i = 0; i < this->options_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->options(i));
  }

  // repeated .google.protobuf.Mixin mixins = 6;
  total_size += 1 * this->mixins_size();
  for (int i = 0; i < this->mixins_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->mixins(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Api::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.protobuf.Api)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const Api* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Api>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.protobuf.Api)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.protobuf.Api)
    MergeFrom(*source);
  }
}

void Api::MergeFrom(const Api& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.Api)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  methods_.MergeFrom(from.methods_);
  options_.MergeFrom(from.options_);
  mixins_.MergeFrom(from.mixins_);
  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.version().size() > 0) {

    version_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.version_);
  }
  if (from.has_source_context()) {
    mutable_source_context()->::google::protobuf::SourceContext::MergeFrom(from.source_context());
  }
  if (from.syntax() != 0) {
    set_syntax(from.syntax());
  }
}

void Api::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.protobuf.Api)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Api::CopyFrom(const Api& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.Api)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Api::IsInitialized() const {

  return true;
}

void Api::Swap(Api* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Api::InternalSwap(Api* other) {
  name_.Swap(&other->name_);
  methods_.UnsafeArenaSwap(&other->methods_);
  options_.UnsafeArenaSwap(&other->options_);
  version_.Swap(&other->version_);
  std::swap(source_context_, other->source_context_);
  mixins_.UnsafeArenaSwap(&other->mixins_);
  std::swap(syntax_, other->syntax_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Api::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Api_descriptor_;
  metadata.reflection = Api_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Api

// optional string name = 1;
void Api::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& Api::name() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Api.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Api::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.Api.name)
}
 void Api::set_name(const char* value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.Api.name)
}
 void Api::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.Api.name)
}
 ::std::string* Api::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:google.protobuf.Api.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* Api::release_name() {
  // @@protoc_insertion_point(field_release:google.protobuf.Api.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Api::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.Api.name)
}

// repeated .google.protobuf.Method methods = 2;
int Api::methods_size() const {
  return methods_.size();
}
void Api::clear_methods() {
  methods_.Clear();
}
const ::google::protobuf::Method& Api::methods(int index) const {
  // @@protoc_insertion_point(field_get:google.protobuf.Api.methods)
  return methods_.Get(index);
}
::google::protobuf::Method* Api::mutable_methods(int index) {
  // @@protoc_insertion_point(field_mutable:google.protobuf.Api.methods)
  return methods_.Mutable(index);
}
::google::protobuf::Method* Api::add_methods() {
  // @@protoc_insertion_point(field_add:google.protobuf.Api.methods)
  return methods_.Add();
}
::google::protobuf::RepeatedPtrField< ::google::protobuf::Method >*
Api::mutable_methods() {
  // @@protoc_insertion_point(field_mutable_list:google.protobuf.Api.methods)
  return &methods_;
}
const ::google::protobuf::RepeatedPtrField< ::google::protobuf::Method >&
Api::methods() const {
  // @@protoc_insertion_point(field_list:google.protobuf.Api.methods)
  return methods_;
}

// repeated .google.protobuf.Option options = 3;
int Api::options_size() const {
  return options_.size();
}
void Api::clear_options() {
  options_.Clear();
}
const ::google::protobuf::Option& Api::options(int index) const {
  // @@protoc_insertion_point(field_get:google.protobuf.Api.options)
  return options_.Get(index);
}
::google::protobuf::Option* Api::mutable_options(int index) {
  // @@protoc_insertion_point(field_mutable:google.protobuf.Api.options)
  return options_.Mutable(index);
}
::google::protobuf::Option* Api::add_options() {
  // @@protoc_insertion_point(field_add:google.protobuf.Api.options)
  return options_.Add();
}
::google::protobuf::RepeatedPtrField< ::google::protobuf::Option >*
Api::mutable_options() {
  // @@protoc_insertion_point(field_mutable_list:google.protobuf.Api.options)
  return &options_;
}
const ::google::protobuf::RepeatedPtrField< ::google::protobuf::Option >&
Api::options() const {
  // @@protoc_insertion_point(field_list:google.protobuf.Api.options)
  return options_;
}

// optional string version = 4;
void Api::clear_version() {
  version_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& Api::version() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Api.version)
  return version_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Api::set_version(const ::std::string& value) {
  
  version_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.Api.version)
}
 void Api::set_version(const char* value) {
  
  version_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.Api.version)
}
 void Api::set_version(const char* value, size_t size) {
  
  version_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.Api.version)
}
 ::std::string* Api::mutable_version() {
  
  // @@protoc_insertion_point(field_mutable:google.protobuf.Api.version)
  return version_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* Api::release_version() {
  // @@protoc_insertion_point(field_release:google.protobuf.Api.version)
  
  return version_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Api::set_allocated_version(::std::string* version) {
  if (version != NULL) {
    
  } else {
    
  }
  version_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), version);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.Api.version)
}

// optional .google.protobuf.SourceContext source_context = 5;
bool Api::has_source_context() const {
  return !_is_default_instance_ && source_context_ != NULL;
}
void Api::clear_source_context() {
  if (GetArenaNoVirtual() == NULL && source_context_ != NULL) delete source_context_;
  source_context_ = NULL;
}
const ::google::protobuf::SourceContext& Api::source_context() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Api.source_context)
  return source_context_ != NULL ? *source_context_ : *default_instance_->source_context_;
}
::google::protobuf::SourceContext* Api::mutable_source_context() {
  
  if (source_context_ == NULL) {
    source_context_ = new ::google::protobuf::SourceContext;
  }
  // @@protoc_insertion_point(field_mutable:google.protobuf.Api.source_context)
  return source_context_;
}
::google::protobuf::SourceContext* Api::release_source_context() {
  // @@protoc_insertion_point(field_release:google.protobuf.Api.source_context)
  
  ::google::protobuf::SourceContext* temp = source_context_;
  source_context_ = NULL;
  return temp;
}
void Api::set_allocated_source_context(::google::protobuf::SourceContext* source_context) {
  delete source_context_;
  source_context_ = source_context;
  if (source_context) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.Api.source_context)
}

// repeated .google.protobuf.Mixin mixins = 6;
int Api::mixins_size() const {
  return mixins_.size();
}
void Api::clear_mixins() {
  mixins_.Clear();
}
const ::google::protobuf::Mixin& Api::mixins(int index) const {
  // @@protoc_insertion_point(field_get:google.protobuf.Api.mixins)
  return mixins_.Get(index);
}
::google::protobuf::Mixin* Api::mutable_mixins(int index) {
  // @@protoc_insertion_point(field_mutable:google.protobuf.Api.mixins)
  return mixins_.Mutable(index);
}
::google::protobuf::Mixin* Api::add_mixins() {
  // @@protoc_insertion_point(field_add:google.protobuf.Api.mixins)
  return mixins_.Add();
}
::google::protobuf::RepeatedPtrField< ::google::protobuf::Mixin >*
Api::mutable_mixins() {
  // @@protoc_insertion_point(field_mutable_list:google.protobuf.Api.mixins)
  return &mixins_;
}
const ::google::protobuf::RepeatedPtrField< ::google::protobuf::Mixin >&
Api::mixins() const {
  // @@protoc_insertion_point(field_list:google.protobuf.Api.mixins)
  return mixins_;
}

// optional .google.protobuf.Syntax syntax = 7;
void Api::clear_syntax() {
  syntax_ = 0;
}
 ::google::protobuf::Syntax Api::syntax() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Api.syntax)
  return static_cast< ::google::protobuf::Syntax >(syntax_);
}
 void Api::set_syntax(::google::protobuf::Syntax value) {
  
  syntax_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.Api.syntax)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Method::kNameFieldNumber;
const int Method::kRequestTypeUrlFieldNumber;
const int Method::kRequestStreamingFieldNumber;
const int Method::kResponseTypeUrlFieldNumber;
const int Method::kResponseStreamingFieldNumber;
const int Method::kOptionsFieldNumber;
const int Method::kSyntaxFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Method::Method()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.protobuf.Method)
}

void Method::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

Method::Method(const Method& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:google.protobuf.Method)
}

void Method::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  request_type_url_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  request_streaming_ = false;
  response_type_url_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  response_streaming_ = false;
  syntax_ = 0;
}

Method::~Method() {
  // @@protoc_insertion_point(destructor:google.protobuf.Method)
  SharedDtor();
}

void Method::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  request_type_url_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  response_type_url_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void Method::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Method::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Method_descriptor_;
}

const Method& Method::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_google_2fprotobuf_2fapi_2eproto();
  return *default_instance_;
}

Method* Method::default_instance_ = NULL;

Method* Method::New(::google::protobuf::Arena* arena) const {
  Method* n = new Method;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Method::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.Method)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(Method, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<Method*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(request_streaming_, syntax_);
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  request_type_url_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  response_type_url_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());

#undef ZR_HELPER_
#undef ZR_

  options_.Clear();
}

bool Method::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.protobuf.Method)
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
            "google.protobuf.Method.name"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_request_type_url;
        break;
      }

      // optional string request_type_url = 2;
      case 2: {
        if (tag == 18) {
         parse_request_type_url:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_request_type_url()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->request_type_url().data(), this->request_type_url().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.protobuf.Method.request_type_url"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_request_streaming;
        break;
      }

      // optional bool request_streaming = 3;
      case 3: {
        if (tag == 24) {
         parse_request_streaming:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &request_streaming_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_response_type_url;
        break;
      }

      // optional string response_type_url = 4;
      case 4: {
        if (tag == 34) {
         parse_response_type_url:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_response_type_url()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->response_type_url().data(), this->response_type_url().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.protobuf.Method.response_type_url"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(40)) goto parse_response_streaming;
        break;
      }

      // optional bool response_streaming = 5;
      case 5: {
        if (tag == 40) {
         parse_response_streaming:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &response_streaming_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(50)) goto parse_options;
        break;
      }

      // repeated .google.protobuf.Option options = 6;
      case 6: {
        if (tag == 50) {
         parse_options:
          DO_(input->IncrementRecursionDepth());
         parse_loop_options:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_options()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(50)) goto parse_loop_options;
        input->UnsafeDecrementRecursionDepth();
        if (input->ExpectTag(56)) goto parse_syntax;
        break;
      }

      // optional .google.protobuf.Syntax syntax = 7;
      case 7: {
        if (tag == 56) {
         parse_syntax:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_syntax(static_cast< ::google::protobuf::Syntax >(value));
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
  // @@protoc_insertion_point(parse_success:google.protobuf.Method)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.protobuf.Method)
  return false;
#undef DO_
}

void Method::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.protobuf.Method)
  // optional string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.protobuf.Method.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // optional string request_type_url = 2;
  if (this->request_type_url().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->request_type_url().data(), this->request_type_url().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.protobuf.Method.request_type_url");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->request_type_url(), output);
  }

  // optional bool request_streaming = 3;
  if (this->request_streaming() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(3, this->request_streaming(), output);
  }

  // optional string response_type_url = 4;
  if (this->response_type_url().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->response_type_url().data(), this->response_type_url().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.protobuf.Method.response_type_url");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->response_type_url(), output);
  }

  // optional bool response_streaming = 5;
  if (this->response_streaming() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(5, this->response_streaming(), output);
  }

  // repeated .google.protobuf.Option options = 6;
  for (unsigned int i = 0, n = this->options_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      6, this->options(i), output);
  }

  // optional .google.protobuf.Syntax syntax = 7;
  if (this->syntax() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      7, this->syntax(), output);
  }

  // @@protoc_insertion_point(serialize_end:google.protobuf.Method)
}

::google::protobuf::uint8* Method::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.Method)
  // optional string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.protobuf.Method.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // optional string request_type_url = 2;
  if (this->request_type_url().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->request_type_url().data(), this->request_type_url().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.protobuf.Method.request_type_url");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->request_type_url(), target);
  }

  // optional bool request_streaming = 3;
  if (this->request_streaming() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(3, this->request_streaming(), target);
  }

  // optional string response_type_url = 4;
  if (this->response_type_url().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->response_type_url().data(), this->response_type_url().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.protobuf.Method.response_type_url");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->response_type_url(), target);
  }

  // optional bool response_streaming = 5;
  if (this->response_streaming() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(5, this->response_streaming(), target);
  }

  // repeated .google.protobuf.Option options = 6;
  for (unsigned int i = 0, n = this->options_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        6, this->options(i), false, target);
  }

  // optional .google.protobuf.Syntax syntax = 7;
  if (this->syntax() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      7, this->syntax(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.Method)
  return target;
}

int Method::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.Method)
  int total_size = 0;

  // optional string name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  // optional string request_type_url = 2;
  if (this->request_type_url().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->request_type_url());
  }

  // optional bool request_streaming = 3;
  if (this->request_streaming() != 0) {
    total_size += 1 + 1;
  }

  // optional string response_type_url = 4;
  if (this->response_type_url().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->response_type_url());
  }

  // optional bool response_streaming = 5;
  if (this->response_streaming() != 0) {
    total_size += 1 + 1;
  }

  // optional .google.protobuf.Syntax syntax = 7;
  if (this->syntax() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->syntax());
  }

  // repeated .google.protobuf.Option options = 6;
  total_size += 1 * this->options_size();
  for (int i = 0; i < this->options_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->options(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Method::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.protobuf.Method)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const Method* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Method>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.protobuf.Method)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.protobuf.Method)
    MergeFrom(*source);
  }
}

void Method::MergeFrom(const Method& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.Method)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  options_.MergeFrom(from.options_);
  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.request_type_url().size() > 0) {

    request_type_url_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.request_type_url_);
  }
  if (from.request_streaming() != 0) {
    set_request_streaming(from.request_streaming());
  }
  if (from.response_type_url().size() > 0) {

    response_type_url_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.response_type_url_);
  }
  if (from.response_streaming() != 0) {
    set_response_streaming(from.response_streaming());
  }
  if (from.syntax() != 0) {
    set_syntax(from.syntax());
  }
}

void Method::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.protobuf.Method)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Method::CopyFrom(const Method& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.Method)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Method::IsInitialized() const {

  return true;
}

void Method::Swap(Method* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Method::InternalSwap(Method* other) {
  name_.Swap(&other->name_);
  request_type_url_.Swap(&other->request_type_url_);
  std::swap(request_streaming_, other->request_streaming_);
  response_type_url_.Swap(&other->response_type_url_);
  std::swap(response_streaming_, other->response_streaming_);
  options_.UnsafeArenaSwap(&other->options_);
  std::swap(syntax_, other->syntax_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Method::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Method_descriptor_;
  metadata.reflection = Method_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Method

// optional string name = 1;
void Method::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& Method::name() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Method.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Method::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.Method.name)
}
 void Method::set_name(const char* value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.Method.name)
}
 void Method::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.Method.name)
}
 ::std::string* Method::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:google.protobuf.Method.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* Method::release_name() {
  // @@protoc_insertion_point(field_release:google.protobuf.Method.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Method::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.Method.name)
}

// optional string request_type_url = 2;
void Method::clear_request_type_url() {
  request_type_url_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& Method::request_type_url() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Method.request_type_url)
  return request_type_url_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Method::set_request_type_url(const ::std::string& value) {
  
  request_type_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.Method.request_type_url)
}
 void Method::set_request_type_url(const char* value) {
  
  request_type_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.Method.request_type_url)
}
 void Method::set_request_type_url(const char* value, size_t size) {
  
  request_type_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.Method.request_type_url)
}
 ::std::string* Method::mutable_request_type_url() {
  
  // @@protoc_insertion_point(field_mutable:google.protobuf.Method.request_type_url)
  return request_type_url_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* Method::release_request_type_url() {
  // @@protoc_insertion_point(field_release:google.protobuf.Method.request_type_url)
  
  return request_type_url_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Method::set_allocated_request_type_url(::std::string* request_type_url) {
  if (request_type_url != NULL) {
    
  } else {
    
  }
  request_type_url_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), request_type_url);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.Method.request_type_url)
}

// optional bool request_streaming = 3;
void Method::clear_request_streaming() {
  request_streaming_ = false;
}
 bool Method::request_streaming() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Method.request_streaming)
  return request_streaming_;
}
 void Method::set_request_streaming(bool value) {
  
  request_streaming_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.Method.request_streaming)
}

// optional string response_type_url = 4;
void Method::clear_response_type_url() {
  response_type_url_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& Method::response_type_url() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Method.response_type_url)
  return response_type_url_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Method::set_response_type_url(const ::std::string& value) {
  
  response_type_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.Method.response_type_url)
}
 void Method::set_response_type_url(const char* value) {
  
  response_type_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.Method.response_type_url)
}
 void Method::set_response_type_url(const char* value, size_t size) {
  
  response_type_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.Method.response_type_url)
}
 ::std::string* Method::mutable_response_type_url() {
  
  // @@protoc_insertion_point(field_mutable:google.protobuf.Method.response_type_url)
  return response_type_url_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* Method::release_response_type_url() {
  // @@protoc_insertion_point(field_release:google.protobuf.Method.response_type_url)
  
  return response_type_url_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Method::set_allocated_response_type_url(::std::string* response_type_url) {
  if (response_type_url != NULL) {
    
  } else {
    
  }
  response_type_url_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), response_type_url);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.Method.response_type_url)
}

// optional bool response_streaming = 5;
void Method::clear_response_streaming() {
  response_streaming_ = false;
}
 bool Method::response_streaming() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Method.response_streaming)
  return response_streaming_;
}
 void Method::set_response_streaming(bool value) {
  
  response_streaming_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.Method.response_streaming)
}

// repeated .google.protobuf.Option options = 6;
int Method::options_size() const {
  return options_.size();
}
void Method::clear_options() {
  options_.Clear();
}
const ::google::protobuf::Option& Method::options(int index) const {
  // @@protoc_insertion_point(field_get:google.protobuf.Method.options)
  return options_.Get(index);
}
::google::protobuf::Option* Method::mutable_options(int index) {
  // @@protoc_insertion_point(field_mutable:google.protobuf.Method.options)
  return options_.Mutable(index);
}
::google::protobuf::Option* Method::add_options() {
  // @@protoc_insertion_point(field_add:google.protobuf.Method.options)
  return options_.Add();
}
::google::protobuf::RepeatedPtrField< ::google::protobuf::Option >*
Method::mutable_options() {
  // @@protoc_insertion_point(field_mutable_list:google.protobuf.Method.options)
  return &options_;
}
const ::google::protobuf::RepeatedPtrField< ::google::protobuf::Option >&
Method::options() const {
  // @@protoc_insertion_point(field_list:google.protobuf.Method.options)
  return options_;
}

// optional .google.protobuf.Syntax syntax = 7;
void Method::clear_syntax() {
  syntax_ = 0;
}
 ::google::protobuf::Syntax Method::syntax() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Method.syntax)
  return static_cast< ::google::protobuf::Syntax >(syntax_);
}
 void Method::set_syntax(::google::protobuf::Syntax value) {
  
  syntax_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.Method.syntax)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Mixin::kNameFieldNumber;
const int Mixin::kRootFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Mixin::Mixin()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.protobuf.Mixin)
}

void Mixin::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

Mixin::Mixin(const Mixin& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:google.protobuf.Mixin)
}

void Mixin::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  root_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

Mixin::~Mixin() {
  // @@protoc_insertion_point(destructor:google.protobuf.Mixin)
  SharedDtor();
}

void Mixin::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  root_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void Mixin::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Mixin::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Mixin_descriptor_;
}

const Mixin& Mixin::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_google_2fprotobuf_2fapi_2eproto();
  return *default_instance_;
}

Mixin* Mixin::default_instance_ = NULL;

Mixin* Mixin::New(::google::protobuf::Arena* arena) const {
  Mixin* n = new Mixin;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Mixin::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.Mixin)
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  root_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool Mixin::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.protobuf.Mixin)
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
            "google.protobuf.Mixin.name"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_root;
        break;
      }

      // optional string root = 2;
      case 2: {
        if (tag == 18) {
         parse_root:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_root()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->root().data(), this->root().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.protobuf.Mixin.root"));
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
  // @@protoc_insertion_point(parse_success:google.protobuf.Mixin)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.protobuf.Mixin)
  return false;
#undef DO_
}

void Mixin::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.protobuf.Mixin)
  // optional string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.protobuf.Mixin.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // optional string root = 2;
  if (this->root().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->root().data(), this->root().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.protobuf.Mixin.root");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->root(), output);
  }

  // @@protoc_insertion_point(serialize_end:google.protobuf.Mixin)
}

::google::protobuf::uint8* Mixin::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.Mixin)
  // optional string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.protobuf.Mixin.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // optional string root = 2;
  if (this->root().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->root().data(), this->root().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.protobuf.Mixin.root");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->root(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.Mixin)
  return target;
}

int Mixin::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.Mixin)
  int total_size = 0;

  // optional string name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  // optional string root = 2;
  if (this->root().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->root());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Mixin::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.protobuf.Mixin)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const Mixin* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Mixin>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.protobuf.Mixin)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.protobuf.Mixin)
    MergeFrom(*source);
  }
}

void Mixin::MergeFrom(const Mixin& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.Mixin)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.root().size() > 0) {

    root_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.root_);
  }
}

void Mixin::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.protobuf.Mixin)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Mixin::CopyFrom(const Mixin& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.Mixin)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Mixin::IsInitialized() const {

  return true;
}

void Mixin::Swap(Mixin* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Mixin::InternalSwap(Mixin* other) {
  name_.Swap(&other->name_);
  root_.Swap(&other->root_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Mixin::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Mixin_descriptor_;
  metadata.reflection = Mixin_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Mixin

// optional string name = 1;
void Mixin::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& Mixin::name() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Mixin.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Mixin::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.Mixin.name)
}
 void Mixin::set_name(const char* value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.Mixin.name)
}
 void Mixin::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.Mixin.name)
}
 ::std::string* Mixin::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:google.protobuf.Mixin.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* Mixin::release_name() {
  // @@protoc_insertion_point(field_release:google.protobuf.Mixin.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Mixin::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.Mixin.name)
}

// optional string root = 2;
void Mixin::clear_root() {
  root_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& Mixin::root() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Mixin.root)
  return root_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Mixin::set_root(const ::std::string& value) {
  
  root_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.Mixin.root)
}
 void Mixin::set_root(const char* value) {
  
  root_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.Mixin.root)
}
 void Mixin::set_root(const char* value, size_t size) {
  
  root_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.Mixin.root)
}
 ::std::string* Mixin::mutable_root() {
  
  // @@protoc_insertion_point(field_mutable:google.protobuf.Mixin.root)
  return root_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* Mixin::release_root() {
  // @@protoc_insertion_point(field_release:google.protobuf.Mixin.root)
  
  return root_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Mixin::set_allocated_root(::std::string* root) {
  if (root != NULL) {
    
  } else {
    
  }
  root_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), root);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.Mixin.root)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

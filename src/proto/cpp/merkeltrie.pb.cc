

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "merkeltrie.pb.h"

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

const ::google::protobuf::Descriptor* Child_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Child_reflection_ = NULL;
const ::google::protobuf::Descriptor* Node_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Node_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* CHILDTYPE_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_merkeltrie_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_merkeltrie_2eproto() {
  protobuf_AddDesc_merkeltrie_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "merkeltrie.proto");
  GOOGLE_CHECK(file != NULL);
  Child_descriptor_ = file->message_type(0);
  static const int Child_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Child, sublocation_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Child, hash_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Child, childtype_),
  };
  Child_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Child_descriptor_,
      Child::default_instance_,
      Child_offsets_,
      -1,
      -1,
      -1,
      sizeof(Child),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Child, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Child, _is_default_instance_));
  Node_descriptor_ = file->message_type(1);
  static const int Node_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Node, children_),
  };
  Node_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Node_descriptor_,
      Node::default_instance_,
      Node_offsets_,
      -1,
      -1,
      -1,
      sizeof(Node),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Node, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Node, _is_default_instance_));
  CHILDTYPE_descriptor_ = file->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_merkeltrie_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Child_descriptor_, &Child::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Node_descriptor_, &Node::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_merkeltrie_2eproto() {
  delete Child::default_instance_;
  delete Child_reflection_;
  delete Node::default_instance_;
  delete Node_reflection_;
}

void protobuf_AddDesc_merkeltrie_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_merkeltrie_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\020merkeltrie.proto\022\010protocol\"R\n\005Child\022\023\n"
    "\013sublocation\030\001 \001(\014\022\014\n\004hash\030\002 \001(\014\022&\n\tchil"
    "dtype\030\003 \001(\0162\023.protocol.CHILDTYPE\")\n\004Node"
    "\022!\n\010children\030\001 \003(\0132\017.protocol.Child**\n\tC"
    "HILDTYPE\022\010\n\004NONE\020\000\022\t\n\005INNER\020\001\022\010\n\004LEAF\020\002b"
    "\006proto3", 207);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "merkeltrie.proto", &protobuf_RegisterTypes);
  Child::default_instance_ = new Child();
  Node::default_instance_ = new Node();
  Child::default_instance_->InitAsDefaultInstance();
  Node::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_merkeltrie_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_merkeltrie_2eproto {
  StaticDescriptorInitializer_merkeltrie_2eproto() {
    protobuf_AddDesc_merkeltrie_2eproto();
  }
} static_descriptor_initializer_merkeltrie_2eproto_;
const ::google::protobuf::EnumDescriptor* CHILDTYPE_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CHILDTYPE_descriptor_;
}
bool CHILDTYPE_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Child::kSublocationFieldNumber;
const int Child::kHashFieldNumber;
const int Child::kChildtypeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Child::Child()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.Child)
}

void Child::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

Child::Child(const Child& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protocol.Child)
}

void Child::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  sublocation_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  hash_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  childtype_ = 0;
}

Child::~Child() {
  // @@protoc_insertion_point(destructor:protocol.Child)
  SharedDtor();
}

void Child::SharedDtor() {
  sublocation_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  hash_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void Child::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Child::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Child_descriptor_;
}

const Child& Child::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_merkeltrie_2eproto();
  return *default_instance_;
}

Child* Child::default_instance_ = NULL;

Child* Child::New(::google::protobuf::Arena* arena) const {
  Child* n = new Child;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Child::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.Child)
  sublocation_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  hash_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  childtype_ = 0;
}

bool Child::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.Child)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional bytes sublocation = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_sublocation()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_hash;
        break;
      }

      // optional bytes hash = 2;
      case 2: {
        if (tag == 18) {
         parse_hash:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_hash()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_childtype;
        break;
      }

      // optional .protocol.CHILDTYPE childtype = 3;
      case 3: {
        if (tag == 24) {
         parse_childtype:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_childtype(static_cast< ::protocol::CHILDTYPE >(value));
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
  // @@protoc_insertion_point(parse_success:protocol.Child)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.Child)
  return false;
#undef DO_
}

void Child::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.Child)
  // optional bytes sublocation = 1;
  if (this->sublocation().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      1, this->sublocation(), output);
  }

  // optional bytes hash = 2;
  if (this->hash().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      2, this->hash(), output);
  }

  // optional .protocol.CHILDTYPE childtype = 3;
  if (this->childtype() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      3, this->childtype(), output);
  }

  // @@protoc_insertion_point(serialize_end:protocol.Child)
}

::google::protobuf::uint8* Child::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.Child)
  // optional bytes sublocation = 1;
  if (this->sublocation().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        1, this->sublocation(), target);
  }

  // optional bytes hash = 2;
  if (this->hash().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        2, this->hash(), target);
  }

  // optional .protocol.CHILDTYPE childtype = 3;
  if (this->childtype() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      3, this->childtype(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:protocol.Child)
  return target;
}

int Child::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.Child)
  int total_size = 0;

  // optional bytes sublocation = 1;
  if (this->sublocation().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->sublocation());
  }

  // optional bytes hash = 2;
  if (this->hash().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->hash());
  }

  // optional .protocol.CHILDTYPE childtype = 3;
  if (this->childtype() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->childtype());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Child::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protocol.Child)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const Child* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Child>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protocol.Child)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protocol.Child)
    MergeFrom(*source);
  }
}

void Child::MergeFrom(const Child& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.Child)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.sublocation().size() > 0) {

    sublocation_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.sublocation_);
  }
  if (from.hash().size() > 0) {

    hash_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.hash_);
  }
  if (from.childtype() != 0) {
    set_childtype(from.childtype());
  }
}

void Child::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protocol.Child)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Child::CopyFrom(const Child& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.Child)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Child::IsInitialized() const {

  return true;
}

void Child::Swap(Child* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Child::InternalSwap(Child* other) {
  sublocation_.Swap(&other->sublocation_);
  hash_.Swap(&other->hash_);
  std::swap(childtype_, other->childtype_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Child::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Child_descriptor_;
  metadata.reflection = Child_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Child

// optional bytes sublocation = 1;
void Child::clear_sublocation() {
  sublocation_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& Child::sublocation() const {
  // @@protoc_insertion_point(field_get:protocol.Child.sublocation)
  return sublocation_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Child::set_sublocation(const ::std::string& value) {
  
  sublocation_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.Child.sublocation)
}
 void Child::set_sublocation(const char* value) {
  
  sublocation_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.Child.sublocation)
}
 void Child::set_sublocation(const void* value, size_t size) {
  
  sublocation_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.Child.sublocation)
}
 ::std::string* Child::mutable_sublocation() {
  
  // @@protoc_insertion_point(field_mutable:protocol.Child.sublocation)
  return sublocation_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* Child::release_sublocation() {
  // @@protoc_insertion_point(field_release:protocol.Child.sublocation)
  
  return sublocation_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Child::set_allocated_sublocation(::std::string* sublocation) {
  if (sublocation != NULL) {
    
  } else {
    
  }
  sublocation_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), sublocation);
  // @@protoc_insertion_point(field_set_allocated:protocol.Child.sublocation)
}

// optional bytes hash = 2;
void Child::clear_hash() {
  hash_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& Child::hash() const {
  // @@protoc_insertion_point(field_get:protocol.Child.hash)
  return hash_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Child::set_hash(const ::std::string& value) {
  
  hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.Child.hash)
}
 void Child::set_hash(const char* value) {
  
  hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.Child.hash)
}
 void Child::set_hash(const void* value, size_t size) {
  
  hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.Child.hash)
}
 ::std::string* Child::mutable_hash() {
  
  // @@protoc_insertion_point(field_mutable:protocol.Child.hash)
  return hash_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* Child::release_hash() {
  // @@protoc_insertion_point(field_release:protocol.Child.hash)
  
  return hash_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Child::set_allocated_hash(::std::string* hash) {
  if (hash != NULL) {
    
  } else {
    
  }
  hash_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), hash);
  // @@protoc_insertion_point(field_set_allocated:protocol.Child.hash)
}

// optional .protocol.CHILDTYPE childtype = 3;
void Child::clear_childtype() {
  childtype_ = 0;
}
 ::protocol::CHILDTYPE Child::childtype() const {
  // @@protoc_insertion_point(field_get:protocol.Child.childtype)
  return static_cast< ::protocol::CHILDTYPE >(childtype_);
}
 void Child::set_childtype(::protocol::CHILDTYPE value) {
  
  childtype_ = value;
  // @@protoc_insertion_point(field_set:protocol.Child.childtype)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Node::kChildrenFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Node::Node()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.Node)
}

void Node::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

Node::Node(const Node& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protocol.Node)
}

void Node::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
}

Node::~Node() {
  // @@protoc_insertion_point(destructor:protocol.Node)
  SharedDtor();
}

void Node::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Node::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Node::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Node_descriptor_;
}

const Node& Node::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_merkeltrie_2eproto();
  return *default_instance_;
}

Node* Node::default_instance_ = NULL;

Node* Node::New(::google::protobuf::Arena* arena) const {
  Node* n = new Node;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Node::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.Node)
  children_.Clear();
}

bool Node::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.Node)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .protocol.Child children = 1;
      case 1: {
        if (tag == 10) {
          DO_(input->IncrementRecursionDepth());
         parse_loop_children:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_children()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(10)) goto parse_loop_children;
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
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:protocol.Node)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.Node)
  return false;
#undef DO_
}

void Node::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.Node)
  // repeated .protocol.Child children = 1;
  for (unsigned int i = 0, n = this->children_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->children(i), output);
  }

  // @@protoc_insertion_point(serialize_end:protocol.Node)
}

::google::protobuf::uint8* Node::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.Node)
  // repeated .protocol.Child children = 1;
  for (unsigned int i = 0, n = this->children_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, this->children(i), false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:protocol.Node)
  return target;
}

int Node::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.Node)
  int total_size = 0;

  // repeated .protocol.Child children = 1;
  total_size += 1 * this->children_size();
  for (int i = 0; i < this->children_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->children(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Node::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protocol.Node)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const Node* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Node>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protocol.Node)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protocol.Node)
    MergeFrom(*source);
  }
}

void Node::MergeFrom(const Node& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.Node)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  children_.MergeFrom(from.children_);
}

void Node::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protocol.Node)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Node::CopyFrom(const Node& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.Node)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Node::IsInitialized() const {

  return true;
}

void Node::Swap(Node* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Node::InternalSwap(Node* other) {
  children_.UnsafeArenaSwap(&other->children_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Node::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Node_descriptor_;
  metadata.reflection = Node_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Node

// repeated .protocol.Child children = 1;
int Node::children_size() const {
  return children_.size();
}
void Node::clear_children() {
  children_.Clear();
}
const ::protocol::Child& Node::children(int index) const {
  // @@protoc_insertion_point(field_get:protocol.Node.children)
  return children_.Get(index);
}
::protocol::Child* Node::mutable_children(int index) {
  // @@protoc_insertion_point(field_mutable:protocol.Node.children)
  return children_.Mutable(index);
}
::protocol::Child* Node::add_children() {
  // @@protoc_insertion_point(field_add:protocol.Node.children)
  return children_.Add();
}
::google::protobuf::RepeatedPtrField< ::protocol::Child >*
Node::mutable_children() {
  // @@protoc_insertion_point(field_mutable_list:protocol.Node.children)
  return &children_;
}
const ::google::protobuf::RepeatedPtrField< ::protocol::Child >&
Node::children() const {
  // @@protoc_insertion_point(field_list:protocol.Node.children)
  return children_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace protocol

// @@protoc_insertion_point(global_scope)

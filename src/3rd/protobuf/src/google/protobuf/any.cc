
#include <google/protobuf/any.h>

namespace google {
namespace protobuf {
namespace internal {

namespace {
string GetTypeUrl(const Descriptor* message,
                  const string& type_url_prefix) {
  if (!type_url_prefix.empty() &&
      type_url_prefix[type_url_prefix.size() - 1] == '/') {
    return type_url_prefix + message->full_name();
  } else {
    return type_url_prefix + "/" + message->full_name();
  }
}
}  // namespace

const char kAnyFullTypeName[] = "google.protobuf.Any";
const char kTypeGoogleApisComPrefix[] = "type.googleapis.com/";
const char kTypeGoogleProdComPrefix[] = "type.googleprod.com/";

AnyMetadata::AnyMetadata(UrlType* type_url, ValueType* value)
    : type_url_(type_url), value_(value) {
}

void AnyMetadata::PackFrom(const Message& message) {
  PackFrom(message, kTypeGoogleApisComPrefix);
}

void AnyMetadata::PackFrom(const Message& message,
                           const string& type_url_prefix) {
  type_url_->SetNoArena(&::google::protobuf::internal::GetEmptyString(),
                        GetTypeUrl(message.GetDescriptor(), type_url_prefix));
  message.SerializeToString(value_->MutableNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited()));
}

bool AnyMetadata::UnpackTo(Message* message) const {
  if (!InternalIs(message->GetDescriptor())) {
    return false;
  }
  return message->ParseFromString(
      value_->GetNoArena(&::google::protobuf::internal::GetEmptyString()));
}

bool AnyMetadata::InternalIs(const Descriptor* descriptor) const {
  const string type_url = type_url_->GetNoArena(
             &::google::protobuf::internal::GetEmptyString());
  string full_name;
  if (!ParseAnyTypeUrl(type_url, &full_name)) {
    return false;
  }
  return full_name == descriptor->full_name();
}

bool ParseAnyTypeUrl(const string& type_url, string* full_type_name) {
  size_t pos = type_url.find_last_of("/");
  if (pos == string::npos || pos + 1 == type_url.size()) {
    return false;
  }
  *full_type_name = type_url.substr(pos + 1);
  return true;
}


bool GetAnyFieldDescriptors(const Message& message,
                            const FieldDescriptor** type_url_field,
                            const FieldDescriptor** value_field) {
    const Descriptor* descriptor = message.GetDescriptor();
    if (descriptor->full_name() != kAnyFullTypeName) {
      return false;
    }
    *type_url_field = descriptor->FindFieldByNumber(1);
    *value_field = descriptor->FindFieldByNumber(2);
    return (*type_url_field != NULL &&
            (*type_url_field)->type() == FieldDescriptor::TYPE_STRING &&
            *value_field != NULL &&
            (*value_field)->type() == FieldDescriptor::TYPE_BYTES);
}

}  // namespace internal
}  // namespace protobuf
}  // namespace google

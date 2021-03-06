
#ifndef GOOGLE_PROTOBUF_UTIL_CONVERTER_MOCK_ERROR_LISTENER_H__
#define GOOGLE_PROTOBUF_UTIL_CONVERTER_MOCK_ERROR_LISTENER_H__

#include <google/protobuf/stubs/stringpiece.h>
#include <google/protobuf/util/internal/error_listener.h>
#include <google/protobuf/util/internal/location_tracker.h>
#include <gmock/gmock.h>

namespace google {
namespace protobuf {
namespace util {
namespace converter {

class MockErrorListener : public ErrorListener {
 public:
  MockErrorListener() {}
  virtual ~MockErrorListener() {}

  MOCK_METHOD3(InvalidName, void(const LocationTrackerInterface& loc,
                                 StringPiece unknown_name,
                                 StringPiece message));
  MOCK_METHOD3(InvalidValue, void(const LocationTrackerInterface& loc,
                                  StringPiece type_name, StringPiece value));
  MOCK_METHOD2(MissingField, void(const LocationTrackerInterface& loc,
                                  StringPiece missing_name));
};

}  // namespace converter
}  // namespace util
}  // namespace protobuf

}  // namespace google
#endif  // GOOGLE_PROTOBUF_UTIL_CONVERTER_MOCK_ERROR_LISTENER_H__

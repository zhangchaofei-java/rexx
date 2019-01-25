
#ifndef CONFORMANCE_CONFORMANCE_TEST_H
#define CONFORMANCE_CONFORMANCE_TEST_H

#include <functional>
#include <string>
#include <google/protobuf/stubs/common.h>
#include <google/protobuf/util/type_resolver.h>
#include <google/protobuf/wire_format_lite.h>

#include "third_party/jsoncpp/json.h"

namespace conformance {
class ConformanceRequest;
class ConformanceResponse;
class TestAllTypes;
}  // namespace conformance

namespace google {
namespace protobuf {

class ConformanceTestRunner {
 public:
  virtual ~ConformanceTestRunner() {}

  // Call to run a single conformance test.
  //
  // "input" is a serialized conformance.ConformanceRequest.
  // "output" should be set to a serialized conformance.ConformanceResponse.
  //
  // If there is any error in running the test itself, set "runtime_error" in
  // the response.
  virtual void RunTest(const std::string& test_name,
                       const std::string& input,
                       std::string* output) = 0;
};

// Class representing the test suite itself.  To run it, implement your own
// class derived from ConformanceTestRunner and then write code like:
//
//    class MyConformanceTestRunner : public ConformanceTestRunner {
//     public:
//      virtual void RunTest(...) {
//        // INSERT YOUR FRAMEWORK-SPECIFIC CODE HERE.
//      }
//    };
//
//    int main() {
//      MyConformanceTestRunner runner;
//      google::protobuf::ConformanceTestSuite suite;
//
//      std::string output;
//      suite.RunSuite(&runner, &output);
//    }
//
class ConformanceTestSuite {
 public:
  ConformanceTestSuite() : verbose_(false) {}

  void SetVerbose(bool verbose) { verbose_ = verbose; }

  // Sets the list of tests that are expected to fail when RunSuite() is called.
  // RunSuite() will fail unless the set of failing tests is exactly the same
  // as this list.
  //
  // The filename here is *only* used to create/format useful error messages for
  // how to update the failure list.  We do NOT read this file at all.
  void SetFailureList(const std::string& filename,
                      const std::vector<std::string>& failure_list);

  // Run all the conformance tests against the given test runner.
  // Test output will be stored in "output".
  //
  // Returns true if the set of failing tests was exactly the same as the
  // failure list.  If SetFailureList() was not called, returns true if all
  // tests passed.
  bool RunSuite(ConformanceTestRunner* runner, std::string* output);

 private:
  void ReportSuccess(const std::string& test_name);
  void ReportFailure(const string& test_name,
                     const conformance::ConformanceRequest& request,
                     const conformance::ConformanceResponse& response,
                     const char* fmt, ...);
  void ReportSkip(const string& test_name,
                  const conformance::ConformanceRequest& request,
                  const conformance::ConformanceResponse& response);
  void RunTest(const std::string& test_name,
               const conformance::ConformanceRequest& request,
               conformance::ConformanceResponse* response);
  void RunValidInputTest(const string& test_name, const string& input,
                         conformance::WireFormat input_format,
                         const string& equivalent_text_format,
                         conformance::WireFormat requested_output);
  void RunValidJsonTest(const string& test_name, const string& input_json,
                        const string& equivalent_text_format);
  void RunValidJsonTestWithProtobufInput(const string& test_name,
                                         const conformance::TestAllTypes& input,
                                         const string& equivalent_text_format);

  typedef std::function<bool(const Json::Value&)> Validator;
  void RunValidJsonTestWithValidator(const string& test_name,
                                     const string& input_json,
                                     const Validator& validator);
  void ExpectParseFailureForJson(const string& test_name,
                                 const string& input_json);
  void ExpectSerializeFailureForJson(const string& test_name,
                                     const string& text_format);
  void ExpectParseFailureForProto(const std::string& proto,
                                  const std::string& test_name);
  void ExpectHardParseFailureForProto(const std::string& proto,
                                      const std::string& test_name);
  void TestPrematureEOFForType(google::protobuf::FieldDescriptor::Type type);
  bool CheckSetEmpty(const set<string>& set_to_check,
                     const std::string& write_to_file, const std::string& msg);
  ConformanceTestRunner* runner_;
  int successes_;
  int expected_failures_;
  bool verbose_;
  std::string output_;
  std::string failure_list_filename_;

  // The set of test names that are expected to fail in this run, but haven't
  // failed yet.
  std::set<std::string> expected_to_fail_;

  // The set of test names that have been run.  Used to ensure that there are no
  // duplicate names in the suite.
  std::set<std::string> test_names_;

  // The set of tests that failed, but weren't expected to.
  std::set<std::string> unexpected_failing_tests_;

  // The set of tests that succeeded, but weren't expected to.
  std::set<std::string> unexpected_succeeding_tests_;

  // The set of tests that the testee opted out of;
  std::set<std::string> skipped_;

  google::protobuf::internal::scoped_ptr<google::protobuf::util::TypeResolver>
      type_resolver_;
  std::string type_url_;
};

}  // namespace protobuf
}  // namespace google

#endif  // CONFORMANCE_CONFORMANCE_TEST_H

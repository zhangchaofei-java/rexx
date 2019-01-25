
#include <google/protobuf/util/field_mask_util.h>

#include <algorithm>

#include <google/protobuf/stubs/logging.h>
#include <google/protobuf/stubs/common.h>
#include <google/protobuf/field_mask.pb.h>
#include <google/protobuf/unittest.pb.h>
#include <google/protobuf/test_util.h>
#include <gtest/gtest.h>

namespace google {
namespace protobuf {
namespace util {

class SnakeCaseCamelCaseTest : public ::testing::Test {
 protected:
  string SnakeCaseToCamelCase(const string& input) {
    string output;
    if (FieldMaskUtil::SnakeCaseToCamelCase(input, &output)) {
      return output;
    } else {
      return "#FAIL#";
    }
  }

  string CamelCaseToSnakeCase(const string& input) {
    string output;
    if (FieldMaskUtil::CamelCaseToSnakeCase(input, &output)) {
      return output;
    } else {
      return "#FAIL#";
    }
  }
};

namespace {

TEST_F(SnakeCaseCamelCaseTest, SnakeToCamel) {
  EXPECT_EQ("fooBar", SnakeCaseToCamelCase("foo_bar"));
  EXPECT_EQ("FooBar", SnakeCaseToCamelCase("_foo_bar"));
  EXPECT_EQ("foo3Bar", SnakeCaseToCamelCase("foo3_bar"));
  // No uppercase letter is allowed.
  EXPECT_EQ("#FAIL#", SnakeCaseToCamelCase("Foo"));
  // Any character after a "_" must be a lowercase letter.
  //   1. "_" cannot be followed by another "_".
  //   2. "_" cannot be followed by a digit.
  //   3. "_" cannot appear as the last character.
  EXPECT_EQ("#FAIL#", SnakeCaseToCamelCase("foo__bar"));
  EXPECT_EQ("#FAIL#", SnakeCaseToCamelCase("foo_3bar"));
  EXPECT_EQ("#FAIL#", SnakeCaseToCamelCase("foo_bar_"));
}

TEST_F(SnakeCaseCamelCaseTest, CamelToSnake) {
  EXPECT_EQ("foo_bar", CamelCaseToSnakeCase("fooBar"));
  EXPECT_EQ("_foo_bar", CamelCaseToSnakeCase("FooBar"));
  EXPECT_EQ("foo3_bar", CamelCaseToSnakeCase("foo3Bar"));
  // "_"s are not allowed.
  EXPECT_EQ("#FAIL#", CamelCaseToSnakeCase("foo_bar"));
}

TEST_F(SnakeCaseCamelCaseTest, RoundTripTest) {
  // Enumerates all possible snake_case names and test that converting it to
  // camelCase and then to snake_case again will yield the original name.
  string name = "___abc123";
  std::sort(name.begin(), name.end());
  do {
    string camelName = SnakeCaseToCamelCase(name);
    if (camelName != "#FAIL#") {
      EXPECT_EQ(name, CamelCaseToSnakeCase(camelName));
    }
  } while (std::next_permutation(name.begin(), name.end()));

  // Enumerates all possible camelCase names and test that converting it to
  // snake_case and then to camelCase again will yield the original name.
  name = "abcABC123";
  std::sort(name.begin(), name.end());
  do {
    string camelName = CamelCaseToSnakeCase(name);
    if (camelName != "#FAIL#") {
      EXPECT_EQ(name, SnakeCaseToCamelCase(camelName));
    }
  } while (std::next_permutation(name.begin(), name.end()));
}

using protobuf_unittest::TestAllTypes;
using protobuf_unittest::NestedTestAllTypes;
using google::protobuf::FieldMask;

TEST(FieldMaskUtilTest, StringFormat) {
  FieldMask mask;
  EXPECT_EQ("", FieldMaskUtil::ToString(mask));
  mask.add_paths("foo_bar");
  EXPECT_EQ("foo_bar", FieldMaskUtil::ToString(mask));
  mask.add_paths("baz_quz");
  EXPECT_EQ("foo_bar,baz_quz", FieldMaskUtil::ToString(mask));

  FieldMaskUtil::FromString("", &mask);
  EXPECT_EQ(0, mask.paths_size());
  FieldMaskUtil::FromString("fooBar", &mask);
  EXPECT_EQ(1, mask.paths_size());
  EXPECT_EQ("fooBar", mask.paths(0));
  FieldMaskUtil::FromString("fooBar,bazQuz", &mask);
  EXPECT_EQ(2, mask.paths_size());
  EXPECT_EQ("fooBar", mask.paths(0));
  EXPECT_EQ("bazQuz", mask.paths(1));
}

TEST(FieldMaskUtilTest, JsonStringFormat) {
  FieldMask mask;
  string value;
  EXPECT_TRUE(FieldMaskUtil::ToJsonString(mask, &value));
  EXPECT_EQ("", value);
  mask.add_paths("foo_bar");
  EXPECT_TRUE(FieldMaskUtil::ToJsonString(mask, &value));
  EXPECT_EQ("fooBar", value);
  mask.add_paths("bar_quz");
  EXPECT_TRUE(FieldMaskUtil::ToJsonString(mask, &value));
  EXPECT_EQ("fooBar,barQuz", value);

  FieldMaskUtil::FromJsonString("", &mask);
  EXPECT_EQ(0, mask.paths_size());
  FieldMaskUtil::FromJsonString("fooBar", &mask);
  EXPECT_EQ(1, mask.paths_size());
  EXPECT_EQ("foo_bar", mask.paths(0));
  FieldMaskUtil::FromJsonString("fooBar,bazQuz", &mask);
  EXPECT_EQ(2, mask.paths_size());
  EXPECT_EQ("foo_bar", mask.paths(0));
  EXPECT_EQ("baz_quz", mask.paths(1));
}

TEST(FieldMaskUtilTest, TestIsVaildPath) {
  EXPECT_TRUE(FieldMaskUtil::IsValidPath<TestAllTypes>("optional_int32"));
  EXPECT_FALSE(FieldMaskUtil::IsValidPath<TestAllTypes>("optional_nonexist"));
  EXPECT_TRUE(
      FieldMaskUtil::IsValidPath<TestAllTypes>("optional_nested_message.bb"));
  EXPECT_FALSE(FieldMaskUtil::IsValidPath<TestAllTypes>(
      "optional_nested_message.nonexist"));
  // FieldMask cannot be used to specify sub-fields of a repeated message.
  EXPECT_FALSE(
      FieldMaskUtil::IsValidPath<TestAllTypes>("repeated_nested_message.bb"));
}

TEST(FieldMaskUtilTest, TestIsValidFieldMask) {
  FieldMask mask;
  FieldMaskUtil::FromString("optional_int32,optional_nested_message.bb", &mask);
  EXPECT_TRUE(FieldMaskUtil::IsValidFieldMask<TestAllTypes>(mask));

  FieldMaskUtil::FromString(
      "optional_int32,optional_nested_message.bb,optional_nonexist", &mask);
  EXPECT_FALSE(FieldMaskUtil::IsValidFieldMask<TestAllTypes>(mask));
}

TEST(FieldMaskUtilTest, TestGetFieldMaskForAllFields) {
  FieldMask mask;
  FieldMaskUtil::GetFieldMaskForAllFields<TestAllTypes::NestedMessage>(&mask);
  EXPECT_EQ(1, mask.paths_size());
  EXPECT_TRUE(FieldMaskUtil::IsPathInFieldMask("bb", mask));

  FieldMaskUtil::GetFieldMaskForAllFields<TestAllTypes>(&mask);
  EXPECT_EQ(76, mask.paths_size());
  EXPECT_TRUE(FieldMaskUtil::IsPathInFieldMask("optional_int32", mask));
  EXPECT_TRUE(FieldMaskUtil::IsPathInFieldMask("optional_int64", mask));
  EXPECT_TRUE(FieldMaskUtil::IsPathInFieldMask("optional_uint32", mask));
  EXPECT_TRUE(FieldMaskUtil::IsPathInFieldMask("optional_uint64", mask));
  EXPECT_TRUE(FieldMaskUtil::IsPathInFieldMask("optional_sint32", mask));
  EXPECT_TRUE(FieldMaskUtil::IsPathInFieldMask("optional_sint64", mask));
  EXPECT_TRUE(FieldMaskUtil::IsPathInFieldMask("optional_fixed32", mask));
  EXPECT_TRUE(FieldMaskUtil::IsPathInFieldMask("optional_fixed64", mask));
  EXPECT_TRUE(FieldMaskUtil::IsPathInFieldMask("optional_sfixed32", mask));
  EXPECT_TRUE(FieldMaskUtil::IsPathInFieldMask("optional_sfixed64", mask));
  EXPECT_TRUE(FieldMaskUtil::IsPathInFieldMask("optional_float", mask));
  EXPECT_TRUE(FieldMaskUtil::IsPathInFieldMask("optional_double", mask));
  EXPECT_TRUE(FieldMaskUtil::IsPathInFieldMask("optional_bool", mask));
  EXPECT_TRUE(FieldMaskUtil::IsPathInFieldMask("optional_string", mask));
  EXPECT_TRUE(FieldMaskUtil::IsPathInFieldMask("optional_bytes", mask));
  EXPECT_TRUE(
      FieldMaskUtil::IsPathInFieldMask("optional_nested_message", mask));
  EXPECT_TRUE(
      FieldMaskUtil::IsPathInFieldMask("optional_foreign_message", mask));
  EXPECT_TRUE(
      FieldMaskUtil::IsPathInFieldMask("optional_import_message", mask));
  EXPECT_TRUE(FieldMaskUtil::IsPathInFieldMask("optional_nested_enum", mask));
  EXPECT_TRUE(FieldMaskUtil::IsPathInFieldMask("optional_foreign_enum", mask));
  EXPECT_TRUE(FieldMaskUtil::IsPathInFieldMask("optional_import_enum", mask));
  EXPECT_TRUE(FieldMaskUtil::IsPathInFieldMask("repeated_int32", mask));
  EXPECT_TRUE(FieldMaskUtil::IsPathInFieldMask("repeated_int64", mask));
  EXPECT_TRUE(FieldMaskUtil::IsPathInFieldMask("repeated_uint32", mask));
  EXPECT_TRUE(FieldMaskUtil::IsPathInFieldMask("repeated_uint64", mask));
  EXPECT_TRUE(FieldMaskUtil::IsPathInFieldMask("repeated_sint32", mask));
  EXPECT_TRUE(FieldMaskUtil::IsPathInFieldMask("repeated_sint64", mask));
  EXPECT_TRUE(FieldMaskUtil::IsPathInFieldMask("repeated_fixed32", mask));
  EXPECT_TRUE(FieldMaskUtil::IsPathInFieldMask("repeated_fixed64", mask));
  EXPECT_TRUE(FieldMaskUtil::IsPathInFieldMask("repeated_sfixed32", mask));
  EXPECT_TRUE(FieldMaskUtil::IsPathInFieldMask("repeated_sfixed64", mask));
  EXPECT_TRUE(FieldMaskUtil::IsPathInFieldMask("repeated_float", mask));
  EXPECT_TRUE(FieldMaskUtil::IsPathInFieldMask("repeated_double", mask));
  EXPECT_TRUE(FieldMaskUtil::IsPathInFieldMask("repeated_bool", mask));
  EXPECT_TRUE(FieldMaskUtil::IsPathInFieldMask("repeated_string", mask));
  EXPECT_TRUE(FieldMaskUtil::IsPathInFieldMask("repeated_bytes", mask));
  EXPECT_TRUE(
      FieldMaskUtil::IsPathInFieldMask("repeated_nested_message", mask));
  EXPECT_TRUE(
      FieldMaskUtil::IsPathInFieldMask("repeated_foreign_message", mask));
  EXPECT_TRUE(
      FieldMaskUtil::IsPathInFieldMask("repeated_import_message", mask));
  EXPECT_TRUE(FieldMaskUtil::IsPathInFieldMask("repeated_nested_enum", mask));
  EXPECT_TRUE(FieldMaskUtil::IsPathInFieldMask("repeated_foreign_enum", mask));
  EXPECT_TRUE(FieldMaskUtil::IsPathInFieldMask("repeated_import_enum", mask));
}

TEST(FieldMaskUtilTest, TestToCanonicalForm) {
  FieldMask in, out;
  // Paths will be sorted.
  FieldMaskUtil::FromString("baz.quz,bar,foo", &in);
  FieldMaskUtil::ToCanonicalForm(in, &out);
  EXPECT_EQ("bar,baz.quz,foo", FieldMaskUtil::ToString(out));
  // Duplicated paths will be removed.
  FieldMaskUtil::FromString("foo,bar,foo", &in);
  FieldMaskUtil::ToCanonicalForm(in, &out);
  EXPECT_EQ("bar,foo", FieldMaskUtil::ToString(out));
  // Sub-paths of other paths will be removed.
  FieldMaskUtil::FromString("foo.b1,bar.b1,foo.b2,bar", &in);
  FieldMaskUtil::ToCanonicalForm(in, &out);
  EXPECT_EQ("bar,foo.b1,foo.b2", FieldMaskUtil::ToString(out));

  // Test more deeply nested cases.
  FieldMaskUtil::FromString(
      "foo.bar.baz1,"
      "foo.bar.baz2.quz,"
      "foo.bar.baz2",
      &in);
  FieldMaskUtil::ToCanonicalForm(in, &out);
  EXPECT_EQ("foo.bar.baz1,foo.bar.baz2", FieldMaskUtil::ToString(out));
  FieldMaskUtil::FromString(
      "foo.bar.baz1,"
      "foo.bar.baz2,"
      "foo.bar.baz2.quz",
      &in);
  FieldMaskUtil::ToCanonicalForm(in, &out);
  EXPECT_EQ("foo.bar.baz1,foo.bar.baz2", FieldMaskUtil::ToString(out));
  FieldMaskUtil::FromString(
      "foo.bar.baz1,"
      "foo.bar.baz2,"
      "foo.bar.baz2.quz,"
      "foo.bar",
      &in);
  FieldMaskUtil::ToCanonicalForm(in, &out);
  EXPECT_EQ("foo.bar", FieldMaskUtil::ToString(out));
  FieldMaskUtil::FromString(
      "foo.bar.baz1,"
      "foo.bar.baz2,"
      "foo.bar.baz2.quz,"
      "foo",
      &in);
  FieldMaskUtil::ToCanonicalForm(in, &out);
  EXPECT_EQ("foo", FieldMaskUtil::ToString(out));
}

TEST(FieldMaskUtilTest, TestUnion) {
  FieldMask mask1, mask2, out;
  // Test cases without overlapping.
  FieldMaskUtil::FromString("foo,baz", &mask1);
  FieldMaskUtil::FromString("bar,quz", &mask2);
  FieldMaskUtil::Union(mask1, mask2, &out);
  EXPECT_EQ("bar,baz,foo,quz", FieldMaskUtil::ToString(out));
  // Overlap with duplicated paths.
  FieldMaskUtil::FromString("foo,baz.bb", &mask1);
  FieldMaskUtil::FromString("baz.bb,quz", &mask2);
  FieldMaskUtil::Union(mask1, mask2, &out);
  EXPECT_EQ("baz.bb,foo,quz", FieldMaskUtil::ToString(out));
  // Overlap with paths covering some other paths.
  FieldMaskUtil::FromString("foo.bar.baz,quz", &mask1);
  FieldMaskUtil::FromString("foo.bar,bar", &mask2);
  FieldMaskUtil::Union(mask1, mask2, &out);
  EXPECT_EQ("bar,foo.bar,quz", FieldMaskUtil::ToString(out));
}

TEST(FieldMaskUtilTest, TestIntersect) {
  FieldMask mask1, mask2, out;
  // Test cases without overlapping.
  FieldMaskUtil::FromString("foo,baz", &mask1);
  FieldMaskUtil::FromString("bar,quz", &mask2);
  FieldMaskUtil::Intersect(mask1, mask2, &out);
  EXPECT_EQ("", FieldMaskUtil::ToString(out));
  // Overlap with duplicated paths.
  FieldMaskUtil::FromString("foo,baz.bb", &mask1);
  FieldMaskUtil::FromString("baz.bb,quz", &mask2);
  FieldMaskUtil::Intersect(mask1, mask2, &out);
  EXPECT_EQ("baz.bb", FieldMaskUtil::ToString(out));
  // Overlap with paths covering some other paths.
  FieldMaskUtil::FromString("foo.bar.baz,quz", &mask1);
  FieldMaskUtil::FromString("foo.bar,bar", &mask2);
  FieldMaskUtil::Intersect(mask1, mask2, &out);
  EXPECT_EQ("foo.bar.baz", FieldMaskUtil::ToString(out));
}

TEST(FieldMaskUtilTest, TestIspathInFieldMask) {
  FieldMask mask;
  FieldMaskUtil::FromString("foo.bar", &mask);
  EXPECT_FALSE(FieldMaskUtil::IsPathInFieldMask("", mask));
  EXPECT_FALSE(FieldMaskUtil::IsPathInFieldMask("foo", mask));
  EXPECT_TRUE(FieldMaskUtil::IsPathInFieldMask("foo.bar", mask));
  EXPECT_TRUE(FieldMaskUtil::IsPathInFieldMask("foo.bar.baz", mask));
  EXPECT_FALSE(FieldMaskUtil::IsPathInFieldMask("foo.bar0.baz", mask));
}

TEST(FieldMaskUtilTest, MergeMessage) {
  TestAllTypes src, dst;
  TestUtil::SetAllFields(&src);
  FieldMaskUtil::MergeOptions options;

#define TEST_MERGE_ONE_PRIMITIVE_FIELD(field_name)           \
  {                                                          \
    TestAllTypes tmp;                                        \
    tmp.set_##field_name(src.field_name());                  \
    FieldMask mask;                                          \
    mask.add_paths(#field_name);                             \
    dst.Clear();                                             \
    FieldMaskUtil::MergeMessageTo(src, mask, options, &dst); \
    EXPECT_EQ(tmp.DebugString(), dst.DebugString());         \
    src.clear_##field_name();                                \
    tmp.clear_##field_name();                                \
    FieldMaskUtil::MergeMessageTo(src, mask, options, &dst); \
    EXPECT_EQ(tmp.DebugString(), dst.DebugString());         \
  }
  TEST_MERGE_ONE_PRIMITIVE_FIELD(optional_int32)
  TEST_MERGE_ONE_PRIMITIVE_FIELD(optional_int64)
  TEST_MERGE_ONE_PRIMITIVE_FIELD(optional_uint32)
  TEST_MERGE_ONE_PRIMITIVE_FIELD(optional_uint64)
  TEST_MERGE_ONE_PRIMITIVE_FIELD(optional_sint32)
  TEST_MERGE_ONE_PRIMITIVE_FIELD(optional_sint64)
  TEST_MERGE_ONE_PRIMITIVE_FIELD(optional_fixed32)
  TEST_MERGE_ONE_PRIMITIVE_FIELD(optional_fixed64)
  TEST_MERGE_ONE_PRIMITIVE_FIELD(optional_sfixed32)
  TEST_MERGE_ONE_PRIMITIVE_FIELD(optional_sfixed64)
  TEST_MERGE_ONE_PRIMITIVE_FIELD(optional_float)
  TEST_MERGE_ONE_PRIMITIVE_FIELD(optional_double)
  TEST_MERGE_ONE_PRIMITIVE_FIELD(optional_bool)
  TEST_MERGE_ONE_PRIMITIVE_FIELD(optional_string)
  TEST_MERGE_ONE_PRIMITIVE_FIELD(optional_bytes)
  TEST_MERGE_ONE_PRIMITIVE_FIELD(optional_nested_enum)
  TEST_MERGE_ONE_PRIMITIVE_FIELD(optional_foreign_enum)
  TEST_MERGE_ONE_PRIMITIVE_FIELD(optional_import_enum)
#undef TEST_MERGE_ONE_PRIMITIVE_FIELD

#define TEST_MERGE_ONE_FIELD(field_name)                     \
  {                                                          \
    TestAllTypes tmp;                                        \
    *tmp.mutable_##field_name() = src.field_name();          \
    FieldMask mask;                                          \
    mask.add_paths(#field_name);                             \
    dst.Clear();                                             \
    FieldMaskUtil::MergeMessageTo(src, mask, options, &dst); \
    EXPECT_EQ(tmp.DebugString(), dst.DebugString());         \
  }
  TEST_MERGE_ONE_FIELD(optional_nested_message)
  TEST_MERGE_ONE_FIELD(optional_foreign_message)
  TEST_MERGE_ONE_FIELD(optional_import_message)

  TEST_MERGE_ONE_FIELD(repeated_int32)
  TEST_MERGE_ONE_FIELD(repeated_int64)
  TEST_MERGE_ONE_FIELD(repeated_uint32)
  TEST_MERGE_ONE_FIELD(repeated_uint64)
  TEST_MERGE_ONE_FIELD(repeated_sint32)
  TEST_MERGE_ONE_FIELD(repeated_sint64)
  TEST_MERGE_ONE_FIELD(repeated_fixed32)
  TEST_MERGE_ONE_FIELD(repeated_fixed64)
  TEST_MERGE_ONE_FIELD(repeated_sfixed32)
  TEST_MERGE_ONE_FIELD(repeated_sfixed64)
  TEST_MERGE_ONE_FIELD(repeated_float)
  TEST_MERGE_ONE_FIELD(repeated_double)
  TEST_MERGE_ONE_FIELD(repeated_bool)
  TEST_MERGE_ONE_FIELD(repeated_string)
  TEST_MERGE_ONE_FIELD(repeated_bytes)
  TEST_MERGE_ONE_FIELD(repeated_nested_message)
  TEST_MERGE_ONE_FIELD(repeated_foreign_message)
  TEST_MERGE_ONE_FIELD(repeated_import_message)
  TEST_MERGE_ONE_FIELD(repeated_nested_enum)
  TEST_MERGE_ONE_FIELD(repeated_foreign_enum)
  TEST_MERGE_ONE_FIELD(repeated_import_enum)
#undef TEST_MERGE_ONE_FIELD

  // Test merge nested fields.
  NestedTestAllTypes nested_src, nested_dst;
  nested_src.mutable_child()->mutable_payload()->set_optional_int32(1234);
  nested_src.mutable_child()
      ->mutable_child()
      ->mutable_payload()
      ->set_optional_int32(5678);
  FieldMask mask;
  FieldMaskUtil::FromString("child.payload", &mask);
  FieldMaskUtil::MergeMessageTo(nested_src, mask, options, &nested_dst);
  EXPECT_EQ(1234, nested_dst.child().payload().optional_int32());
  EXPECT_EQ(0, nested_dst.child().child().payload().optional_int32());

  FieldMaskUtil::FromString("child.child.payload", &mask);
  FieldMaskUtil::MergeMessageTo(nested_src, mask, options, &nested_dst);
  EXPECT_EQ(1234, nested_dst.child().payload().optional_int32());
  EXPECT_EQ(5678, nested_dst.child().child().payload().optional_int32());

  nested_dst.Clear();
  FieldMaskUtil::FromString("child.child.payload", &mask);
  FieldMaskUtil::MergeMessageTo(nested_src, mask, options, &nested_dst);
  EXPECT_EQ(0, nested_dst.child().payload().optional_int32());
  EXPECT_EQ(5678, nested_dst.child().child().payload().optional_int32());

  nested_dst.Clear();
  FieldMaskUtil::FromString("child", &mask);
  FieldMaskUtil::MergeMessageTo(nested_src, mask, options, &nested_dst);
  EXPECT_EQ(1234, nested_dst.child().payload().optional_int32());
  EXPECT_EQ(5678, nested_dst.child().child().payload().optional_int32());

  // Test MergeOptions.

  nested_dst.Clear();
  nested_dst.mutable_child()->mutable_payload()->set_optional_int64(4321);
  // Message fields will be merged by default.
  FieldMaskUtil::FromString("child.payload", &mask);
  FieldMaskUtil::MergeMessageTo(nested_src, mask, options, &nested_dst);
  EXPECT_EQ(1234, nested_dst.child().payload().optional_int32());
  EXPECT_EQ(4321, nested_dst.child().payload().optional_int64());
  // Change the behavior to replace message fields.
  options.set_replace_message_fields(true);
  FieldMaskUtil::FromString("child.payload", &mask);
  FieldMaskUtil::MergeMessageTo(nested_src, mask, options, &nested_dst);
  EXPECT_EQ(1234, nested_dst.child().payload().optional_int32());
  EXPECT_EQ(0, nested_dst.child().payload().optional_int64());

  // By default, fields missing in source are not cleared in destination.
  options.set_replace_message_fields(false);
  nested_dst.mutable_payload();
  EXPECT_TRUE(nested_dst.has_payload());
  FieldMaskUtil::FromString("payload", &mask);
  FieldMaskUtil::MergeMessageTo(nested_src, mask, options, &nested_dst);
  EXPECT_TRUE(nested_dst.has_payload());
  // But they are cleared when replacing message fields.
  options.set_replace_message_fields(true);
  nested_dst.Clear();
  nested_dst.mutable_payload();
  FieldMaskUtil::FromString("payload", &mask);
  FieldMaskUtil::MergeMessageTo(nested_src, mask, options, &nested_dst);
  EXPECT_FALSE(nested_dst.has_payload());

  nested_src.mutable_payload()->add_repeated_int32(1234);
  nested_dst.mutable_payload()->add_repeated_int32(5678);
  // Repeated fields will be appended by default.
  FieldMaskUtil::FromString("payload.repeated_int32", &mask);
  FieldMaskUtil::MergeMessageTo(nested_src, mask, options, &nested_dst);
  ASSERT_EQ(2, nested_dst.payload().repeated_int32_size());
  EXPECT_EQ(5678, nested_dst.payload().repeated_int32(0));
  EXPECT_EQ(1234, nested_dst.payload().repeated_int32(1));
  // Change the behavior to replace repeated fields.
  options.set_replace_repeated_fields(true);
  FieldMaskUtil::FromString("payload.repeated_int32", &mask);
  FieldMaskUtil::MergeMessageTo(nested_src, mask, options, &nested_dst);
  ASSERT_EQ(1, nested_dst.payload().repeated_int32_size());
  EXPECT_EQ(1234, nested_dst.payload().repeated_int32(0));
}

TEST(FieldMaskUtilTest, TrimMessage) {
#define TEST_TRIM_ONE_PRIMITIVE_FIELD(field_name)    \
  {                                                  \
    TestAllTypes msg;                                \
    TestUtil::SetAllFields(&msg);                    \
    TestAllTypes tmp;                                \
    tmp.set_##field_name(msg.field_name());          \
    FieldMask mask;                                  \
    mask.add_paths(#field_name);                     \
    FieldMaskUtil::TrimMessage(mask, &msg);          \
    EXPECT_EQ(tmp.DebugString(), msg.DebugString()); \
  }
  TEST_TRIM_ONE_PRIMITIVE_FIELD(optional_int32)
  TEST_TRIM_ONE_PRIMITIVE_FIELD(optional_int64)
  TEST_TRIM_ONE_PRIMITIVE_FIELD(optional_uint32)
  TEST_TRIM_ONE_PRIMITIVE_FIELD(optional_uint64)
  TEST_TRIM_ONE_PRIMITIVE_FIELD(optional_sint32)
  TEST_TRIM_ONE_PRIMITIVE_FIELD(optional_sint64)
  TEST_TRIM_ONE_PRIMITIVE_FIELD(optional_fixed32)
  TEST_TRIM_ONE_PRIMITIVE_FIELD(optional_fixed64)
  TEST_TRIM_ONE_PRIMITIVE_FIELD(optional_sfixed32)
  TEST_TRIM_ONE_PRIMITIVE_FIELD(optional_sfixed64)
  TEST_TRIM_ONE_PRIMITIVE_FIELD(optional_float)
  TEST_TRIM_ONE_PRIMITIVE_FIELD(optional_double)
  TEST_TRIM_ONE_PRIMITIVE_FIELD(optional_bool)
  TEST_TRIM_ONE_PRIMITIVE_FIELD(optional_string)
  TEST_TRIM_ONE_PRIMITIVE_FIELD(optional_bytes)
  TEST_TRIM_ONE_PRIMITIVE_FIELD(optional_nested_enum)
  TEST_TRIM_ONE_PRIMITIVE_FIELD(optional_foreign_enum)
  TEST_TRIM_ONE_PRIMITIVE_FIELD(optional_import_enum)
#undef TEST_TRIM_ONE_PRIMITIVE_FIELD

#define TEST_TRIM_ONE_FIELD(field_name)              \
  {                                                  \
    TestAllTypes msg;                                \
    TestUtil::SetAllFields(&msg);                    \
    TestAllTypes tmp;                                \
    *tmp.mutable_##field_name() = msg.field_name();  \
    FieldMask mask;                                  \
    mask.add_paths(#field_name);                     \
    FieldMaskUtil::TrimMessage(mask, &msg);          \
    EXPECT_EQ(tmp.DebugString(), msg.DebugString()); \
  }
  TEST_TRIM_ONE_FIELD(optional_nested_message)
  TEST_TRIM_ONE_FIELD(optional_foreign_message)
  TEST_TRIM_ONE_FIELD(optional_import_message)

  TEST_TRIM_ONE_FIELD(repeated_int32)
  TEST_TRIM_ONE_FIELD(repeated_int64)
  TEST_TRIM_ONE_FIELD(repeated_uint32)
  TEST_TRIM_ONE_FIELD(repeated_uint64)
  TEST_TRIM_ONE_FIELD(repeated_sint32)
  TEST_TRIM_ONE_FIELD(repeated_sint64)
  TEST_TRIM_ONE_FIELD(repeated_fixed32)
  TEST_TRIM_ONE_FIELD(repeated_fixed64)
  TEST_TRIM_ONE_FIELD(repeated_sfixed32)
  TEST_TRIM_ONE_FIELD(repeated_sfixed64)
  TEST_TRIM_ONE_FIELD(repeated_float)
  TEST_TRIM_ONE_FIELD(repeated_double)
  TEST_TRIM_ONE_FIELD(repeated_bool)
  TEST_TRIM_ONE_FIELD(repeated_string)
  TEST_TRIM_ONE_FIELD(repeated_bytes)
  TEST_TRIM_ONE_FIELD(repeated_nested_message)
  TEST_TRIM_ONE_FIELD(repeated_foreign_message)
  TEST_TRIM_ONE_FIELD(repeated_import_message)
  TEST_TRIM_ONE_FIELD(repeated_nested_enum)
  TEST_TRIM_ONE_FIELD(repeated_foreign_enum)
  TEST_TRIM_ONE_FIELD(repeated_import_enum)
#undef TEST_TRIM_ONE_FIELD

  // Test trim nested fields.
  NestedTestAllTypes nested_msg;
  nested_msg.mutable_child()->mutable_payload()->set_optional_int32(1234);
  nested_msg.mutable_child()
      ->mutable_child()
      ->mutable_payload()
      ->set_optional_int32(5678);
  NestedTestAllTypes trimmed_msg(nested_msg);
  FieldMask mask;
  FieldMaskUtil::FromString("child.payload", &mask);
  FieldMaskUtil::TrimMessage(mask, &trimmed_msg);
  EXPECT_EQ(1234, trimmed_msg.child().payload().optional_int32());
  EXPECT_EQ(0, trimmed_msg.child().child().payload().optional_int32());

  trimmed_msg = nested_msg;
  FieldMaskUtil::FromString("child.child.payload", &mask);
  FieldMaskUtil::TrimMessage(mask, &trimmed_msg);
  EXPECT_EQ(0, trimmed_msg.child().payload().optional_int32());
  EXPECT_EQ(5678, trimmed_msg.child().child().payload().optional_int32());

  trimmed_msg = nested_msg;
  FieldMaskUtil::FromString("child", &mask);
  FieldMaskUtil::TrimMessage(mask, &trimmed_msg);
  EXPECT_EQ(1234, trimmed_msg.child().payload().optional_int32());
  EXPECT_EQ(5678, trimmed_msg.child().child().payload().optional_int32());

  trimmed_msg = nested_msg;
  FieldMaskUtil::FromString("child.child", &mask);
  FieldMaskUtil::TrimMessage(mask, &trimmed_msg);
  EXPECT_EQ(0, trimmed_msg.child().payload().optional_int32());
  EXPECT_EQ(5678, trimmed_msg.child().child().payload().optional_int32());

  // Verify than an empty FieldMask trims nothing
  TestAllTypes all_types_msg;
  TestUtil::SetAllFields(&all_types_msg);
  TestAllTypes trimmed_all_types(all_types_msg);
  FieldMask empty_mask;
  FieldMaskUtil::TrimMessage(empty_mask, &trimmed_all_types);
  EXPECT_EQ(trimmed_all_types.DebugString(), all_types_msg.DebugString());
}


}  // namespace
}  // namespace util
}  // namespace protobuf
}  // namespace google

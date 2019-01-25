
#include "gmock/gmock-generated-matchers.h"

#include <list>
#include <map>
#include <set>
#include <sstream>
#include <string>
#include <utility>
#include <vector>

#include "gmock/gmock.h"
#include "gtest/gtest.h"
#include "gtest/gtest-spi.h"

namespace {

using std::list;
using std::map;
using std::pair;
using std::set;
using std::stringstream;
using std::vector;
using std::tr1::get;
using std::tr1::make_tuple;
using std::tr1::tuple;
using testing::_;
using testing::Args;
using testing::Contains;
using testing::ElementsAre;
using testing::ElementsAreArray;
using testing::Eq;
using testing::Ge;
using testing::Gt;
using testing::Le;
using testing::Lt;
using testing::MakeMatcher;
using testing::Matcher;
using testing::MatcherInterface;
using testing::MatchResultListener;
using testing::Ne;
using testing::Not;
using testing::Pointee;
using testing::PrintToString;
using testing::Ref;
using testing::StaticAssertTypeEq;
using testing::StrEq;
using testing::Value;
using testing::internal::ElementsAreArrayMatcher;
using testing::internal::string;

// Evaluates to the number of elements in 'array'.
#define GMOCK_ARRAY_SIZE_(a) (sizeof(a) / sizeof(a[0]))

// Returns the description of the given matcher.
template <typename T>
string Describe(const Matcher<T>& m) {
  stringstream ss;
  m.DescribeTo(&ss);
  return ss.str();
}

// Returns the description of the negation of the given matcher.
template <typename T>
string DescribeNegation(const Matcher<T>& m) {
  stringstream ss;
  m.DescribeNegationTo(&ss);
  return ss.str();
}

// Returns the reason why x matches, or doesn't match, m.
template <typename MatcherType, typename Value>
string Explain(const MatcherType& m, const Value& x) {
  stringstream ss;
  m.ExplainMatchResultTo(x, &ss);
  return ss.str();
}

// Tests Args<k0, ..., kn>(m).

TEST(ArgsTest, AcceptsZeroTemplateArg) {
  const tuple<int, bool> t(5, true);
  EXPECT_THAT(t, Args<>(Eq(tuple<>())));
  EXPECT_THAT(t, Not(Args<>(Ne(tuple<>()))));
}

TEST(ArgsTest, AcceptsOneTemplateArg) {
  const tuple<int, bool> t(5, true);
  EXPECT_THAT(t, Args<0>(Eq(make_tuple(5))));
  EXPECT_THAT(t, Args<1>(Eq(make_tuple(true))));
  EXPECT_THAT(t, Not(Args<1>(Eq(make_tuple(false)))));
}

TEST(ArgsTest, AcceptsTwoTemplateArgs) {
  const tuple<short, int, long> t(4, 5, 6L);  // NOLINT

  EXPECT_THAT(t, (Args<0, 1>(Lt())));
  EXPECT_THAT(t, (Args<1, 2>(Lt())));
  EXPECT_THAT(t, Not(Args<0, 2>(Gt())));
}

TEST(ArgsTest, AcceptsRepeatedTemplateArgs) {
  const tuple<short, int, long> t(4, 5, 6L);  // NOLINT
  EXPECT_THAT(t, (Args<0, 0>(Eq())));
  EXPECT_THAT(t, Not(Args<1, 1>(Ne())));
}

TEST(ArgsTest, AcceptsDecreasingTemplateArgs) {
  const tuple<short, int, long> t(4, 5, 6L);  // NOLINT
  EXPECT_THAT(t, (Args<2, 0>(Gt())));
  EXPECT_THAT(t, Not(Args<2, 1>(Lt())));
}

// The MATCHER*() macros trigger warning C4100 (unreferenced formal
// parameter) in MSVC with -W4.  Unfortunately they cannot be fixed in
// the macro definition, as the warnings are generated when the macro
// is expanded and macro expansion cannot contain #pragma.  Therefore
// we suppress them here.
#ifdef _MSC_VER
# pragma warning(push)
# pragma warning(disable:4100)
#endif

MATCHER(SumIsZero, "") {
  return get<0>(arg) + get<1>(arg) + get<2>(arg) == 0;
}

TEST(ArgsTest, AcceptsMoreTemplateArgsThanArityOfOriginalTuple) {
  EXPECT_THAT(make_tuple(-1, 2), (Args<0, 0, 1>(SumIsZero())));
  EXPECT_THAT(make_tuple(1, 2), Not(Args<0, 0, 1>(SumIsZero())));
}

TEST(ArgsTest, CanBeNested) {
  const tuple<short, int, long, int> t(4, 5, 6L, 6);  // NOLINT
  EXPECT_THAT(t, (Args<1, 2, 3>(Args<1, 2>(Eq()))));
  EXPECT_THAT(t, (Args<0, 1, 3>(Args<0, 2>(Lt()))));
}

TEST(ArgsTest, CanMatchTupleByValue) {
  typedef tuple<char, int, int> Tuple3;
  const Matcher<Tuple3> m = Args<1, 2>(Lt());
  EXPECT_TRUE(m.Matches(Tuple3('a', 1, 2)));
  EXPECT_FALSE(m.Matches(Tuple3('b', 2, 2)));
}

TEST(ArgsTest, CanMatchTupleByReference) {
  typedef tuple<char, char, int> Tuple3;
  const Matcher<const Tuple3&> m = Args<0, 1>(Lt());
  EXPECT_TRUE(m.Matches(Tuple3('a', 'b', 2)));
  EXPECT_FALSE(m.Matches(Tuple3('b', 'b', 2)));
}

// Validates that arg is printed as str.
MATCHER_P(PrintsAs, str, "") {
  return testing::PrintToString(arg) == str;
}

TEST(ArgsTest, AcceptsTenTemplateArgs) {
  EXPECT_THAT(make_tuple(0, 1L, 2, 3L, 4, 5, 6, 7, 8, 9),
              (Args<9, 8, 7, 6, 5, 4, 3, 2, 1, 0>(
                  PrintsAs("(9, 8, 7, 6, 5, 4, 3, 2, 1, 0)"))));
  EXPECT_THAT(make_tuple(0, 1L, 2, 3L, 4, 5, 6, 7, 8, 9),
              Not(Args<9, 8, 7, 6, 5, 4, 3, 2, 1, 0>(
                      PrintsAs("(0, 8, 7, 6, 5, 4, 3, 2, 1, 0)"))));
}

TEST(ArgsTest, DescirbesSelfCorrectly) {
  const Matcher<tuple<int, bool, char> > m = Args<2, 0>(Lt());
  EXPECT_EQ("are a tuple whose fields (#2, #0) are a pair where "
            "the first < the second",
            Describe(m));
}

TEST(ArgsTest, DescirbesNestedArgsCorrectly) {
  const Matcher<const tuple<int, bool, char, int>&> m =
      Args<0, 2, 3>(Args<2, 0>(Lt()));
  EXPECT_EQ("are a tuple whose fields (#0, #2, #3) are a tuple "
            "whose fields (#2, #0) are a pair where the first < the second",
            Describe(m));
}

TEST(ArgsTest, DescribesNegationCorrectly) {
  const Matcher<tuple<int, char> > m = Args<1, 0>(Gt());
  EXPECT_EQ("are a tuple whose fields (#1, #0) aren't a pair "
            "where the first > the second",
            DescribeNegation(m));
}

TEST(ArgsTest, ExplainsMatchResultWithoutInnerExplanation) {
  const Matcher<tuple<bool, int, int> > m = Args<1, 2>(Eq());
  EXPECT_EQ("whose fields (#1, #2) are (42, 42)",
            Explain(m, make_tuple(false, 42, 42)));
  EXPECT_EQ("whose fields (#1, #2) are (42, 43)",
            Explain(m, make_tuple(false, 42, 43)));
}

// For testing Args<>'s explanation.
class LessThanMatcher : public MatcherInterface<tuple<char, int> > {
 public:
  virtual void DescribeTo(::std::ostream* os) const {}

  virtual bool MatchAndExplain(tuple<char, int> value,
                               MatchResultListener* listener) const {
    const int diff = get<0>(value) - get<1>(value);
    if (diff > 0) {
      *listener << "where the first value is " << diff
                << " more than the second";
    }
    return diff < 0;
  }
};

Matcher<tuple<char, int> > LessThan() {
  return MakeMatcher(new LessThanMatcher);
}

TEST(ArgsTest, ExplainsMatchResultWithInnerExplanation) {
  const Matcher<tuple<char, int, int> > m = Args<0, 2>(LessThan());
  EXPECT_EQ("whose fields (#0, #2) are ('a' (97, 0x61), 42), "
            "where the first value is 55 more than the second",
            Explain(m, make_tuple('a', 42, 42)));
  EXPECT_EQ("whose fields (#0, #2) are ('\\0', 43)",
            Explain(m, make_tuple('\0', 42, 43)));
}

// For testing ExplainMatchResultTo().
class GreaterThanMatcher : public MatcherInterface<int> {
 public:
  explicit GreaterThanMatcher(int rhs) : rhs_(rhs) {}

  virtual void DescribeTo(::std::ostream* os) const {
    *os << "is greater than " << rhs_;
  }

  virtual bool MatchAndExplain(int lhs,
                               MatchResultListener* listener) const {
    const int diff = lhs - rhs_;
    if (diff > 0) {
      *listener << "which is " << diff << " more than " << rhs_;
    } else if (diff == 0) {
      *listener << "which is the same as " << rhs_;
    } else {
      *listener << "which is " << -diff << " less than " << rhs_;
    }

    return lhs > rhs_;
  }

 private:
  int rhs_;
};

Matcher<int> GreaterThan(int n) {
  return MakeMatcher(new GreaterThanMatcher(n));
}

// Tests for ElementsAre().

TEST(ElementsAreTest, CanDescribeExpectingNoElement) {
  Matcher<const vector<int>&> m = ElementsAre();
  EXPECT_EQ("is empty", Describe(m));
}

TEST(ElementsAreTest, CanDescribeExpectingOneElement) {
  Matcher<vector<int> > m = ElementsAre(Gt(5));
  EXPECT_EQ("has 1 element that is > 5", Describe(m));
}

TEST(ElementsAreTest, CanDescribeExpectingManyElements) {
  Matcher<list<string> > m = ElementsAre(StrEq("one"), "two");
  EXPECT_EQ("has 2 elements where\n"
            "element #0 is equal to \"one\",\n"
            "element #1 is equal to \"two\"", Describe(m));
}

TEST(ElementsAreTest, CanDescribeNegationOfExpectingNoElement) {
  Matcher<vector<int> > m = ElementsAre();
  EXPECT_EQ("isn't empty", DescribeNegation(m));
}

TEST(ElementsAreTest, CanDescribeNegationOfExpectingOneElment) {
  Matcher<const list<int>& > m = ElementsAre(Gt(5));
  EXPECT_EQ("doesn't have 1 element, or\n"
            "element #0 isn't > 5", DescribeNegation(m));
}

TEST(ElementsAreTest, CanDescribeNegationOfExpectingManyElements) {
  Matcher<const list<string>& > m = ElementsAre("one", "two");
  EXPECT_EQ("doesn't have 2 elements, or\n"
            "element #0 isn't equal to \"one\", or\n"
            "element #1 isn't equal to \"two\"", DescribeNegation(m));
}

TEST(ElementsAreTest, DoesNotExplainTrivialMatch) {
  Matcher<const list<int>& > m = ElementsAre(1, Ne(2));

  list<int> test_list;
  test_list.push_back(1);
  test_list.push_back(3);
  EXPECT_EQ("", Explain(m, test_list));  // No need to explain anything.
}

TEST(ElementsAreTest, ExplainsNonTrivialMatch) {
  Matcher<const vector<int>& > m =
      ElementsAre(GreaterThan(1), 0, GreaterThan(2));

  const int a[] = { 10, 0, 100 };
  vector<int> test_vector(a, a + GMOCK_ARRAY_SIZE_(a));
  EXPECT_EQ("whose element #0 matches, which is 9 more than 1,\n"
            "and whose element #2 matches, which is 98 more than 2",
            Explain(m, test_vector));
}

TEST(ElementsAreTest, CanExplainMismatchWrongSize) {
  Matcher<const list<int>& > m = ElementsAre(1, 3);

  list<int> test_list;
  // No need to explain when the container is empty.
  EXPECT_EQ("", Explain(m, test_list));

  test_list.push_back(1);
  EXPECT_EQ("which has 1 element", Explain(m, test_list));
}

TEST(ElementsAreTest, CanExplainMismatchRightSize) {
  Matcher<const vector<int>& > m = ElementsAre(1, GreaterThan(5));

  vector<int> v;
  v.push_back(2);
  v.push_back(1);
  EXPECT_EQ("whose element #0 doesn't match", Explain(m, v));

  v[0] = 1;
  EXPECT_EQ("whose element #1 doesn't match, which is 4 less than 5",
            Explain(m, v));
}

TEST(ElementsAreTest, MatchesOneElementVector) {
  vector<string> test_vector;
  test_vector.push_back("test string");

  EXPECT_THAT(test_vector, ElementsAre(StrEq("test string")));
}

TEST(ElementsAreTest, MatchesOneElementList) {
  list<string> test_list;
  test_list.push_back("test string");

  EXPECT_THAT(test_list, ElementsAre("test string"));
}

TEST(ElementsAreTest, MatchesThreeElementVector) {
  vector<string> test_vector;
  test_vector.push_back("one");
  test_vector.push_back("two");
  test_vector.push_back("three");

  EXPECT_THAT(test_vector, ElementsAre("one", StrEq("two"), _));
}

TEST(ElementsAreTest, MatchesOneElementEqMatcher) {
  vector<int> test_vector;
  test_vector.push_back(4);

  EXPECT_THAT(test_vector, ElementsAre(Eq(4)));
}

TEST(ElementsAreTest, MatchesOneElementAnyMatcher) {
  vector<int> test_vector;
  test_vector.push_back(4);

  EXPECT_THAT(test_vector, ElementsAre(_));
}

TEST(ElementsAreTest, MatchesOneElementValue) {
  vector<int> test_vector;
  test_vector.push_back(4);

  EXPECT_THAT(test_vector, ElementsAre(4));
}

TEST(ElementsAreTest, MatchesThreeElementsMixedMatchers) {
  vector<int> test_vector;
  test_vector.push_back(1);
  test_vector.push_back(2);
  test_vector.push_back(3);

  EXPECT_THAT(test_vector, ElementsAre(1, Eq(2), _));
}

TEST(ElementsAreTest, MatchesTenElementVector) {
  const int a[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
  vector<int> test_vector(a, a + GMOCK_ARRAY_SIZE_(a));

  EXPECT_THAT(test_vector,
              // The element list can contain values and/or matchers
              // of different types.
              ElementsAre(0, Ge(0), _, 3, 4, Ne(2), Eq(6), 7, 8, _));
}

TEST(ElementsAreTest, DoesNotMatchWrongSize) {
  vector<string> test_vector;
  test_vector.push_back("test string");
  test_vector.push_back("test string");

  Matcher<vector<string> > m = ElementsAre(StrEq("test string"));
  EXPECT_FALSE(m.Matches(test_vector));
}

TEST(ElementsAreTest, DoesNotMatchWrongValue) {
  vector<string> test_vector;
  test_vector.push_back("other string");

  Matcher<vector<string> > m = ElementsAre(StrEq("test string"));
  EXPECT_FALSE(m.Matches(test_vector));
}

TEST(ElementsAreTest, DoesNotMatchWrongOrder) {
  vector<string> test_vector;
  test_vector.push_back("one");
  test_vector.push_back("three");
  test_vector.push_back("two");

  Matcher<vector<string> > m = ElementsAre(
    StrEq("one"), StrEq("two"), StrEq("three"));
  EXPECT_FALSE(m.Matches(test_vector));
}

TEST(ElementsAreTest, WorksForNestedContainer) {
  const char* strings[] = {
    "Hi",
    "world"
  };

  vector<list<char> > nested;
  for (size_t i = 0; i < GMOCK_ARRAY_SIZE_(strings); i++) {
    nested.push_back(list<char>(strings[i], strings[i] + strlen(strings[i])));
  }

  EXPECT_THAT(nested, ElementsAre(ElementsAre('H', Ne('e')),
                                  ElementsAre('w', 'o', _, _, 'd')));
  EXPECT_THAT(nested, Not(ElementsAre(ElementsAre('H', 'e'),
                                      ElementsAre('w', 'o', _, _, 'd'))));
}

TEST(ElementsAreTest, WorksWithByRefElementMatchers) {
  int a[] = { 0, 1, 2 };
  vector<int> v(a, a + GMOCK_ARRAY_SIZE_(a));

  EXPECT_THAT(v, ElementsAre(Ref(v[0]), Ref(v[1]), Ref(v[2])));
  EXPECT_THAT(v, Not(ElementsAre(Ref(v[0]), Ref(v[1]), Ref(a[2]))));
}

TEST(ElementsAreTest, WorksWithContainerPointerUsingPointee) {
  int a[] = { 0, 1, 2 };
  vector<int> v(a, a + GMOCK_ARRAY_SIZE_(a));

  EXPECT_THAT(&v, Pointee(ElementsAre(0, 1, _)));
  EXPECT_THAT(&v, Not(Pointee(ElementsAre(0, _, 3))));
}

TEST(ElementsAreTest, WorksWithNativeArrayPassedByReference) {
  int array[] = { 0, 1, 2 };
  EXPECT_THAT(array, ElementsAre(0, 1, _));
  EXPECT_THAT(array, Not(ElementsAre(1, _, _)));
  EXPECT_THAT(array, Not(ElementsAre(0, _)));
}

class NativeArrayPassedAsPointerAndSize {
 public:
  NativeArrayPassedAsPointerAndSize() {}

  MOCK_METHOD2(Helper, void(int* array, int size));

 private:
  GTEST_DISALLOW_COPY_AND_ASSIGN_(NativeArrayPassedAsPointerAndSize);
};

TEST(ElementsAreTest, WorksWithNativeArrayPassedAsPointerAndSize) {
  int array[] = { 0, 1 };
  ::std::tr1::tuple<int*, size_t> array_as_tuple(array, 2);
  EXPECT_THAT(array_as_tuple, ElementsAre(0, 1));
  EXPECT_THAT(array_as_tuple, Not(ElementsAre(0)));

  NativeArrayPassedAsPointerAndSize helper;
  EXPECT_CALL(helper, Helper(_, _))
      .With(ElementsAre(0, 1));
  helper.Helper(array, 2);
}

TEST(ElementsAreTest, WorksWithTwoDimensionalNativeArray) {
  const char a2[][3] = { "hi", "lo" };
  EXPECT_THAT(a2, ElementsAre(ElementsAre('h', 'i', '\0'),
                              ElementsAre('l', 'o', '\0')));
  EXPECT_THAT(a2, ElementsAre(StrEq("hi"), StrEq("lo")));
  EXPECT_THAT(a2, ElementsAre(Not(ElementsAre('h', 'o', '\0')),
                              ElementsAre('l', 'o', '\0')));
}

TEST(ElementsAreTest, AcceptsStringLiteral) {
  string array[] = { "hi", "one", "two" };
  EXPECT_THAT(array, ElementsAre("hi", "one", "two"));
  EXPECT_THAT(array, Not(ElementsAre("hi", "one", "too")));
}

#ifndef _MSC_VER

// The following test passes a value of type const char[] to a
// function template that expects const T&.  Some versions of MSVC
// generates a compiler error C2665 for that.  We believe it's a bug
// in MSVC.  Therefore this test is #if-ed out for MSVC.

// Declared here with the size unknown.  Defined AFTER the following test.
extern const char kHi[];

TEST(ElementsAreTest, AcceptsArrayWithUnknownSize) {
  // The size of kHi is not known in this test, but ElementsAre() should
  // still accept it.

  string array1[] = { "hi" };
  EXPECT_THAT(array1, ElementsAre(kHi));

  string array2[] = { "ho" };
  EXPECT_THAT(array2, Not(ElementsAre(kHi)));
}

const char kHi[] = "hi";

#endif  // _MSC_VER

TEST(ElementsAreTest, MakesCopyOfArguments) {
  int x = 1;
  int y = 2;
  // This should make a copy of x and y.
  ::testing::internal::ElementsAreMatcher<std::tr1::tuple<int, int> >
          polymorphic_matcher = ElementsAre(x, y);
  // Changing x and y now shouldn't affect the meaning of the above matcher.
  x = y = 0;
  const int array1[] = { 1, 2 };
  EXPECT_THAT(array1, polymorphic_matcher);
  const int array2[] = { 0, 0 };
  EXPECT_THAT(array2, Not(polymorphic_matcher));
}


// Tests for ElementsAreArray().  Since ElementsAreArray() shares most
// of the implementation with ElementsAre(), we don't test it as
// thoroughly here.

TEST(ElementsAreArrayTest, CanBeCreatedWithValueArray) {
  const int a[] = { 1, 2, 3 };

  vector<int> test_vector(a, a + GMOCK_ARRAY_SIZE_(a));
  EXPECT_THAT(test_vector, ElementsAreArray(a));

  test_vector[2] = 0;
  EXPECT_THAT(test_vector, Not(ElementsAreArray(a)));
}

TEST(ElementsAreArrayTest, CanBeCreatedWithArraySize) {
  const char* a[] = { "one", "two", "three" };

  vector<string> test_vector(a, a + GMOCK_ARRAY_SIZE_(a));
  EXPECT_THAT(test_vector, ElementsAreArray(a, GMOCK_ARRAY_SIZE_(a)));

  const char** p = a;
  test_vector[0] = "1";
  EXPECT_THAT(test_vector, Not(ElementsAreArray(p, GMOCK_ARRAY_SIZE_(a))));
}

TEST(ElementsAreArrayTest, CanBeCreatedWithoutArraySize) {
  const char* a[] = { "one", "two", "three" };

  vector<string> test_vector(a, a + GMOCK_ARRAY_SIZE_(a));
  EXPECT_THAT(test_vector, ElementsAreArray(a));

  test_vector[0] = "1";
  EXPECT_THAT(test_vector, Not(ElementsAreArray(a)));
}

TEST(ElementsAreArrayTest, CanBeCreatedWithMatcherArray) {
  const Matcher<string> kMatcherArray[] =
    { StrEq("one"), StrEq("two"), StrEq("three") };

  vector<string> test_vector;
  test_vector.push_back("one");
  test_vector.push_back("two");
  test_vector.push_back("three");
  EXPECT_THAT(test_vector, ElementsAreArray(kMatcherArray));

  test_vector.push_back("three");
  EXPECT_THAT(test_vector, Not(ElementsAreArray(kMatcherArray)));
}

TEST(ElementsAreArrayTest, CanBeCreatedWithVector) {
  const int a[] = { 1, 2, 3 };
  vector<int> test_vector(a, a + GMOCK_ARRAY_SIZE_(a));
  const vector<int> expected(a, a + GMOCK_ARRAY_SIZE_(a));
  EXPECT_THAT(test_vector, ElementsAreArray(expected));
  test_vector.push_back(4);
  EXPECT_THAT(test_vector, Not(ElementsAreArray(expected)));
}

#if GTEST_LANG_CXX11

TEST(ElementsAreArrayTest, TakesInitializerList) {
  const int a[5] = { 1, 2, 3, 4, 5 };
  EXPECT_THAT(a, ElementsAreArray({ 1, 2, 3, 4, 5 }));
  EXPECT_THAT(a, Not(ElementsAreArray({ 1, 2, 3, 5, 4 })));
  EXPECT_THAT(a, Not(ElementsAreArray({ 1, 2, 3, 4, 6 })));
}

TEST(ElementsAreArrayTest, TakesInitializerListOfCStrings) {
  const string a[5] = { "a", "b", "c", "d", "e" };
  EXPECT_THAT(a, ElementsAreArray({ "a", "b", "c", "d", "e" }));
  EXPECT_THAT(a, Not(ElementsAreArray({ "a", "b", "c", "e", "d" })));
  EXPECT_THAT(a, Not(ElementsAreArray({ "a", "b", "c", "d", "ef" })));
}

TEST(ElementsAreArrayTest, TakesInitializerListOfSameTypedMatchers) {
  const int a[5] = { 1, 2, 3, 4, 5 };
  EXPECT_THAT(a, ElementsAreArray(
      { Eq(1), Eq(2), Eq(3), Eq(4), Eq(5) }));
  EXPECT_THAT(a, Not(ElementsAreArray(
      { Eq(1), Eq(2), Eq(3), Eq(4), Eq(6) })));
}

TEST(ElementsAreArrayTest,
     TakesInitializerListOfDifferentTypedMatchers) {
  const int a[5] = { 1, 2, 3, 4, 5 };
  // The compiler cannot infer the type of the initializer list if its
  // elements have different types.  We must explicitly specify the
  // unified element type in this case.
  EXPECT_THAT(a, ElementsAreArray<Matcher<int> >(
      { Eq(1), Ne(-2), Ge(3), Le(4), Eq(5) }));
  EXPECT_THAT(a, Not(ElementsAreArray<Matcher<int> >(
      { Eq(1), Ne(-2), Ge(3), Le(4), Eq(6) })));
}

#endif  // GTEST_LANG_CXX11

TEST(ElementsAreArrayTest, CanBeCreatedWithMatcherVector) {
  const int a[] = { 1, 2, 3 };
  const Matcher<int> kMatchers[] = { Eq(1), Eq(2), Eq(3) };
  vector<int> test_vector(a, a + GMOCK_ARRAY_SIZE_(a));
  const vector<Matcher<int> > expected(
      kMatchers, kMatchers + GMOCK_ARRAY_SIZE_(kMatchers));
  EXPECT_THAT(test_vector, ElementsAreArray(expected));
  test_vector.push_back(4);
  EXPECT_THAT(test_vector, Not(ElementsAreArray(expected)));
}

TEST(ElementsAreArrayTest, CanBeCreatedWithIteratorRange) {
  const int a[] = { 1, 2, 3 };
  const vector<int> test_vector(a, a + GMOCK_ARRAY_SIZE_(a));
  const vector<int> expected(a, a + GMOCK_ARRAY_SIZE_(a));
  EXPECT_THAT(test_vector, ElementsAreArray(expected.begin(), expected.end()));
  // Pointers are iterators, too.
  EXPECT_THAT(test_vector, ElementsAreArray(a, a + GMOCK_ARRAY_SIZE_(a)));
  // The empty range of NULL pointers should also be okay.
  int* const null_int = NULL;
  EXPECT_THAT(test_vector, Not(ElementsAreArray(null_int, null_int)));
  EXPECT_THAT((vector<int>()), ElementsAreArray(null_int, null_int));
}

// Since ElementsAre() and ElementsAreArray() share much of the
// implementation, we only do a sanity test for native arrays here.
TEST(ElementsAreArrayTest, WorksWithNativeArray) {
  ::std::string a[] = { "hi", "ho" };
  ::std::string b[] = { "hi", "ho" };

  EXPECT_THAT(a, ElementsAreArray(b));
  EXPECT_THAT(a, ElementsAreArray(b, 2));
  EXPECT_THAT(a, Not(ElementsAreArray(b, 1)));
}

TEST(ElementsAreArrayTest, SourceLifeSpan) {
  const int a[] = { 1, 2, 3 };
  vector<int> test_vector(a, a + GMOCK_ARRAY_SIZE_(a));
  vector<int> expect(a, a + GMOCK_ARRAY_SIZE_(a));
  ElementsAreArrayMatcher<int> matcher_maker =
      ElementsAreArray(expect.begin(), expect.end());
  EXPECT_THAT(test_vector, matcher_maker);
  // Changing in place the values that initialized matcher_maker should not
  // affect matcher_maker anymore. It should have made its own copy of them.
  typedef vector<int>::iterator Iter;
  for (Iter it = expect.begin(); it != expect.end(); ++it) { *it += 10; }
  EXPECT_THAT(test_vector, matcher_maker);
  test_vector.push_back(3);
  EXPECT_THAT(test_vector, Not(matcher_maker));
}

// Tests for the MATCHER*() macro family.

// Tests that a simple MATCHER() definition works.

MATCHER(IsEven, "") { return (arg % 2) == 0; }

TEST(MatcherMacroTest, Works) {
  const Matcher<int> m = IsEven();
  EXPECT_TRUE(m.Matches(6));
  EXPECT_FALSE(m.Matches(7));

  EXPECT_EQ("is even", Describe(m));
  EXPECT_EQ("not (is even)", DescribeNegation(m));
  EXPECT_EQ("", Explain(m, 6));
  EXPECT_EQ("", Explain(m, 7));
}

// This also tests that the description string can reference 'negation'.
MATCHER(IsEven2, negation ? "is odd" : "is even") {
  if ((arg % 2) == 0) {
    // Verifies that we can stream to result_listener, a listener
    // supplied by the MATCHER macro implicitly.
    *result_listener << "OK";
    return true;
  } else {
    *result_listener << "% 2 == " << (arg % 2);
    return false;
  }
}

// This also tests that the description string can reference matcher
// parameters.
MATCHER_P2(EqSumOf, x, y,
           string(negation ? "doesn't equal" : "equals") + " the sum of " +
           PrintToString(x) + " and " + PrintToString(y)) {
  if (arg == (x + y)) {
    *result_listener << "OK";
    return true;
  } else {
    // Verifies that we can stream to the underlying stream of
    // result_listener.
    if (result_listener->stream() != NULL) {
      *result_listener->stream() << "diff == " << (x + y - arg);
    }
    return false;
  }
}

// Tests that the matcher description can reference 'negation' and the
// matcher parameters.
TEST(MatcherMacroTest, DescriptionCanReferenceNegationAndParameters) {
  const Matcher<int> m1 = IsEven2();
  EXPECT_EQ("is even", Describe(m1));
  EXPECT_EQ("is odd", DescribeNegation(m1));

  const Matcher<int> m2 = EqSumOf(5, 9);
  EXPECT_EQ("equals the sum of 5 and 9", Describe(m2));
  EXPECT_EQ("doesn't equal the sum of 5 and 9", DescribeNegation(m2));
}

// Tests explaining match result in a MATCHER* macro.
TEST(MatcherMacroTest, CanExplainMatchResult) {
  const Matcher<int> m1 = IsEven2();
  EXPECT_EQ("OK", Explain(m1, 4));
  EXPECT_EQ("% 2 == 1", Explain(m1, 5));

  const Matcher<int> m2 = EqSumOf(1, 2);
  EXPECT_EQ("OK", Explain(m2, 3));
  EXPECT_EQ("diff == -1", Explain(m2, 4));
}

// Tests that the body of MATCHER() can reference the type of the
// value being matched.

MATCHER(IsEmptyString, "") {
  StaticAssertTypeEq< ::std::string, arg_type>();
  return arg == "";
}

MATCHER(IsEmptyStringByRef, "") {
  StaticAssertTypeEq<const ::std::string&, arg_type>();
  return arg == "";
}

TEST(MatcherMacroTest, CanReferenceArgType) {
  const Matcher< ::std::string> m1 = IsEmptyString();
  EXPECT_TRUE(m1.Matches(""));

  const Matcher<const ::std::string&> m2 = IsEmptyStringByRef();
  EXPECT_TRUE(m2.Matches(""));
}

// Tests that MATCHER() can be used in a namespace.

namespace matcher_test {
MATCHER(IsOdd, "") { return (arg % 2) != 0; }
}  // namespace matcher_test

TEST(MatcherMacroTest, WorksInNamespace) {
  Matcher<int> m = matcher_test::IsOdd();
  EXPECT_FALSE(m.Matches(4));
  EXPECT_TRUE(m.Matches(5));
}

// Tests that Value() can be used to compose matchers.
MATCHER(IsPositiveOdd, "") {
  return Value(arg, matcher_test::IsOdd()) && arg > 0;
}

TEST(MatcherMacroTest, CanBeComposedUsingValue) {
  EXPECT_THAT(3, IsPositiveOdd());
  EXPECT_THAT(4, Not(IsPositiveOdd()));
  EXPECT_THAT(-1, Not(IsPositiveOdd()));
}

// Tests that a simple MATCHER_P() definition works.

MATCHER_P(IsGreaterThan32And, n, "") { return arg > 32 && arg > n; }

TEST(MatcherPMacroTest, Works) {
  const Matcher<int> m = IsGreaterThan32And(5);
  EXPECT_TRUE(m.Matches(36));
  EXPECT_FALSE(m.Matches(5));

  EXPECT_EQ("is greater than 32 and 5", Describe(m));
  EXPECT_EQ("not (is greater than 32 and 5)", DescribeNegation(m));
  EXPECT_EQ("", Explain(m, 36));
  EXPECT_EQ("", Explain(m, 5));
}

// Tests that the description is calculated correctly from the matcher name.
MATCHER_P(_is_Greater_Than32and_, n, "") { return arg > 32 && arg > n; }

TEST(MatcherPMacroTest, GeneratesCorrectDescription) {
  const Matcher<int> m = _is_Greater_Than32and_(5);

  EXPECT_EQ("is greater than 32 and 5", Describe(m));
  EXPECT_EQ("not (is greater than 32 and 5)", DescribeNegation(m));
  EXPECT_EQ("", Explain(m, 36));
  EXPECT_EQ("", Explain(m, 5));
}

// Tests that a MATCHER_P matcher can be explicitly instantiated with
// a reference parameter type.

class UncopyableFoo {
 public:
  explicit UncopyableFoo(char value) : value_(value) {}
 private:
  UncopyableFoo(const UncopyableFoo&);
  void operator=(const UncopyableFoo&);

  char value_;
};

MATCHER_P(ReferencesUncopyable, variable, "") { return &arg == &variable; }

TEST(MatcherPMacroTest, WorksWhenExplicitlyInstantiatedWithReference) {
  UncopyableFoo foo1('1'), foo2('2');
  const Matcher<const UncopyableFoo&> m =
      ReferencesUncopyable<const UncopyableFoo&>(foo1);

  EXPECT_TRUE(m.Matches(foo1));
  EXPECT_FALSE(m.Matches(foo2));

  // We don't want the address of the parameter printed, as most
  // likely it will just annoy the user.  If the address is
  // interesting, the user should consider passing the parameter by
  // pointer instead.
  EXPECT_EQ("references uncopyable 1-byte object <31>", Describe(m));
}


// Tests that the body of MATCHER_Pn() can reference the parameter
// types.

MATCHER_P3(ParamTypesAreIntLongAndChar, foo, bar, baz, "") {
  StaticAssertTypeEq<int, foo_type>();
  StaticAssertTypeEq<long, bar_type>();  // NOLINT
  StaticAssertTypeEq<char, baz_type>();
  return arg == 0;
}

TEST(MatcherPnMacroTest, CanReferenceParamTypes) {
  EXPECT_THAT(0, ParamTypesAreIntLongAndChar(10, 20L, 'a'));
}

// Tests that a MATCHER_Pn matcher can be explicitly instantiated with
// reference parameter types.

MATCHER_P2(ReferencesAnyOf, variable1, variable2, "") {
  return &arg == &variable1 || &arg == &variable2;
}

TEST(MatcherPnMacroTest, WorksWhenExplicitlyInstantiatedWithReferences) {
  UncopyableFoo foo1('1'), foo2('2'), foo3('3');
  const Matcher<const UncopyableFoo&> m =
      ReferencesAnyOf<const UncopyableFoo&, const UncopyableFoo&>(foo1, foo2);

  EXPECT_TRUE(m.Matches(foo1));
  EXPECT_TRUE(m.Matches(foo2));
  EXPECT_FALSE(m.Matches(foo3));
}

TEST(MatcherPnMacroTest,
     GeneratesCorretDescriptionWhenExplicitlyInstantiatedWithReferences) {
  UncopyableFoo foo1('1'), foo2('2');
  const Matcher<const UncopyableFoo&> m =
      ReferencesAnyOf<const UncopyableFoo&, const UncopyableFoo&>(foo1, foo2);

  // We don't want the addresses of the parameters printed, as most
  // likely they will just annoy the user.  If the addresses are
  // interesting, the user should consider passing the parameters by
  // pointers instead.
  EXPECT_EQ("references any of (1-byte object <31>, 1-byte object <32>)",
            Describe(m));
}

// Tests that a simple MATCHER_P2() definition works.

MATCHER_P2(IsNotInClosedRange, low, hi, "") { return arg < low || arg > hi; }

TEST(MatcherPnMacroTest, Works) {
  const Matcher<const long&> m = IsNotInClosedRange(10, 20);  // NOLINT
  EXPECT_TRUE(m.Matches(36L));
  EXPECT_FALSE(m.Matches(15L));

  EXPECT_EQ("is not in closed range (10, 20)", Describe(m));
  EXPECT_EQ("not (is not in closed range (10, 20))", DescribeNegation(m));
  EXPECT_EQ("", Explain(m, 36L));
  EXPECT_EQ("", Explain(m, 15L));
}

// Tests that MATCHER*() definitions can be overloaded on the number
// of parameters; also tests MATCHER_Pn() where n >= 3.

MATCHER(EqualsSumOf, "") { return arg == 0; }
MATCHER_P(EqualsSumOf, a, "") { return arg == a; }
MATCHER_P2(EqualsSumOf, a, b, "") { return arg == a + b; }
MATCHER_P3(EqualsSumOf, a, b, c, "") { return arg == a + b + c; }
MATCHER_P4(EqualsSumOf, a, b, c, d, "") { return arg == a + b + c + d; }
MATCHER_P5(EqualsSumOf, a, b, c, d, e, "") { return arg == a + b + c + d + e; }
MATCHER_P6(EqualsSumOf, a, b, c, d, e, f, "") {
  return arg == a + b + c + d + e + f;
}
MATCHER_P7(EqualsSumOf, a, b, c, d, e, f, g, "") {
  return arg == a + b + c + d + e + f + g;
}
MATCHER_P8(EqualsSumOf, a, b, c, d, e, f, g, h, "") {
  return arg == a + b + c + d + e + f + g + h;
}
MATCHER_P9(EqualsSumOf, a, b, c, d, e, f, g, h, i, "") {
  return arg == a + b + c + d + e + f + g + h + i;
}
MATCHER_P10(EqualsSumOf, a, b, c, d, e, f, g, h, i, j, "") {
  return arg == a + b + c + d + e + f + g + h + i + j;
}

TEST(MatcherPnMacroTest, CanBeOverloadedOnNumberOfParameters) {
  EXPECT_THAT(0, EqualsSumOf());
  EXPECT_THAT(1, EqualsSumOf(1));
  EXPECT_THAT(12, EqualsSumOf(10, 2));
  EXPECT_THAT(123, EqualsSumOf(100, 20, 3));
  EXPECT_THAT(1234, EqualsSumOf(1000, 200, 30, 4));
  EXPECT_THAT(12345, EqualsSumOf(10000, 2000, 300, 40, 5));
  EXPECT_THAT("abcdef",
              EqualsSumOf(::std::string("a"), 'b', 'c', "d", "e", 'f'));
  EXPECT_THAT("abcdefg",
              EqualsSumOf(::std::string("a"), 'b', 'c', "d", "e", 'f', 'g'));
  EXPECT_THAT("abcdefgh",
              EqualsSumOf(::std::string("a"), 'b', 'c', "d", "e", 'f', 'g',
                          "h"));
  EXPECT_THAT("abcdefghi",
              EqualsSumOf(::std::string("a"), 'b', 'c', "d", "e", 'f', 'g',
                          "h", 'i'));
  EXPECT_THAT("abcdefghij",
              EqualsSumOf(::std::string("a"), 'b', 'c', "d", "e", 'f', 'g',
                          "h", 'i', ::std::string("j")));

  EXPECT_THAT(1, Not(EqualsSumOf()));
  EXPECT_THAT(-1, Not(EqualsSumOf(1)));
  EXPECT_THAT(-12, Not(EqualsSumOf(10, 2)));
  EXPECT_THAT(-123, Not(EqualsSumOf(100, 20, 3)));
  EXPECT_THAT(-1234, Not(EqualsSumOf(1000, 200, 30, 4)));
  EXPECT_THAT(-12345, Not(EqualsSumOf(10000, 2000, 300, 40, 5)));
  EXPECT_THAT("abcdef ",
              Not(EqualsSumOf(::std::string("a"), 'b', 'c', "d", "e", 'f')));
  EXPECT_THAT("abcdefg ",
              Not(EqualsSumOf(::std::string("a"), 'b', 'c', "d", "e", 'f',
                              'g')));
  EXPECT_THAT("abcdefgh ",
              Not(EqualsSumOf(::std::string("a"), 'b', 'c', "d", "e", 'f', 'g',
                              "h")));
  EXPECT_THAT("abcdefghi ",
              Not(EqualsSumOf(::std::string("a"), 'b', 'c', "d", "e", 'f', 'g',
                              "h", 'i')));
  EXPECT_THAT("abcdefghij ",
              Not(EqualsSumOf(::std::string("a"), 'b', 'c', "d", "e", 'f', 'g',
                              "h", 'i', ::std::string("j"))));
}

// Tests that a MATCHER_Pn() definition can be instantiated with any
// compatible parameter types.
TEST(MatcherPnMacroTest, WorksForDifferentParameterTypes) {
  EXPECT_THAT(123, EqualsSumOf(100L, 20, static_cast<char>(3)));
  EXPECT_THAT("abcd", EqualsSumOf(::std::string("a"), "b", 'c', "d"));

  EXPECT_THAT(124, Not(EqualsSumOf(100L, 20, static_cast<char>(3))));
  EXPECT_THAT("abcde", Not(EqualsSumOf(::std::string("a"), "b", 'c', "d")));
}

// Tests that the matcher body can promote the parameter types.

MATCHER_P2(EqConcat, prefix, suffix, "") {
  // The following lines promote the two parameters to desired types.
  std::string prefix_str(prefix);
  char suffix_char = static_cast<char>(suffix);
  return arg == prefix_str + suffix_char;
}

TEST(MatcherPnMacroTest, SimpleTypePromotion) {
  Matcher<std::string> no_promo =
      EqConcat(std::string("foo"), 't');
  Matcher<const std::string&> promo =
      EqConcat("foo", static_cast<int>('t'));
  EXPECT_FALSE(no_promo.Matches("fool"));
  EXPECT_FALSE(promo.Matches("fool"));
  EXPECT_TRUE(no_promo.Matches("foot"));
  EXPECT_TRUE(promo.Matches("foot"));
}

// Verifies the type of a MATCHER*.

TEST(MatcherPnMacroTest, TypesAreCorrect) {
  // EqualsSumOf() must be assignable to a EqualsSumOfMatcher variable.
  EqualsSumOfMatcher a0 = EqualsSumOf();

  // EqualsSumOf(1) must be assignable to a EqualsSumOfMatcherP variable.
  EqualsSumOfMatcherP<int> a1 = EqualsSumOf(1);

  // EqualsSumOf(p1, ..., pk) must be assignable to a EqualsSumOfMatcherPk
  // variable, and so on.
  EqualsSumOfMatcherP2<int, char> a2 = EqualsSumOf(1, '2');
  EqualsSumOfMatcherP3<int, int, char> a3 = EqualsSumOf(1, 2, '3');
  EqualsSumOfMatcherP4<int, int, int, char> a4 = EqualsSumOf(1, 2, 3, '4');
  EqualsSumOfMatcherP5<int, int, int, int, char> a5 =
      EqualsSumOf(1, 2, 3, 4, '5');
  EqualsSumOfMatcherP6<int, int, int, int, int, char> a6 =
      EqualsSumOf(1, 2, 3, 4, 5, '6');
  EqualsSumOfMatcherP7<int, int, int, int, int, int, char> a7 =
      EqualsSumOf(1, 2, 3, 4, 5, 6, '7');
  EqualsSumOfMatcherP8<int, int, int, int, int, int, int, char> a8 =
      EqualsSumOf(1, 2, 3, 4, 5, 6, 7, '8');
  EqualsSumOfMatcherP9<int, int, int, int, int, int, int, int, char> a9 =
      EqualsSumOf(1, 2, 3, 4, 5, 6, 7, 8, '9');
  EqualsSumOfMatcherP10<int, int, int, int, int, int, int, int, int, char> a10 =
      EqualsSumOf(1, 2, 3, 4, 5, 6, 7, 8, 9, '0');

  // Avoid "unused variable" warnings.
  (void)a0;
  (void)a1;
  (void)a2;
  (void)a3;
  (void)a4;
  (void)a5;
  (void)a6;
  (void)a7;
  (void)a8;
  (void)a9;
  (void)a10;
}

// Tests that matcher-typed parameters can be used in Value() inside a
// MATCHER_Pn definition.

// Succeeds if arg matches exactly 2 of the 3 matchers.
MATCHER_P3(TwoOf, m1, m2, m3, "") {
  const int count = static_cast<int>(Value(arg, m1))
      + static_cast<int>(Value(arg, m2)) + static_cast<int>(Value(arg, m3));
  return count == 2;
}

TEST(MatcherPnMacroTest, CanUseMatcherTypedParameterInValue) {
  EXPECT_THAT(42, TwoOf(Gt(0), Lt(50), Eq(10)));
  EXPECT_THAT(0, Not(TwoOf(Gt(-1), Lt(1), Eq(0))));
}

// Tests Contains().

TEST(ContainsTest, ListMatchesWhenElementIsInContainer) {
  list<int> some_list;
  some_list.push_back(3);
  some_list.push_back(1);
  some_list.push_back(2);
  EXPECT_THAT(some_list, Contains(1));
  EXPECT_THAT(some_list, Contains(Gt(2.5)));
  EXPECT_THAT(some_list, Contains(Eq(2.0f)));

  list<string> another_list;
  another_list.push_back("fee");
  another_list.push_back("fie");
  another_list.push_back("foe");
  another_list.push_back("fum");
  EXPECT_THAT(another_list, Contains(string("fee")));
}

TEST(ContainsTest, ListDoesNotMatchWhenElementIsNotInContainer) {
  list<int> some_list;
  some_list.push_back(3);
  some_list.push_back(1);
  EXPECT_THAT(some_list, Not(Contains(4)));
}

TEST(ContainsTest, SetMatchesWhenElementIsInContainer) {
  set<int> some_set;
  some_set.insert(3);
  some_set.insert(1);
  some_set.insert(2);
  EXPECT_THAT(some_set, Contains(Eq(1.0)));
  EXPECT_THAT(some_set, Contains(Eq(3.0f)));
  EXPECT_THAT(some_set, Contains(2));

  set<const char*> another_set;
  another_set.insert("fee");
  another_set.insert("fie");
  another_set.insert("foe");
  another_set.insert("fum");
  EXPECT_THAT(another_set, Contains(Eq(string("fum"))));
}

TEST(ContainsTest, SetDoesNotMatchWhenElementIsNotInContainer) {
  set<int> some_set;
  some_set.insert(3);
  some_set.insert(1);
  EXPECT_THAT(some_set, Not(Contains(4)));

  set<const char*> c_string_set;
  c_string_set.insert("hello");
  EXPECT_THAT(c_string_set, Not(Contains(string("hello").c_str())));
}

TEST(ContainsTest, ExplainsMatchResultCorrectly) {
  const int a[2] = { 1, 2 };
  Matcher<const int (&)[2]> m = Contains(2);
  EXPECT_EQ("whose element #1 matches", Explain(m, a));

  m = Contains(3);
  EXPECT_EQ("", Explain(m, a));

  m = Contains(GreaterThan(0));
  EXPECT_EQ("whose element #0 matches, which is 1 more than 0", Explain(m, a));

  m = Contains(GreaterThan(10));
  EXPECT_EQ("", Explain(m, a));
}

TEST(ContainsTest, DescribesItselfCorrectly) {
  Matcher<vector<int> > m = Contains(1);
  EXPECT_EQ("contains at least one element that is equal to 1", Describe(m));

  Matcher<vector<int> > m2 = Not(m);
  EXPECT_EQ("doesn't contain any element that is equal to 1", Describe(m2));
}

TEST(ContainsTest, MapMatchesWhenElementIsInContainer) {
  map<const char*, int> my_map;
  const char* bar = "a string";
  my_map[bar] = 2;
  EXPECT_THAT(my_map, Contains(pair<const char* const, int>(bar, 2)));

  map<string, int> another_map;
  another_map["fee"] = 1;
  another_map["fie"] = 2;
  another_map["foe"] = 3;
  another_map["fum"] = 4;
  EXPECT_THAT(another_map, Contains(pair<const string, int>(string("fee"), 1)));
  EXPECT_THAT(another_map, Contains(pair<const string, int>("fie", 2)));
}

TEST(ContainsTest, MapDoesNotMatchWhenElementIsNotInContainer) {
  map<int, int> some_map;
  some_map[1] = 11;
  some_map[2] = 22;
  EXPECT_THAT(some_map, Not(Contains(pair<const int, int>(2, 23))));
}

TEST(ContainsTest, ArrayMatchesWhenElementIsInContainer) {
  const char* string_array[] = { "fee", "fie", "foe", "fum" };
  EXPECT_THAT(string_array, Contains(Eq(string("fum"))));
}

TEST(ContainsTest, ArrayDoesNotMatchWhenElementIsNotInContainer) {
  int int_array[] = { 1, 2, 3, 4 };
  EXPECT_THAT(int_array, Not(Contains(5)));
}

TEST(ContainsTest, AcceptsMatcher) {
  const int a[] = { 1, 2, 3 };
  EXPECT_THAT(a, Contains(Gt(2)));
  EXPECT_THAT(a, Not(Contains(Gt(4))));
}

TEST(ContainsTest, WorksForNativeArrayAsTuple) {
  const int a[] = { 1, 2 };
  const int* const pointer = a;
  EXPECT_THAT(make_tuple(pointer, 2), Contains(1));
  EXPECT_THAT(make_tuple(pointer, 2), Not(Contains(Gt(3))));
}

TEST(ContainsTest, WorksForTwoDimensionalNativeArray) {
  int a[][3] = { { 1, 2, 3 }, { 4, 5, 6 } };
  EXPECT_THAT(a, Contains(ElementsAre(4, 5, 6)));
  EXPECT_THAT(a, Contains(Contains(5)));
  EXPECT_THAT(a, Not(Contains(ElementsAre(3, 4, 5))));
  EXPECT_THAT(a, Contains(Not(Contains(5))));
}

TEST(AllOfTest, HugeMatcher) {
  // Verify that using AllOf with many arguments doesn't cause
  // the compiler to exceed template instantiation depth limit.
  EXPECT_THAT(0, testing::AllOf(_, _, _, _, _, _, _, _, _,
                                testing::AllOf(_, _, _, _, _, _, _, _, _, _)));
}

TEST(AnyOfTest, HugeMatcher) {
  // Verify that using AnyOf with many arguments doesn't cause
  // the compiler to exceed template instantiation depth limit.
  EXPECT_THAT(0, testing::AnyOf(_, _, _, _, _, _, _, _, _,
                                testing::AnyOf(_, _, _, _, _, _, _, _, _, _)));
}

namespace adl_test {

// Verifies that the implementation of ::testing::AllOf and ::testing::AnyOf
// don't issue unqualified recursive calls.  If they do, the argument dependent
// name lookup will cause AllOf/AnyOf in the 'adl_test' namespace to be found
// as a candidate and the compilation will break due to an ambiguous overload.

// The matcher must be in the same namespace as AllOf/AnyOf to make argument
// dependent lookup find those.
MATCHER(M, "") { return true; }

template <typename T1, typename T2>
bool AllOf(const T1& t1, const T2& t2) { return true; }

TEST(AllOfTest, DoesNotCallAllOfUnqualified) {
  EXPECT_THAT(42, testing::AllOf(
      M(), M(), M(), M(), M(), M(), M(), M(), M(), M()));
}

template <typename T1, typename T2> bool
AnyOf(const T1& t1, const T2& t2) { return true; }

TEST(AnyOfTest, DoesNotCallAnyOfUnqualified) {
  EXPECT_THAT(42, testing::AnyOf(
      M(), M(), M(), M(), M(), M(), M(), M(), M(), M()));
}

}  // namespace adl_test

#ifdef _MSC_VER
# pragma warning(pop)
#endif

}  // namespace

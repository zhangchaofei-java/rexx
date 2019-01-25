
#ifndef GMOCK_INCLUDE_GMOCK_GMOCK_GENERATED_MATCHERS_H_
#define GMOCK_INCLUDE_GMOCK_GMOCK_GENERATED_MATCHERS_H_

#include <iterator>
#include <sstream>
#include <string>
#include <vector>
#include "gmock/gmock-matchers.h"

namespace testing {
namespace internal {

// The type of the i-th (0-based) field of Tuple.
#define GMOCK_FIELD_TYPE_(Tuple, i) \
    typename ::std::tr1::tuple_element<i, Tuple>::type

// TupleFields<Tuple, k0, ..., kn> is for selecting fields from a
// tuple of type Tuple.  It has two members:
//
//   type: a tuple type whose i-th field is the ki-th field of Tuple.
//   GetSelectedFields(t): returns fields k0, ..., and kn of t as a tuple.
//
// For example, in class TupleFields<tuple<bool, char, int>, 2, 0>, we have:
//
//   type is tuple<int, bool>, and
//   GetSelectedFields(make_tuple(true, 'a', 42)) is (42, true).

template <class Tuple, int k0 = -1, int k1 = -1, int k2 = -1, int k3 = -1,
    int k4 = -1, int k5 = -1, int k6 = -1, int k7 = -1, int k8 = -1,
    int k9 = -1>
class TupleFields;

// This generic version is used when there are 10 selectors.
template <class Tuple, int k0, int k1, int k2, int k3, int k4, int k5, int k6,
    int k7, int k8, int k9>
class TupleFields {
 public:
  typedef ::std::tr1::tuple<GMOCK_FIELD_TYPE_(Tuple, k0),
      GMOCK_FIELD_TYPE_(Tuple, k1), GMOCK_FIELD_TYPE_(Tuple, k2),
      GMOCK_FIELD_TYPE_(Tuple, k3), GMOCK_FIELD_TYPE_(Tuple, k4),
      GMOCK_FIELD_TYPE_(Tuple, k5), GMOCK_FIELD_TYPE_(Tuple, k6),
      GMOCK_FIELD_TYPE_(Tuple, k7), GMOCK_FIELD_TYPE_(Tuple, k8),
      GMOCK_FIELD_TYPE_(Tuple, k9)> type;
  static type GetSelectedFields(const Tuple& t) {
    using ::std::tr1::get;
    return type(get<k0>(t), get<k1>(t), get<k2>(t), get<k3>(t), get<k4>(t),
        get<k5>(t), get<k6>(t), get<k7>(t), get<k8>(t), get<k9>(t));
  }
};

// The following specialization is used for 0 ~ 9 selectors.

template <class Tuple>
class TupleFields<Tuple, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1> {
 public:
  typedef ::std::tr1::tuple<> type;
  static type GetSelectedFields(const Tuple& /* t */) {
    using ::std::tr1::get;
    return type();
  }
};

template <class Tuple, int k0>
class TupleFields<Tuple, k0, -1, -1, -1, -1, -1, -1, -1, -1, -1> {
 public:
  typedef ::std::tr1::tuple<GMOCK_FIELD_TYPE_(Tuple, k0)> type;
  static type GetSelectedFields(const Tuple& t) {
    using ::std::tr1::get;
    return type(get<k0>(t));
  }
};

template <class Tuple, int k0, int k1>
class TupleFields<Tuple, k0, k1, -1, -1, -1, -1, -1, -1, -1, -1> {
 public:
  typedef ::std::tr1::tuple<GMOCK_FIELD_TYPE_(Tuple, k0),
      GMOCK_FIELD_TYPE_(Tuple, k1)> type;
  static type GetSelectedFields(const Tuple& t) {
    using ::std::tr1::get;
    return type(get<k0>(t), get<k1>(t));
  }
};

template <class Tuple, int k0, int k1, int k2>
class TupleFields<Tuple, k0, k1, k2, -1, -1, -1, -1, -1, -1, -1> {
 public:
  typedef ::std::tr1::tuple<GMOCK_FIELD_TYPE_(Tuple, k0),
      GMOCK_FIELD_TYPE_(Tuple, k1), GMOCK_FIELD_TYPE_(Tuple, k2)> type;
  static type GetSelectedFields(const Tuple& t) {
    using ::std::tr1::get;
    return type(get<k0>(t), get<k1>(t), get<k2>(t));
  }
};

template <class Tuple, int k0, int k1, int k2, int k3>
class TupleFields<Tuple, k0, k1, k2, k3, -1, -1, -1, -1, -1, -1> {
 public:
  typedef ::std::tr1::tuple<GMOCK_FIELD_TYPE_(Tuple, k0),
      GMOCK_FIELD_TYPE_(Tuple, k1), GMOCK_FIELD_TYPE_(Tuple, k2),
      GMOCK_FIELD_TYPE_(Tuple, k3)> type;
  static type GetSelectedFields(const Tuple& t) {
    using ::std::tr1::get;
    return type(get<k0>(t), get<k1>(t), get<k2>(t), get<k3>(t));
  }
};

template <class Tuple, int k0, int k1, int k2, int k3, int k4>
class TupleFields<Tuple, k0, k1, k2, k3, k4, -1, -1, -1, -1, -1> {
 public:
  typedef ::std::tr1::tuple<GMOCK_FIELD_TYPE_(Tuple, k0),
      GMOCK_FIELD_TYPE_(Tuple, k1), GMOCK_FIELD_TYPE_(Tuple, k2),
      GMOCK_FIELD_TYPE_(Tuple, k3), GMOCK_FIELD_TYPE_(Tuple, k4)> type;
  static type GetSelectedFields(const Tuple& t) {
    using ::std::tr1::get;
    return type(get<k0>(t), get<k1>(t), get<k2>(t), get<k3>(t), get<k4>(t));
  }
};

template <class Tuple, int k0, int k1, int k2, int k3, int k4, int k5>
class TupleFields<Tuple, k0, k1, k2, k3, k4, k5, -1, -1, -1, -1> {
 public:
  typedef ::std::tr1::tuple<GMOCK_FIELD_TYPE_(Tuple, k0),
      GMOCK_FIELD_TYPE_(Tuple, k1), GMOCK_FIELD_TYPE_(Tuple, k2),
      GMOCK_FIELD_TYPE_(Tuple, k3), GMOCK_FIELD_TYPE_(Tuple, k4),
      GMOCK_FIELD_TYPE_(Tuple, k5)> type;
  static type GetSelectedFields(const Tuple& t) {
    using ::std::tr1::get;
    return type(get<k0>(t), get<k1>(t), get<k2>(t), get<k3>(t), get<k4>(t),
        get<k5>(t));
  }
};

template <class Tuple, int k0, int k1, int k2, int k3, int k4, int k5, int k6>
class TupleFields<Tuple, k0, k1, k2, k3, k4, k5, k6, -1, -1, -1> {
 public:
  typedef ::std::tr1::tuple<GMOCK_FIELD_TYPE_(Tuple, k0),
      GMOCK_FIELD_TYPE_(Tuple, k1), GMOCK_FIELD_TYPE_(Tuple, k2),
      GMOCK_FIELD_TYPE_(Tuple, k3), GMOCK_FIELD_TYPE_(Tuple, k4),
      GMOCK_FIELD_TYPE_(Tuple, k5), GMOCK_FIELD_TYPE_(Tuple, k6)> type;
  static type GetSelectedFields(const Tuple& t) {
    using ::std::tr1::get;
    return type(get<k0>(t), get<k1>(t), get<k2>(t), get<k3>(t), get<k4>(t),
        get<k5>(t), get<k6>(t));
  }
};

template <class Tuple, int k0, int k1, int k2, int k3, int k4, int k5, int k6,
    int k7>
class TupleFields<Tuple, k0, k1, k2, k3, k4, k5, k6, k7, -1, -1> {
 public:
  typedef ::std::tr1::tuple<GMOCK_FIELD_TYPE_(Tuple, k0),
      GMOCK_FIELD_TYPE_(Tuple, k1), GMOCK_FIELD_TYPE_(Tuple, k2),
      GMOCK_FIELD_TYPE_(Tuple, k3), GMOCK_FIELD_TYPE_(Tuple, k4),
      GMOCK_FIELD_TYPE_(Tuple, k5), GMOCK_FIELD_TYPE_(Tuple, k6),
      GMOCK_FIELD_TYPE_(Tuple, k7)> type;
  static type GetSelectedFields(const Tuple& t) {
    using ::std::tr1::get;
    return type(get<k0>(t), get<k1>(t), get<k2>(t), get<k3>(t), get<k4>(t),
        get<k5>(t), get<k6>(t), get<k7>(t));
  }
};

template <class Tuple, int k0, int k1, int k2, int k3, int k4, int k5, int k6,
    int k7, int k8>
class TupleFields<Tuple, k0, k1, k2, k3, k4, k5, k6, k7, k8, -1> {
 public:
  typedef ::std::tr1::tuple<GMOCK_FIELD_TYPE_(Tuple, k0),
      GMOCK_FIELD_TYPE_(Tuple, k1), GMOCK_FIELD_TYPE_(Tuple, k2),
      GMOCK_FIELD_TYPE_(Tuple, k3), GMOCK_FIELD_TYPE_(Tuple, k4),
      GMOCK_FIELD_TYPE_(Tuple, k5), GMOCK_FIELD_TYPE_(Tuple, k6),
      GMOCK_FIELD_TYPE_(Tuple, k7), GMOCK_FIELD_TYPE_(Tuple, k8)> type;
  static type GetSelectedFields(const Tuple& t) {
    using ::std::tr1::get;
    return type(get<k0>(t), get<k1>(t), get<k2>(t), get<k3>(t), get<k4>(t),
        get<k5>(t), get<k6>(t), get<k7>(t), get<k8>(t));
  }
};

#undef GMOCK_FIELD_TYPE_

// Implements the Args() matcher.
template <class ArgsTuple, int k0 = -1, int k1 = -1, int k2 = -1, int k3 = -1,
    int k4 = -1, int k5 = -1, int k6 = -1, int k7 = -1, int k8 = -1,
    int k9 = -1>
class ArgsMatcherImpl : public MatcherInterface<ArgsTuple> {
 public:
  // ArgsTuple may have top-level const or reference modifiers.
  typedef GTEST_REMOVE_REFERENCE_AND_CONST_(ArgsTuple) RawArgsTuple;
  typedef typename internal::TupleFields<RawArgsTuple, k0, k1, k2, k3, k4, k5,
      k6, k7, k8, k9>::type SelectedArgs;
  typedef Matcher<const SelectedArgs&> MonomorphicInnerMatcher;

  template <typename InnerMatcher>
  explicit ArgsMatcherImpl(const InnerMatcher& inner_matcher)
      : inner_matcher_(SafeMatcherCast<const SelectedArgs&>(inner_matcher)) {}

  virtual bool MatchAndExplain(ArgsTuple args,
                               MatchResultListener* listener) const {
    const SelectedArgs& selected_args = GetSelectedArgs(args);
    if (!listener->IsInterested())
      return inner_matcher_.Matches(selected_args);

    PrintIndices(listener->stream());
    *listener << "are " << PrintToString(selected_args);

    StringMatchResultListener inner_listener;
    const bool match = inner_matcher_.MatchAndExplain(selected_args,
                                                      &inner_listener);
    PrintIfNotEmpty(inner_listener.str(), listener->stream());
    return match;
  }

  virtual void DescribeTo(::std::ostream* os) const {
    *os << "are a tuple ";
    PrintIndices(os);
    inner_matcher_.DescribeTo(os);
  }

  virtual void DescribeNegationTo(::std::ostream* os) const {
    *os << "are a tuple ";
    PrintIndices(os);
    inner_matcher_.DescribeNegationTo(os);
  }

 private:
  static SelectedArgs GetSelectedArgs(ArgsTuple args) {
    return TupleFields<RawArgsTuple, k0, k1, k2, k3, k4, k5, k6, k7, k8,
        k9>::GetSelectedFields(args);
  }

  // Prints the indices of the selected fields.
  static void PrintIndices(::std::ostream* os) {
    *os << "whose fields (";
    const int indices[10] = { k0, k1, k2, k3, k4, k5, k6, k7, k8, k9 };
    for (int i = 0; i < 10; i++) {
      if (indices[i] < 0)
        break;

      if (i >= 1)
        *os << ", ";

      *os << "#" << indices[i];
    }
    *os << ") ";
  }

  const MonomorphicInnerMatcher inner_matcher_;

  GTEST_DISALLOW_ASSIGN_(ArgsMatcherImpl);
};

template <class InnerMatcher, int k0 = -1, int k1 = -1, int k2 = -1,
    int k3 = -1, int k4 = -1, int k5 = -1, int k6 = -1, int k7 = -1,
    int k8 = -1, int k9 = -1>
class ArgsMatcher {
 public:
  explicit ArgsMatcher(const InnerMatcher& inner_matcher)
      : inner_matcher_(inner_matcher) {}

  template <typename ArgsTuple>
  operator Matcher<ArgsTuple>() const {
    return MakeMatcher(new ArgsMatcherImpl<ArgsTuple, k0, k1, k2, k3, k4, k5,
        k6, k7, k8, k9>(inner_matcher_));
  }

 private:
  const InnerMatcher inner_matcher_;

  GTEST_DISALLOW_ASSIGN_(ArgsMatcher);
};

// A set of metafunctions for computing the result type of AllOf.
// AllOf(m1, ..., mN) returns
// AllOfResultN<decltype(m1), ..., decltype(mN)>::type.

// Although AllOf isn't defined for one argument, AllOfResult1 is defined
// to simplify the implementation.
template <typename M1>
struct AllOfResult1 {
  typedef M1 type;
};

template <typename M1, typename M2>
struct AllOfResult2 {
  typedef BothOfMatcher<
      typename AllOfResult1<M1>::type,
      typename AllOfResult1<M2>::type
  > type;
};

template <typename M1, typename M2, typename M3>
struct AllOfResult3 {
  typedef BothOfMatcher<
      typename AllOfResult1<M1>::type,
      typename AllOfResult2<M2, M3>::type
  > type;
};

template <typename M1, typename M2, typename M3, typename M4>
struct AllOfResult4 {
  typedef BothOfMatcher<
      typename AllOfResult2<M1, M2>::type,
      typename AllOfResult2<M3, M4>::type
  > type;
};

template <typename M1, typename M2, typename M3, typename M4, typename M5>
struct AllOfResult5 {
  typedef BothOfMatcher<
      typename AllOfResult2<M1, M2>::type,
      typename AllOfResult3<M3, M4, M5>::type
  > type;
};

template <typename M1, typename M2, typename M3, typename M4, typename M5,
    typename M6>
struct AllOfResult6 {
  typedef BothOfMatcher<
      typename AllOfResult3<M1, M2, M3>::type,
      typename AllOfResult3<M4, M5, M6>::type
  > type;
};

template <typename M1, typename M2, typename M3, typename M4, typename M5,
    typename M6, typename M7>
struct AllOfResult7 {
  typedef BothOfMatcher<
      typename AllOfResult3<M1, M2, M3>::type,
      typename AllOfResult4<M4, M5, M6, M7>::type
  > type;
};

template <typename M1, typename M2, typename M3, typename M4, typename M5,
    typename M6, typename M7, typename M8>
struct AllOfResult8 {
  typedef BothOfMatcher<
      typename AllOfResult4<M1, M2, M3, M4>::type,
      typename AllOfResult4<M5, M6, M7, M8>::type
  > type;
};

template <typename M1, typename M2, typename M3, typename M4, typename M5,
    typename M6, typename M7, typename M8, typename M9>
struct AllOfResult9 {
  typedef BothOfMatcher<
      typename AllOfResult4<M1, M2, M3, M4>::type,
      typename AllOfResult5<M5, M6, M7, M8, M9>::type
  > type;
};

template <typename M1, typename M2, typename M3, typename M4, typename M5,
    typename M6, typename M7, typename M8, typename M9, typename M10>
struct AllOfResult10 {
  typedef BothOfMatcher<
      typename AllOfResult5<M1, M2, M3, M4, M5>::type,
      typename AllOfResult5<M6, M7, M8, M9, M10>::type
  > type;
};

// A set of metafunctions for computing the result type of AnyOf.
// AnyOf(m1, ..., mN) returns
// AnyOfResultN<decltype(m1), ..., decltype(mN)>::type.

// Although AnyOf isn't defined for one argument, AnyOfResult1 is defined
// to simplify the implementation.
template <typename M1>
struct AnyOfResult1 {
  typedef M1 type;
};

template <typename M1, typename M2>
struct AnyOfResult2 {
  typedef EitherOfMatcher<
      typename AnyOfResult1<M1>::type,
      typename AnyOfResult1<M2>::type
  > type;
};

template <typename M1, typename M2, typename M3>
struct AnyOfResult3 {
  typedef EitherOfMatcher<
      typename AnyOfResult1<M1>::type,
      typename AnyOfResult2<M2, M3>::type
  > type;
};

template <typename M1, typename M2, typename M3, typename M4>
struct AnyOfResult4 {
  typedef EitherOfMatcher<
      typename AnyOfResult2<M1, M2>::type,
      typename AnyOfResult2<M3, M4>::type
  > type;
};

template <typename M1, typename M2, typename M3, typename M4, typename M5>
struct AnyOfResult5 {
  typedef EitherOfMatcher<
      typename AnyOfResult2<M1, M2>::type,
      typename AnyOfResult3<M3, M4, M5>::type
  > type;
};

template <typename M1, typename M2, typename M3, typename M4, typename M5,
    typename M6>
struct AnyOfResult6 {
  typedef EitherOfMatcher<
      typename AnyOfResult3<M1, M2, M3>::type,
      typename AnyOfResult3<M4, M5, M6>::type
  > type;
};

template <typename M1, typename M2, typename M3, typename M4, typename M5,
    typename M6, typename M7>
struct AnyOfResult7 {
  typedef EitherOfMatcher<
      typename AnyOfResult3<M1, M2, M3>::type,
      typename AnyOfResult4<M4, M5, M6, M7>::type
  > type;
};

template <typename M1, typename M2, typename M3, typename M4, typename M5,
    typename M6, typename M7, typename M8>
struct AnyOfResult8 {
  typedef EitherOfMatcher<
      typename AnyOfResult4<M1, M2, M3, M4>::type,
      typename AnyOfResult4<M5, M6, M7, M8>::type
  > type;
};

template <typename M1, typename M2, typename M3, typename M4, typename M5,
    typename M6, typename M7, typename M8, typename M9>
struct AnyOfResult9 {
  typedef EitherOfMatcher<
      typename AnyOfResult4<M1, M2, M3, M4>::type,
      typename AnyOfResult5<M5, M6, M7, M8, M9>::type
  > type;
};

template <typename M1, typename M2, typename M3, typename M4, typename M5,
    typename M6, typename M7, typename M8, typename M9, typename M10>
struct AnyOfResult10 {
  typedef EitherOfMatcher<
      typename AnyOfResult5<M1, M2, M3, M4, M5>::type,
      typename AnyOfResult5<M6, M7, M8, M9, M10>::type
  > type;
};

}  // namespace internal

// Args<N1, N2, ..., Nk>(a_matcher) matches a tuple if the selected
// fields of it matches a_matcher.  C++ doesn't support default
// arguments for function templates, so we have to overload it.
template <typename InnerMatcher>
inline internal::ArgsMatcher<InnerMatcher>
Args(const InnerMatcher& matcher) {
  return internal::ArgsMatcher<InnerMatcher>(matcher);
}

template <int k1, typename InnerMatcher>
inline internal::ArgsMatcher<InnerMatcher, k1>
Args(const InnerMatcher& matcher) {
  return internal::ArgsMatcher<InnerMatcher, k1>(matcher);
}

template <int k1, int k2, typename InnerMatcher>
inline internal::ArgsMatcher<InnerMatcher, k1, k2>
Args(const InnerMatcher& matcher) {
  return internal::ArgsMatcher<InnerMatcher, k1, k2>(matcher);
}

template <int k1, int k2, int k3, typename InnerMatcher>
inline internal::ArgsMatcher<InnerMatcher, k1, k2, k3>
Args(const InnerMatcher& matcher) {
  return internal::ArgsMatcher<InnerMatcher, k1, k2, k3>(matcher);
}

template <int k1, int k2, int k3, int k4, typename InnerMatcher>
inline internal::ArgsMatcher<InnerMatcher, k1, k2, k3, k4>
Args(const InnerMatcher& matcher) {
  return internal::ArgsMatcher<InnerMatcher, k1, k2, k3, k4>(matcher);
}

template <int k1, int k2, int k3, int k4, int k5, typename InnerMatcher>
inline internal::ArgsMatcher<InnerMatcher, k1, k2, k3, k4, k5>
Args(const InnerMatcher& matcher) {
  return internal::ArgsMatcher<InnerMatcher, k1, k2, k3, k4, k5>(matcher);
}

template <int k1, int k2, int k3, int k4, int k5, int k6, typename InnerMatcher>
inline internal::ArgsMatcher<InnerMatcher, k1, k2, k3, k4, k5, k6>
Args(const InnerMatcher& matcher) {
  return internal::ArgsMatcher<InnerMatcher, k1, k2, k3, k4, k5, k6>(matcher);
}

template <int k1, int k2, int k3, int k4, int k5, int k6, int k7,
    typename InnerMatcher>
inline internal::ArgsMatcher<InnerMatcher, k1, k2, k3, k4, k5, k6, k7>
Args(const InnerMatcher& matcher) {
  return internal::ArgsMatcher<InnerMatcher, k1, k2, k3, k4, k5, k6,
      k7>(matcher);
}

template <int k1, int k2, int k3, int k4, int k5, int k6, int k7, int k8,
    typename InnerMatcher>
inline internal::ArgsMatcher<InnerMatcher, k1, k2, k3, k4, k5, k6, k7, k8>
Args(const InnerMatcher& matcher) {
  return internal::ArgsMatcher<InnerMatcher, k1, k2, k3, k4, k5, k6, k7,
      k8>(matcher);
}

template <int k1, int k2, int k3, int k4, int k5, int k6, int k7, int k8,
    int k9, typename InnerMatcher>
inline internal::ArgsMatcher<InnerMatcher, k1, k2, k3, k4, k5, k6, k7, k8, k9>
Args(const InnerMatcher& matcher) {
  return internal::ArgsMatcher<InnerMatcher, k1, k2, k3, k4, k5, k6, k7, k8,
      k9>(matcher);
}

template <int k1, int k2, int k3, int k4, int k5, int k6, int k7, int k8,
    int k9, int k10, typename InnerMatcher>
inline internal::ArgsMatcher<InnerMatcher, k1, k2, k3, k4, k5, k6, k7, k8, k9,
    k10>
Args(const InnerMatcher& matcher) {
  return internal::ArgsMatcher<InnerMatcher, k1, k2, k3, k4, k5, k6, k7, k8,
      k9, k10>(matcher);
}

// ElementsAre(e_1, e_2, ... e_n) matches an STL-style container with
// n elements, where the i-th element in the container must
// match the i-th argument in the list.  Each argument of
// ElementsAre() can be either a value or a matcher.  We support up to
// 10 arguments.
//
// The use of DecayArray in the implementation allows ElementsAre()
// to accept string literals, whose type is const char[N], but we
// want to treat them as const char*.
//
// NOTE: Since ElementsAre() cares about the order of the elements, it
// must not be used with containers whose elements's order is
// undefined (e.g. hash_map).

inline internal::ElementsAreMatcher<
    std::tr1::tuple<> >
ElementsAre() {
  typedef std::tr1::tuple<> Args;
  return internal::ElementsAreMatcher<Args>(Args());
}

template <typename T1>
inline internal::ElementsAreMatcher<
    std::tr1::tuple<
        typename internal::DecayArray<T1>::type> >
ElementsAre(const T1& e1) {
  typedef std::tr1::tuple<
      typename internal::DecayArray<T1>::type> Args;
  return internal::ElementsAreMatcher<Args>(Args(e1));
}

template <typename T1, typename T2>
inline internal::ElementsAreMatcher<
    std::tr1::tuple<
        typename internal::DecayArray<T1>::type,
        typename internal::DecayArray<T2>::type> >
ElementsAre(const T1& e1, const T2& e2) {
  typedef std::tr1::tuple<
      typename internal::DecayArray<T1>::type,
      typename internal::DecayArray<T2>::type> Args;
  return internal::ElementsAreMatcher<Args>(Args(e1, e2));
}

template <typename T1, typename T2, typename T3>
inline internal::ElementsAreMatcher<
    std::tr1::tuple<
        typename internal::DecayArray<T1>::type,
        typename internal::DecayArray<T2>::type,
        typename internal::DecayArray<T3>::type> >
ElementsAre(const T1& e1, const T2& e2, const T3& e3) {
  typedef std::tr1::tuple<
      typename internal::DecayArray<T1>::type,
      typename internal::DecayArray<T2>::type,
      typename internal::DecayArray<T3>::type> Args;
  return internal::ElementsAreMatcher<Args>(Args(e1, e2, e3));
}

template <typename T1, typename T2, typename T3, typename T4>
inline internal::ElementsAreMatcher<
    std::tr1::tuple<
        typename internal::DecayArray<T1>::type,
        typename internal::DecayArray<T2>::type,
        typename internal::DecayArray<T3>::type,
        typename internal::DecayArray<T4>::type> >
ElementsAre(const T1& e1, const T2& e2, const T3& e3, const T4& e4) {
  typedef std::tr1::tuple<
      typename internal::DecayArray<T1>::type,
      typename internal::DecayArray<T2>::type,
      typename internal::DecayArray<T3>::type,
      typename internal::DecayArray<T4>::type> Args;
  return internal::ElementsAreMatcher<Args>(Args(e1, e2, e3, e4));
}

template <typename T1, typename T2, typename T3, typename T4, typename T5>
inline internal::ElementsAreMatcher<
    std::tr1::tuple<
        typename internal::DecayArray<T1>::type,
        typename internal::DecayArray<T2>::type,
        typename internal::DecayArray<T3>::type,
        typename internal::DecayArray<T4>::type,
        typename internal::DecayArray<T5>::type> >
ElementsAre(const T1& e1, const T2& e2, const T3& e3, const T4& e4,
    const T5& e5) {
  typedef std::tr1::tuple<
      typename internal::DecayArray<T1>::type,
      typename internal::DecayArray<T2>::type,
      typename internal::DecayArray<T3>::type,
      typename internal::DecayArray<T4>::type,
      typename internal::DecayArray<T5>::type> Args;
  return internal::ElementsAreMatcher<Args>(Args(e1, e2, e3, e4, e5));
}

template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6>
inline internal::ElementsAreMatcher<
    std::tr1::tuple<
        typename internal::DecayArray<T1>::type,
        typename internal::DecayArray<T2>::type,
        typename internal::DecayArray<T3>::type,
        typename internal::DecayArray<T4>::type,
        typename internal::DecayArray<T5>::type,
        typename internal::DecayArray<T6>::type> >
ElementsAre(const T1& e1, const T2& e2, const T3& e3, const T4& e4,
    const T5& e5, const T6& e6) {
  typedef std::tr1::tuple<
      typename internal::DecayArray<T1>::type,
      typename internal::DecayArray<T2>::type,
      typename internal::DecayArray<T3>::type,
      typename internal::DecayArray<T4>::type,
      typename internal::DecayArray<T5>::type,
      typename internal::DecayArray<T6>::type> Args;
  return internal::ElementsAreMatcher<Args>(Args(e1, e2, e3, e4, e5, e6));
}

template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7>
inline internal::ElementsAreMatcher<
    std::tr1::tuple<
        typename internal::DecayArray<T1>::type,
        typename internal::DecayArray<T2>::type,
        typename internal::DecayArray<T3>::type,
        typename internal::DecayArray<T4>::type,
        typename internal::DecayArray<T5>::type,
        typename internal::DecayArray<T6>::type,
        typename internal::DecayArray<T7>::type> >
ElementsAre(const T1& e1, const T2& e2, const T3& e3, const T4& e4,
    const T5& e5, const T6& e6, const T7& e7) {
  typedef std::tr1::tuple<
      typename internal::DecayArray<T1>::type,
      typename internal::DecayArray<T2>::type,
      typename internal::DecayArray<T3>::type,
      typename internal::DecayArray<T4>::type,
      typename internal::DecayArray<T5>::type,
      typename internal::DecayArray<T6>::type,
      typename internal::DecayArray<T7>::type> Args;
  return internal::ElementsAreMatcher<Args>(Args(e1, e2, e3, e4, e5, e6, e7));
}

template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8>
inline internal::ElementsAreMatcher<
    std::tr1::tuple<
        typename internal::DecayArray<T1>::type,
        typename internal::DecayArray<T2>::type,
        typename internal::DecayArray<T3>::type,
        typename internal::DecayArray<T4>::type,
        typename internal::DecayArray<T5>::type,
        typename internal::DecayArray<T6>::type,
        typename internal::DecayArray<T7>::type,
        typename internal::DecayArray<T8>::type> >
ElementsAre(const T1& e1, const T2& e2, const T3& e3, const T4& e4,
    const T5& e5, const T6& e6, const T7& e7, const T8& e8) {
  typedef std::tr1::tuple<
      typename internal::DecayArray<T1>::type,
      typename internal::DecayArray<T2>::type,
      typename internal::DecayArray<T3>::type,
      typename internal::DecayArray<T4>::type,
      typename internal::DecayArray<T5>::type,
      typename internal::DecayArray<T6>::type,
      typename internal::DecayArray<T7>::type,
      typename internal::DecayArray<T8>::type> Args;
  return internal::ElementsAreMatcher<Args>(Args(e1, e2, e3, e4, e5, e6, e7,
      e8));
}

template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9>
inline internal::ElementsAreMatcher<
    std::tr1::tuple<
        typename internal::DecayArray<T1>::type,
        typename internal::DecayArray<T2>::type,
        typename internal::DecayArray<T3>::type,
        typename internal::DecayArray<T4>::type,
        typename internal::DecayArray<T5>::type,
        typename internal::DecayArray<T6>::type,
        typename internal::DecayArray<T7>::type,
        typename internal::DecayArray<T8>::type,
        typename internal::DecayArray<T9>::type> >
ElementsAre(const T1& e1, const T2& e2, const T3& e3, const T4& e4,
    const T5& e5, const T6& e6, const T7& e7, const T8& e8, const T9& e9) {
  typedef std::tr1::tuple<
      typename internal::DecayArray<T1>::type,
      typename internal::DecayArray<T2>::type,
      typename internal::DecayArray<T3>::type,
      typename internal::DecayArray<T4>::type,
      typename internal::DecayArray<T5>::type,
      typename internal::DecayArray<T6>::type,
      typename internal::DecayArray<T7>::type,
      typename internal::DecayArray<T8>::type,
      typename internal::DecayArray<T9>::type> Args;
  return internal::ElementsAreMatcher<Args>(Args(e1, e2, e3, e4, e5, e6, e7,
      e8, e9));
}

template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10>
inline internal::ElementsAreMatcher<
    std::tr1::tuple<
        typename internal::DecayArray<T1>::type,
        typename internal::DecayArray<T2>::type,
        typename internal::DecayArray<T3>::type,
        typename internal::DecayArray<T4>::type,
        typename internal::DecayArray<T5>::type,
        typename internal::DecayArray<T6>::type,
        typename internal::DecayArray<T7>::type,
        typename internal::DecayArray<T8>::type,
        typename internal::DecayArray<T9>::type,
        typename internal::DecayArray<T10>::type> >
ElementsAre(const T1& e1, const T2& e2, const T3& e3, const T4& e4,
    const T5& e5, const T6& e6, const T7& e7, const T8& e8, const T9& e9,
    const T10& e10) {
  typedef std::tr1::tuple<
      typename internal::DecayArray<T1>::type,
      typename internal::DecayArray<T2>::type,
      typename internal::DecayArray<T3>::type,
      typename internal::DecayArray<T4>::type,
      typename internal::DecayArray<T5>::type,
      typename internal::DecayArray<T6>::type,
      typename internal::DecayArray<T7>::type,
      typename internal::DecayArray<T8>::type,
      typename internal::DecayArray<T9>::type,
      typename internal::DecayArray<T10>::type> Args;
  return internal::ElementsAreMatcher<Args>(Args(e1, e2, e3, e4, e5, e6, e7,
      e8, e9, e10));
}

// UnorderedElementsAre(e_1, e_2, ..., e_n) is an ElementsAre extension
// that matches n elements in any order.  We support up to n=10 arguments.

inline internal::UnorderedElementsAreMatcher<
    std::tr1::tuple<> >
UnorderedElementsAre() {
  typedef std::tr1::tuple<> Args;
  return internal::UnorderedElementsAreMatcher<Args>(Args());
}

template <typename T1>
inline internal::UnorderedElementsAreMatcher<
    std::tr1::tuple<
        typename internal::DecayArray<T1>::type> >
UnorderedElementsAre(const T1& e1) {
  typedef std::tr1::tuple<
      typename internal::DecayArray<T1>::type> Args;
  return internal::UnorderedElementsAreMatcher<Args>(Args(e1));
}

template <typename T1, typename T2>
inline internal::UnorderedElementsAreMatcher<
    std::tr1::tuple<
        typename internal::DecayArray<T1>::type,
        typename internal::DecayArray<T2>::type> >
UnorderedElementsAre(const T1& e1, const T2& e2) {
  typedef std::tr1::tuple<
      typename internal::DecayArray<T1>::type,
      typename internal::DecayArray<T2>::type> Args;
  return internal::UnorderedElementsAreMatcher<Args>(Args(e1, e2));
}

template <typename T1, typename T2, typename T3>
inline internal::UnorderedElementsAreMatcher<
    std::tr1::tuple<
        typename internal::DecayArray<T1>::type,
        typename internal::DecayArray<T2>::type,
        typename internal::DecayArray<T3>::type> >
UnorderedElementsAre(const T1& e1, const T2& e2, const T3& e3) {
  typedef std::tr1::tuple<
      typename internal::DecayArray<T1>::type,
      typename internal::DecayArray<T2>::type,
      typename internal::DecayArray<T3>::type> Args;
  return internal::UnorderedElementsAreMatcher<Args>(Args(e1, e2, e3));
}

template <typename T1, typename T2, typename T3, typename T4>
inline internal::UnorderedElementsAreMatcher<
    std::tr1::tuple<
        typename internal::DecayArray<T1>::type,
        typename internal::DecayArray<T2>::type,
        typename internal::DecayArray<T3>::type,
        typename internal::DecayArray<T4>::type> >
UnorderedElementsAre(const T1& e1, const T2& e2, const T3& e3, const T4& e4) {
  typedef std::tr1::tuple<
      typename internal::DecayArray<T1>::type,
      typename internal::DecayArray<T2>::type,
      typename internal::DecayArray<T3>::type,
      typename internal::DecayArray<T4>::type> Args;
  return internal::UnorderedElementsAreMatcher<Args>(Args(e1, e2, e3, e4));
}

template <typename T1, typename T2, typename T3, typename T4, typename T5>
inline internal::UnorderedElementsAreMatcher<
    std::tr1::tuple<
        typename internal::DecayArray<T1>::type,
        typename internal::DecayArray<T2>::type,
        typename internal::DecayArray<T3>::type,
        typename internal::DecayArray<T4>::type,
        typename internal::DecayArray<T5>::type> >
UnorderedElementsAre(const T1& e1, const T2& e2, const T3& e3, const T4& e4,
    const T5& e5) {
  typedef std::tr1::tuple<
      typename internal::DecayArray<T1>::type,
      typename internal::DecayArray<T2>::type,
      typename internal::DecayArray<T3>::type,
      typename internal::DecayArray<T4>::type,
      typename internal::DecayArray<T5>::type> Args;
  return internal::UnorderedElementsAreMatcher<Args>(Args(e1, e2, e3, e4, e5));
}

template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6>
inline internal::UnorderedElementsAreMatcher<
    std::tr1::tuple<
        typename internal::DecayArray<T1>::type,
        typename internal::DecayArray<T2>::type,
        typename internal::DecayArray<T3>::type,
        typename internal::DecayArray<T4>::type,
        typename internal::DecayArray<T5>::type,
        typename internal::DecayArray<T6>::type> >
UnorderedElementsAre(const T1& e1, const T2& e2, const T3& e3, const T4& e4,
    const T5& e5, const T6& e6) {
  typedef std::tr1::tuple<
      typename internal::DecayArray<T1>::type,
      typename internal::DecayArray<T2>::type,
      typename internal::DecayArray<T3>::type,
      typename internal::DecayArray<T4>::type,
      typename internal::DecayArray<T5>::type,
      typename internal::DecayArray<T6>::type> Args;
  return internal::UnorderedElementsAreMatcher<Args>(Args(e1, e2, e3, e4, e5,
      e6));
}

template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7>
inline internal::UnorderedElementsAreMatcher<
    std::tr1::tuple<
        typename internal::DecayArray<T1>::type,
        typename internal::DecayArray<T2>::type,
        typename internal::DecayArray<T3>::type,
        typename internal::DecayArray<T4>::type,
        typename internal::DecayArray<T5>::type,
        typename internal::DecayArray<T6>::type,
        typename internal::DecayArray<T7>::type> >
UnorderedElementsAre(const T1& e1, const T2& e2, const T3& e3, const T4& e4,
    const T5& e5, const T6& e6, const T7& e7) {
  typedef std::tr1::tuple<
      typename internal::DecayArray<T1>::type,
      typename internal::DecayArray<T2>::type,
      typename internal::DecayArray<T3>::type,
      typename internal::DecayArray<T4>::type,
      typename internal::DecayArray<T5>::type,
      typename internal::DecayArray<T6>::type,
      typename internal::DecayArray<T7>::type> Args;
  return internal::UnorderedElementsAreMatcher<Args>(Args(e1, e2, e3, e4, e5,
      e6, e7));
}

template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8>
inline internal::UnorderedElementsAreMatcher<
    std::tr1::tuple<
        typename internal::DecayArray<T1>::type,
        typename internal::DecayArray<T2>::type,
        typename internal::DecayArray<T3>::type,
        typename internal::DecayArray<T4>::type,
        typename internal::DecayArray<T5>::type,
        typename internal::DecayArray<T6>::type,
        typename internal::DecayArray<T7>::type,
        typename internal::DecayArray<T8>::type> >
UnorderedElementsAre(const T1& e1, const T2& e2, const T3& e3, const T4& e4,
    const T5& e5, const T6& e6, const T7& e7, const T8& e8) {
  typedef std::tr1::tuple<
      typename internal::DecayArray<T1>::type,
      typename internal::DecayArray<T2>::type,
      typename internal::DecayArray<T3>::type,
      typename internal::DecayArray<T4>::type,
      typename internal::DecayArray<T5>::type,
      typename internal::DecayArray<T6>::type,
      typename internal::DecayArray<T7>::type,
      typename internal::DecayArray<T8>::type> Args;
  return internal::UnorderedElementsAreMatcher<Args>(Args(e1, e2, e3, e4, e5,
      e6, e7, e8));
}

template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9>
inline internal::UnorderedElementsAreMatcher<
    std::tr1::tuple<
        typename internal::DecayArray<T1>::type,
        typename internal::DecayArray<T2>::type,
        typename internal::DecayArray<T3>::type,
        typename internal::DecayArray<T4>::type,
        typename internal::DecayArray<T5>::type,
        typename internal::DecayArray<T6>::type,
        typename internal::DecayArray<T7>::type,
        typename internal::DecayArray<T8>::type,
        typename internal::DecayArray<T9>::type> >
UnorderedElementsAre(const T1& e1, const T2& e2, const T3& e3, const T4& e4,
    const T5& e5, const T6& e6, const T7& e7, const T8& e8, const T9& e9) {
  typedef std::tr1::tuple<
      typename internal::DecayArray<T1>::type,
      typename internal::DecayArray<T2>::type,
      typename internal::DecayArray<T3>::type,
      typename internal::DecayArray<T4>::type,
      typename internal::DecayArray<T5>::type,
      typename internal::DecayArray<T6>::type,
      typename internal::DecayArray<T7>::type,
      typename internal::DecayArray<T8>::type,
      typename internal::DecayArray<T9>::type> Args;
  return internal::UnorderedElementsAreMatcher<Args>(Args(e1, e2, e3, e4, e5,
      e6, e7, e8, e9));
}

template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10>
inline internal::UnorderedElementsAreMatcher<
    std::tr1::tuple<
        typename internal::DecayArray<T1>::type,
        typename internal::DecayArray<T2>::type,
        typename internal::DecayArray<T3>::type,
        typename internal::DecayArray<T4>::type,
        typename internal::DecayArray<T5>::type,
        typename internal::DecayArray<T6>::type,
        typename internal::DecayArray<T7>::type,
        typename internal::DecayArray<T8>::type,
        typename internal::DecayArray<T9>::type,
        typename internal::DecayArray<T10>::type> >
UnorderedElementsAre(const T1& e1, const T2& e2, const T3& e3, const T4& e4,
    const T5& e5, const T6& e6, const T7& e7, const T8& e8, const T9& e9,
    const T10& e10) {
  typedef std::tr1::tuple<
      typename internal::DecayArray<T1>::type,
      typename internal::DecayArray<T2>::type,
      typename internal::DecayArray<T3>::type,
      typename internal::DecayArray<T4>::type,
      typename internal::DecayArray<T5>::type,
      typename internal::DecayArray<T6>::type,
      typename internal::DecayArray<T7>::type,
      typename internal::DecayArray<T8>::type,
      typename internal::DecayArray<T9>::type,
      typename internal::DecayArray<T10>::type> Args;
  return internal::UnorderedElementsAreMatcher<Args>(Args(e1, e2, e3, e4, e5,
      e6, e7, e8, e9, e10));
}

// AllOf(m1, m2, ..., mk) matches any value that matches all of the given
// sub-matchers.  AllOf is called fully qualified to prevent ADL from firing.

template <typename M1, typename M2>
inline typename internal::AllOfResult2<M1, M2>::type
AllOf(M1 m1, M2 m2) {
  return typename internal::AllOfResult2<M1, M2>::type(
      m1,
      m2);
}

template <typename M1, typename M2, typename M3>
inline typename internal::AllOfResult3<M1, M2, M3>::type
AllOf(M1 m1, M2 m2, M3 m3) {
  return typename internal::AllOfResult3<M1, M2, M3>::type(
      m1,
      ::testing::AllOf(m2, m3));
}

template <typename M1, typename M2, typename M3, typename M4>
inline typename internal::AllOfResult4<M1, M2, M3, M4>::type
AllOf(M1 m1, M2 m2, M3 m3, M4 m4) {
  return typename internal::AllOfResult4<M1, M2, M3, M4>::type(
      ::testing::AllOf(m1, m2),
      ::testing::AllOf(m3, m4));
}

template <typename M1, typename M2, typename M3, typename M4, typename M5>
inline typename internal::AllOfResult5<M1, M2, M3, M4, M5>::type
AllOf(M1 m1, M2 m2, M3 m3, M4 m4, M5 m5) {
  return typename internal::AllOfResult5<M1, M2, M3, M4, M5>::type(
      ::testing::AllOf(m1, m2),
      ::testing::AllOf(m3, m4, m5));
}

template <typename M1, typename M2, typename M3, typename M4, typename M5,
    typename M6>
inline typename internal::AllOfResult6<M1, M2, M3, M4, M5, M6>::type
AllOf(M1 m1, M2 m2, M3 m3, M4 m4, M5 m5, M6 m6) {
  return typename internal::AllOfResult6<M1, M2, M3, M4, M5, M6>::type(
      ::testing::AllOf(m1, m2, m3),
      ::testing::AllOf(m4, m5, m6));
}

template <typename M1, typename M2, typename M3, typename M4, typename M5,
    typename M6, typename M7>
inline typename internal::AllOfResult7<M1, M2, M3, M4, M5, M6, M7>::type
AllOf(M1 m1, M2 m2, M3 m3, M4 m4, M5 m5, M6 m6, M7 m7) {
  return typename internal::AllOfResult7<M1, M2, M3, M4, M5, M6, M7>::type(
      ::testing::AllOf(m1, m2, m3),
      ::testing::AllOf(m4, m5, m6, m7));
}

template <typename M1, typename M2, typename M3, typename M4, typename M5,
    typename M6, typename M7, typename M8>
inline typename internal::AllOfResult8<M1, M2, M3, M4, M5, M6, M7, M8>::type
AllOf(M1 m1, M2 m2, M3 m3, M4 m4, M5 m5, M6 m6, M7 m7, M8 m8) {
  return typename internal::AllOfResult8<M1, M2, M3, M4, M5, M6, M7, M8>::type(
      ::testing::AllOf(m1, m2, m3, m4),
      ::testing::AllOf(m5, m6, m7, m8));
}

template <typename M1, typename M2, typename M3, typename M4, typename M5,
    typename M6, typename M7, typename M8, typename M9>
inline typename internal::AllOfResult9<M1, M2, M3, M4, M5, M6, M7, M8, M9>::type
AllOf(M1 m1, M2 m2, M3 m3, M4 m4, M5 m5, M6 m6, M7 m7, M8 m8, M9 m9) {
  return typename internal::AllOfResult9<M1, M2, M3, M4, M5, M6, M7, M8,
      M9>::type(
      ::testing::AllOf(m1, m2, m3, m4),
      ::testing::AllOf(m5, m6, m7, m8, m9));
}

template <typename M1, typename M2, typename M3, typename M4, typename M5,
    typename M6, typename M7, typename M8, typename M9, typename M10>
inline typename internal::AllOfResult10<M1, M2, M3, M4, M5, M6, M7, M8, M9,
    M10>::type
AllOf(M1 m1, M2 m2, M3 m3, M4 m4, M5 m5, M6 m6, M7 m7, M8 m8, M9 m9, M10 m10) {
  return typename internal::AllOfResult10<M1, M2, M3, M4, M5, M6, M7, M8, M9,
      M10>::type(
      ::testing::AllOf(m1, m2, m3, m4, m5),
      ::testing::AllOf(m6, m7, m8, m9, m10));
}

// AnyOf(m1, m2, ..., mk) matches any value that matches any of the given
// sub-matchers.  AnyOf is called fully qualified to prevent ADL from firing.

template <typename M1, typename M2>
inline typename internal::AnyOfResult2<M1, M2>::type
AnyOf(M1 m1, M2 m2) {
  return typename internal::AnyOfResult2<M1, M2>::type(
      m1,
      m2);
}

template <typename M1, typename M2, typename M3>
inline typename internal::AnyOfResult3<M1, M2, M3>::type
AnyOf(M1 m1, M2 m2, M3 m3) {
  return typename internal::AnyOfResult3<M1, M2, M3>::type(
      m1,
      ::testing::AnyOf(m2, m3));
}

template <typename M1, typename M2, typename M3, typename M4>
inline typename internal::AnyOfResult4<M1, M2, M3, M4>::type
AnyOf(M1 m1, M2 m2, M3 m3, M4 m4) {
  return typename internal::AnyOfResult4<M1, M2, M3, M4>::type(
      ::testing::AnyOf(m1, m2),
      ::testing::AnyOf(m3, m4));
}

template <typename M1, typename M2, typename M3, typename M4, typename M5>
inline typename internal::AnyOfResult5<M1, M2, M3, M4, M5>::type
AnyOf(M1 m1, M2 m2, M3 m3, M4 m4, M5 m5) {
  return typename internal::AnyOfResult5<M1, M2, M3, M4, M5>::type(
      ::testing::AnyOf(m1, m2),
      ::testing::AnyOf(m3, m4, m5));
}

template <typename M1, typename M2, typename M3, typename M4, typename M5,
    typename M6>
inline typename internal::AnyOfResult6<M1, M2, M3, M4, M5, M6>::type
AnyOf(M1 m1, M2 m2, M3 m3, M4 m4, M5 m5, M6 m6) {
  return typename internal::AnyOfResult6<M1, M2, M3, M4, M5, M6>::type(
      ::testing::AnyOf(m1, m2, m3),
      ::testing::AnyOf(m4, m5, m6));
}

template <typename M1, typename M2, typename M3, typename M4, typename M5,
    typename M6, typename M7>
inline typename internal::AnyOfResult7<M1, M2, M3, M4, M5, M6, M7>::type
AnyOf(M1 m1, M2 m2, M3 m3, M4 m4, M5 m5, M6 m6, M7 m7) {
  return typename internal::AnyOfResult7<M1, M2, M3, M4, M5, M6, M7>::type(
      ::testing::AnyOf(m1, m2, m3),
      ::testing::AnyOf(m4, m5, m6, m7));
}

template <typename M1, typename M2, typename M3, typename M4, typename M5,
    typename M6, typename M7, typename M8>
inline typename internal::AnyOfResult8<M1, M2, M3, M4, M5, M6, M7, M8>::type
AnyOf(M1 m1, M2 m2, M3 m3, M4 m4, M5 m5, M6 m6, M7 m7, M8 m8) {
  return typename internal::AnyOfResult8<M1, M2, M3, M4, M5, M6, M7, M8>::type(
      ::testing::AnyOf(m1, m2, m3, m4),
      ::testing::AnyOf(m5, m6, m7, m8));
}

template <typename M1, typename M2, typename M3, typename M4, typename M5,
    typename M6, typename M7, typename M8, typename M9>
inline typename internal::AnyOfResult9<M1, M2, M3, M4, M5, M6, M7, M8, M9>::type
AnyOf(M1 m1, M2 m2, M3 m3, M4 m4, M5 m5, M6 m6, M7 m7, M8 m8, M9 m9) {
  return typename internal::AnyOfResult9<M1, M2, M3, M4, M5, M6, M7, M8,
      M9>::type(
      ::testing::AnyOf(m1, m2, m3, m4),
      ::testing::AnyOf(m5, m6, m7, m8, m9));
}

template <typename M1, typename M2, typename M3, typename M4, typename M5,
    typename M6, typename M7, typename M8, typename M9, typename M10>
inline typename internal::AnyOfResult10<M1, M2, M3, M4, M5, M6, M7, M8, M9,
    M10>::type
AnyOf(M1 m1, M2 m2, M3 m3, M4 m4, M5 m5, M6 m6, M7 m7, M8 m8, M9 m9, M10 m10) {
  return typename internal::AnyOfResult10<M1, M2, M3, M4, M5, M6, M7, M8, M9,
      M10>::type(
      ::testing::AnyOf(m1, m2, m3, m4, m5),
      ::testing::AnyOf(m6, m7, m8, m9, m10));
}

}  // namespace testing


// The MATCHER* family of macros can be used in a namespace scope to
// define custom matchers easily.
//
// Basic Usage
// ===========
//
// The syntax
//
//   MATCHER(name, description_string) { statements; }
//
// defines a matcher with the given name that executes the statements,
// which must return a bool to indicate if the match succeeds.  Inside
// the statements, you can refer to the value being matched by 'arg',
// and refer to its type by 'arg_type'.
//
// The description string documents what the matcher does, and is used
// to generate the failure message when the match fails.  Since a
// MATCHER() is usually defined in a header file shared by multiple
// C++ source files, we require the description to be a C-string
// literal to avoid possible side effects.  It can be empty, in which
// case we'll use the sequence of words in the matcher name as the
// description.
//
// For example:
//
//   MATCHER(IsEven, "") { return (arg % 2) == 0; }
//
// allows you to write
//
//   // Expects mock_foo.Bar(n) to be called where n is even.
//   EXPECT_CALL(mock_foo, Bar(IsEven()));
//
// or,
//
//   // Verifies that the value of some_expression is even.
//   EXPECT_THAT(some_expression, IsEven());
//
// If the above assertion fails, it will print something like:
//
//   Value of: some_expression
//   Expected: is even
//     Actual: 7
//
// where the description "is even" is automatically calculated from the
// matcher name IsEven.
//
// Argument Type
// =============
//
// Note that the type of the value being matched (arg_type) is
// determined by the context in which you use the matcher and is
// supplied to you by the compiler, so you don't need to worry about
// declaring it (nor can you).  This allows the matcher to be
// polymorphic.  For example, IsEven() can be used to match any type
// where the value of "(arg % 2) == 0" can be implicitly converted to
// a bool.  In the "Bar(IsEven())" example above, if method Bar()
// takes an int, 'arg_type' will be int; if it takes an unsigned long,
// 'arg_type' will be unsigned long; and so on.
//
// Parameterizing Matchers
// =======================
//
// Sometimes you'll want to parameterize the matcher.  For that you
// can use another macro:
//
//   MATCHER_P(name, param_name, description_string) { statements; }
//
// For example:
//
//   MATCHER_P(HasAbsoluteValue, value, "") { return abs(arg) == value; }
//
// will allow you to write:
//
//   EXPECT_THAT(Blah("a"), HasAbsoluteValue(n));
//
// which may lead to this message (assuming n is 10):
//
//   Value of: Blah("a")
//   Expected: has absolute value 10
//     Actual: -9
//
// Note that both the matcher description and its parameter are
// printed, making the message human-friendly.
//
// In the matcher definition body, you can write 'foo_type' to
// reference the type of a parameter named 'foo'.  For example, in the
// body of MATCHER_P(HasAbsoluteValue, value) above, you can write
// 'value_type' to refer to the type of 'value'.
//
// We also provide MATCHER_P2, MATCHER_P3, ..., up to MATCHER_P10 to
// support multi-parameter matchers.
//
// Describing Parameterized Matchers
// =================================
//
// The last argument to MATCHER*() is a string-typed expression.  The
// expression can reference all of the matcher's parameters and a
// special bool-typed variable named 'negation'.  When 'negation' is
// false, the expression should evaluate to the matcher's description;
// otherwise it should evaluate to the description of the negation of
// the matcher.  For example,
//
//   using testing::PrintToString;
//
//   MATCHER_P2(InClosedRange, low, hi,
//       string(negation ? "is not" : "is") + " in range [" +
//       PrintToString(low) + ", " + PrintToString(hi) + "]") {
//     return low <= arg && arg <= hi;
//   }
//   ...
//   EXPECT_THAT(3, InClosedRange(4, 6));
//   EXPECT_THAT(3, Not(InClosedRange(2, 4)));
//
// would generate two failures that contain the text:
//
//   Expected: is in range [4, 6]
//   ...
//   Expected: is not in range [2, 4]
//
// If you specify "" as the description, the failure message will
// contain the sequence of words in the matcher name followed by the
// parameter values printed as a tuple.  For example,
//
//   MATCHER_P2(InClosedRange, low, hi, "") { ... }
//   ...
//   EXPECT_THAT(3, InClosedRange(4, 6));
//   EXPECT_THAT(3, Not(InClosedRange(2, 4)));
//
// would generate two failures that contain the text:
//
//   Expected: in closed range (4, 6)
//   ...
//   Expected: not (in closed range (2, 4))
//
// Types of Matcher Parameters
// ===========================
//
// For the purpose of typing, you can view
//
//   MATCHER_Pk(Foo, p1, ..., pk, description_string) { ... }
//
// as shorthand for
//
//   template <typename p1_type, ..., typename pk_type>
//   FooMatcherPk<p1_type, ..., pk_type>
//   Foo(p1_type p1, ..., pk_type pk) { ... }
//
// When you write Foo(v1, ..., vk), the compiler infers the types of
// the parameters v1, ..., and vk for you.  If you are not happy with
// the result of the type inference, you can specify the types by
// explicitly instantiating the template, as in Foo<long, bool>(5,
// false).  As said earlier, you don't get to (or need to) specify
// 'arg_type' as that's determined by the context in which the matcher
// is used.  You can assign the result of expression Foo(p1, ..., pk)
// to a variable of type FooMatcherPk<p1_type, ..., pk_type>.  This
// can be useful when composing matchers.
//
// While you can instantiate a matcher template with reference types,
// passing the parameters by pointer usually makes your code more
// readable.  If, however, you still want to pass a parameter by
// reference, be aware that in the failure message generated by the
// matcher you will see the value of the referenced object but not its
// address.
//
// Explaining Match Results
// ========================
//
// Sometimes the matcher description alone isn't enough to explain why
// the match has failed or succeeded.  For example, when expecting a
// long string, it can be very helpful to also print the diff between
// the expected string and the actual one.  To achieve that, you can
// optionally stream additional information to a special variable
// named result_listener, whose type is a pointer to class
// MatchResultListener:
//
//   MATCHER_P(EqualsLongString, str, "") {
//     if (arg == str) return true;
//
//     *result_listener << "the difference: "
///                     << DiffStrings(str, arg);
//     return false;
//   }
//
// Overloading Matchers
// ====================
//
// You can overload matchers with different numbers of parameters:
//
//   MATCHER_P(Blah, a, description_string1) { ... }
//   MATCHER_P2(Blah, a, b, description_string2) { ... }
//
// Caveats
// =======
//
// When defining a new matcher, you should also consider implementing
// MatcherInterface or using MakePolymorphicMatcher().  These
// approaches require more work than the MATCHER* macros, but also
// give you more control on the types of the value being matched and
// the matcher parameters, which may leads to better compiler error
// messages when the matcher is used wrong.  They also allow
// overloading matchers based on parameter types (as opposed to just
// based on the number of parameters).
//
// MATCHER*() can only be used in a namespace scope.  The reason is
// that C++ doesn't yet allow function-local types to be used to
// instantiate templates.  The up-coming C++0x standard will fix this.
// Once that's done, we'll consider supporting using MATCHER*() inside
// a function.
//
// More Information
// ================
//
// To learn more about using these macros, please search for 'MATCHER'
// on http://code.google.com/p/googlemock/wiki/CookBook.

#define MATCHER(name, description)\
  class name##Matcher {\
   public:\
    template <typename arg_type>\
    class gmock_Impl : public ::testing::MatcherInterface<arg_type> {\
     public:\
      gmock_Impl()\
           {}\
      virtual bool MatchAndExplain(\
          arg_type arg, ::testing::MatchResultListener* result_listener) const;\
      virtual void DescribeTo(::std::ostream* gmock_os) const {\
        *gmock_os << FormatDescription(false);\
      }\
      virtual void DescribeNegationTo(::std::ostream* gmock_os) const {\
        *gmock_os << FormatDescription(true);\
      }\
     private:\
      ::testing::internal::string FormatDescription(bool negation) const {\
        const ::testing::internal::string gmock_description = (description);\
        if (!gmock_description.empty())\
          return gmock_description;\
        return ::testing::internal::FormatMatcherDescription(\
            negation, #name, \
            ::testing::internal::UniversalTersePrintTupleFieldsToStrings(\
                ::std::tr1::tuple<>()));\
      }\
      GTEST_DISALLOW_ASSIGN_(gmock_Impl);\
    };\
    template <typename arg_type>\
    operator ::testing::Matcher<arg_type>() const {\
      return ::testing::Matcher<arg_type>(\
          new gmock_Impl<arg_type>());\
    }\
    name##Matcher() {\
    }\
   private:\
    GTEST_DISALLOW_ASSIGN_(name##Matcher);\
  };\
  inline name##Matcher name() {\
    return name##Matcher();\
  }\
  template <typename arg_type>\
  bool name##Matcher::gmock_Impl<arg_type>::MatchAndExplain(\
      arg_type arg, \
      ::testing::MatchResultListener* result_listener GTEST_ATTRIBUTE_UNUSED_)\
          const

#define MATCHER_P(name, p0, description)\
  template <typename p0##_type>\
  class name##MatcherP {\
   public:\
    template <typename arg_type>\
    class gmock_Impl : public ::testing::MatcherInterface<arg_type> {\
     public:\
      explicit gmock_Impl(p0##_type gmock_p0)\
           : p0(gmock_p0) {}\
      virtual bool MatchAndExplain(\
          arg_type arg, ::testing::MatchResultListener* result_listener) const;\
      virtual void DescribeTo(::std::ostream* gmock_os) const {\
        *gmock_os << FormatDescription(false);\
      }\
      virtual void DescribeNegationTo(::std::ostream* gmock_os) const {\
        *gmock_os << FormatDescription(true);\
      }\
      p0##_type p0;\
     private:\
      ::testing::internal::string FormatDescription(bool negation) const {\
        const ::testing::internal::string gmock_description = (description);\
        if (!gmock_description.empty())\
          return gmock_description;\
        return ::testing::internal::FormatMatcherDescription(\
            negation, #name, \
            ::testing::internal::UniversalTersePrintTupleFieldsToStrings(\
                ::std::tr1::tuple<p0##_type>(p0)));\
      }\
      GTEST_DISALLOW_ASSIGN_(gmock_Impl);\
    };\
    template <typename arg_type>\
    operator ::testing::Matcher<arg_type>() const {\
      return ::testing::Matcher<arg_type>(\
          new gmock_Impl<arg_type>(p0));\
    }\
    name##MatcherP(p0##_type gmock_p0) : p0(gmock_p0) {\
    }\
    p0##_type p0;\
   private:\
    GTEST_DISALLOW_ASSIGN_(name##MatcherP);\
  };\
  template <typename p0##_type>\
  inline name##MatcherP<p0##_type> name(p0##_type p0) {\
    return name##MatcherP<p0##_type>(p0);\
  }\
  template <typename p0##_type>\
  template <typename arg_type>\
  bool name##MatcherP<p0##_type>::gmock_Impl<arg_type>::MatchAndExplain(\
      arg_type arg, \
      ::testing::MatchResultListener* result_listener GTEST_ATTRIBUTE_UNUSED_)\
          const

#define MATCHER_P2(name, p0, p1, description)\
  template <typename p0##_type, typename p1##_type>\
  class name##MatcherP2 {\
   public:\
    template <typename arg_type>\
    class gmock_Impl : public ::testing::MatcherInterface<arg_type> {\
     public:\
      gmock_Impl(p0##_type gmock_p0, p1##_type gmock_p1)\
           : p0(gmock_p0), p1(gmock_p1) {}\
      virtual bool MatchAndExplain(\
          arg_type arg, ::testing::MatchResultListener* result_listener) const;\
      virtual void DescribeTo(::std::ostream* gmock_os) const {\
        *gmock_os << FormatDescription(false);\
      }\
      virtual void DescribeNegationTo(::std::ostream* gmock_os) const {\
        *gmock_os << FormatDescription(true);\
      }\
      p0##_type p0;\
      p1##_type p1;\
     private:\
      ::testing::internal::string FormatDescription(bool negation) const {\
        const ::testing::internal::string gmock_description = (description);\
        if (!gmock_description.empty())\
          return gmock_description;\
        return ::testing::internal::FormatMatcherDescription(\
            negation, #name, \
            ::testing::internal::UniversalTersePrintTupleFieldsToStrings(\
                ::std::tr1::tuple<p0##_type, p1##_type>(p0, p1)));\
      }\
      GTEST_DISALLOW_ASSIGN_(gmock_Impl);\
    };\
    template <typename arg_type>\
    operator ::testing::Matcher<arg_type>() const {\
      return ::testing::Matcher<arg_type>(\
          new gmock_Impl<arg_type>(p0, p1));\
    }\
    name##MatcherP2(p0##_type gmock_p0, p1##_type gmock_p1) : p0(gmock_p0), \
        p1(gmock_p1) {\
    }\
    p0##_type p0;\
    p1##_type p1;\
   private:\
    GTEST_DISALLOW_ASSIGN_(name##MatcherP2);\
  };\
  template <typename p0##_type, typename p1##_type>\
  inline name##MatcherP2<p0##_type, p1##_type> name(p0##_type p0, \
      p1##_type p1) {\
    return name##MatcherP2<p0##_type, p1##_type>(p0, p1);\
  }\
  template <typename p0##_type, typename p1##_type>\
  template <typename arg_type>\
  bool name##MatcherP2<p0##_type, \
      p1##_type>::gmock_Impl<arg_type>::MatchAndExplain(\
      arg_type arg, \
      ::testing::MatchResultListener* result_listener GTEST_ATTRIBUTE_UNUSED_)\
          const

#define MATCHER_P3(name, p0, p1, p2, description)\
  template <typename p0##_type, typename p1##_type, typename p2##_type>\
  class name##MatcherP3 {\
   public:\
    template <typename arg_type>\
    class gmock_Impl : public ::testing::MatcherInterface<arg_type> {\
     public:\
      gmock_Impl(p0##_type gmock_p0, p1##_type gmock_p1, p2##_type gmock_p2)\
           : p0(gmock_p0), p1(gmock_p1), p2(gmock_p2) {}\
      virtual bool MatchAndExplain(\
          arg_type arg, ::testing::MatchResultListener* result_listener) const;\
      virtual void DescribeTo(::std::ostream* gmock_os) const {\
        *gmock_os << FormatDescription(false);\
      }\
      virtual void DescribeNegationTo(::std::ostream* gmock_os) const {\
        *gmock_os << FormatDescription(true);\
      }\
      p0##_type p0;\
      p1##_type p1;\
      p2##_type p2;\
     private:\
      ::testing::internal::string FormatDescription(bool negation) const {\
        const ::testing::internal::string gmock_description = (description);\
        if (!gmock_description.empty())\
          return gmock_description;\
        return ::testing::internal::FormatMatcherDescription(\
            negation, #name, \
            ::testing::internal::UniversalTersePrintTupleFieldsToStrings(\
                ::std::tr1::tuple<p0##_type, p1##_type, p2##_type>(p0, p1, \
                    p2)));\
      }\
      GTEST_DISALLOW_ASSIGN_(gmock_Impl);\
    };\
    template <typename arg_type>\
    operator ::testing::Matcher<arg_type>() const {\
      return ::testing::Matcher<arg_type>(\
          new gmock_Impl<arg_type>(p0, p1, p2));\
    }\
    name##MatcherP3(p0##_type gmock_p0, p1##_type gmock_p1, \
        p2##_type gmock_p2) : p0(gmock_p0), p1(gmock_p1), p2(gmock_p2) {\
    }\
    p0##_type p0;\
    p1##_type p1;\
    p2##_type p2;\
   private:\
    GTEST_DISALLOW_ASSIGN_(name##MatcherP3);\
  };\
  template <typename p0##_type, typename p1##_type, typename p2##_type>\
  inline name##MatcherP3<p0##_type, p1##_type, p2##_type> name(p0##_type p0, \
      p1##_type p1, p2##_type p2) {\
    return name##MatcherP3<p0##_type, p1##_type, p2##_type>(p0, p1, p2);\
  }\
  template <typename p0##_type, typename p1##_type, typename p2##_type>\
  template <typename arg_type>\
  bool name##MatcherP3<p0##_type, p1##_type, \
      p2##_type>::gmock_Impl<arg_type>::MatchAndExplain(\
      arg_type arg, \
      ::testing::MatchResultListener* result_listener GTEST_ATTRIBUTE_UNUSED_)\
          const

#define MATCHER_P4(name, p0, p1, p2, p3, description)\
  template <typename p0##_type, typename p1##_type, typename p2##_type, \
      typename p3##_type>\
  class name##MatcherP4 {\
   public:\
    template <typename arg_type>\
    class gmock_Impl : public ::testing::MatcherInterface<arg_type> {\
     public:\
      gmock_Impl(p0##_type gmock_p0, p1##_type gmock_p1, p2##_type gmock_p2, \
          p3##_type gmock_p3)\
           : p0(gmock_p0), p1(gmock_p1), p2(gmock_p2), p3(gmock_p3) {}\
      virtual bool MatchAndExplain(\
          arg_type arg, ::testing::MatchResultListener* result_listener) const;\
      virtual void DescribeTo(::std::ostream* gmock_os) const {\
        *gmock_os << FormatDescription(false);\
      }\
      virtual void DescribeNegationTo(::std::ostream* gmock_os) const {\
        *gmock_os << FormatDescription(true);\
      }\
      p0##_type p0;\
      p1##_type p1;\
      p2##_type p2;\
      p3##_type p3;\
     private:\
      ::testing::internal::string FormatDescription(bool negation) const {\
        const ::testing::internal::string gmock_description = (description);\
        if (!gmock_description.empty())\
          return gmock_description;\
        return ::testing::internal::FormatMatcherDescription(\
            negation, #name, \
            ::testing::internal::UniversalTersePrintTupleFieldsToStrings(\
                ::std::tr1::tuple<p0##_type, p1##_type, p2##_type, \
                    p3##_type>(p0, p1, p2, p3)));\
      }\
      GTEST_DISALLOW_ASSIGN_(gmock_Impl);\
    };\
    template <typename arg_type>\
    operator ::testing::Matcher<arg_type>() const {\
      return ::testing::Matcher<arg_type>(\
          new gmock_Impl<arg_type>(p0, p1, p2, p3));\
    }\
    name##MatcherP4(p0##_type gmock_p0, p1##_type gmock_p1, \
        p2##_type gmock_p2, p3##_type gmock_p3) : p0(gmock_p0), p1(gmock_p1), \
        p2(gmock_p2), p3(gmock_p3) {\
    }\
    p0##_type p0;\
    p1##_type p1;\
    p2##_type p2;\
    p3##_type p3;\
   private:\
    GTEST_DISALLOW_ASSIGN_(name##MatcherP4);\
  };\
  template <typename p0##_type, typename p1##_type, typename p2##_type, \
      typename p3##_type>\
  inline name##MatcherP4<p0##_type, p1##_type, p2##_type, \
      p3##_type> name(p0##_type p0, p1##_type p1, p2##_type p2, \
      p3##_type p3) {\
    return name##MatcherP4<p0##_type, p1##_type, p2##_type, p3##_type>(p0, \
        p1, p2, p3);\
  }\
  template <typename p0##_type, typename p1##_type, typename p2##_type, \
      typename p3##_type>\
  template <typename arg_type>\
  bool name##MatcherP4<p0##_type, p1##_type, p2##_type, \
      p3##_type>::gmock_Impl<arg_type>::MatchAndExplain(\
      arg_type arg, \
      ::testing::MatchResultListener* result_listener GTEST_ATTRIBUTE_UNUSED_)\
          const

#define MATCHER_P5(name, p0, p1, p2, p3, p4, description)\
  template <typename p0##_type, typename p1##_type, typename p2##_type, \
      typename p3##_type, typename p4##_type>\
  class name##MatcherP5 {\
   public:\
    template <typename arg_type>\
    class gmock_Impl : public ::testing::MatcherInterface<arg_type> {\
     public:\
      gmock_Impl(p0##_type gmock_p0, p1##_type gmock_p1, p2##_type gmock_p2, \
          p3##_type gmock_p3, p4##_type gmock_p4)\
           : p0(gmock_p0), p1(gmock_p1), p2(gmock_p2), p3(gmock_p3), \
               p4(gmock_p4) {}\
      virtual bool MatchAndExplain(\
          arg_type arg, ::testing::MatchResultListener* result_listener) const;\
      virtual void DescribeTo(::std::ostream* gmock_os) const {\
        *gmock_os << FormatDescription(false);\
      }\
      virtual void DescribeNegationTo(::std::ostream* gmock_os) const {\
        *gmock_os << FormatDescription(true);\
      }\
      p0##_type p0;\
      p1##_type p1;\
      p2##_type p2;\
      p3##_type p3;\
      p4##_type p4;\
     private:\
      ::testing::internal::string FormatDescription(bool negation) const {\
        const ::testing::internal::string gmock_description = (description);\
        if (!gmock_description.empty())\
          return gmock_description;\
        return ::testing::internal::FormatMatcherDescription(\
            negation, #name, \
            ::testing::internal::UniversalTersePrintTupleFieldsToStrings(\
                ::std::tr1::tuple<p0##_type, p1##_type, p2##_type, p3##_type, \
                    p4##_type>(p0, p1, p2, p3, p4)));\
      }\
      GTEST_DISALLOW_ASSIGN_(gmock_Impl);\
    };\
    template <typename arg_type>\
    operator ::testing::Matcher<arg_type>() const {\
      return ::testing::Matcher<arg_type>(\
          new gmock_Impl<arg_type>(p0, p1, p2, p3, p4));\
    }\
    name##MatcherP5(p0##_type gmock_p0, p1##_type gmock_p1, \
        p2##_type gmock_p2, p3##_type gmock_p3, \
        p4##_type gmock_p4) : p0(gmock_p0), p1(gmock_p1), p2(gmock_p2), \
        p3(gmock_p3), p4(gmock_p4) {\
    }\
    p0##_type p0;\
    p1##_type p1;\
    p2##_type p2;\
    p3##_type p3;\
    p4##_type p4;\
   private:\
    GTEST_DISALLOW_ASSIGN_(name##MatcherP5);\
  };\
  template <typename p0##_type, typename p1##_type, typename p2##_type, \
      typename p3##_type, typename p4##_type>\
  inline name##MatcherP5<p0##_type, p1##_type, p2##_type, p3##_type, \
      p4##_type> name(p0##_type p0, p1##_type p1, p2##_type p2, p3##_type p3, \
      p4##_type p4) {\
    return name##MatcherP5<p0##_type, p1##_type, p2##_type, p3##_type, \
        p4##_type>(p0, p1, p2, p3, p4);\
  }\
  template <typename p0##_type, typename p1##_type, typename p2##_type, \
      typename p3##_type, typename p4##_type>\
  template <typename arg_type>\
  bool name##MatcherP5<p0##_type, p1##_type, p2##_type, p3##_type, \
      p4##_type>::gmock_Impl<arg_type>::MatchAndExplain(\
      arg_type arg, \
      ::testing::MatchResultListener* result_listener GTEST_ATTRIBUTE_UNUSED_)\
          const

#define MATCHER_P6(name, p0, p1, p2, p3, p4, p5, description)\
  template <typename p0##_type, typename p1##_type, typename p2##_type, \
      typename p3##_type, typename p4##_type, typename p5##_type>\
  class name##MatcherP6 {\
   public:\
    template <typename arg_type>\
    class gmock_Impl : public ::testing::MatcherInterface<arg_type> {\
     public:\
      gmock_Impl(p0##_type gmock_p0, p1##_type gmock_p1, p2##_type gmock_p2, \
          p3##_type gmock_p3, p4##_type gmock_p4, p5##_type gmock_p5)\
           : p0(gmock_p0), p1(gmock_p1), p2(gmock_p2), p3(gmock_p3), \
               p4(gmock_p4), p5(gmock_p5) {}\
      virtual bool MatchAndExplain(\
          arg_type arg, ::testing::MatchResultListener* result_listener) const;\
      virtual void DescribeTo(::std::ostream* gmock_os) const {\
        *gmock_os << FormatDescription(false);\
      }\
      virtual void DescribeNegationTo(::std::ostream* gmock_os) const {\
        *gmock_os << FormatDescription(true);\
      }\
      p0##_type p0;\
      p1##_type p1;\
      p2##_type p2;\
      p3##_type p3;\
      p4##_type p4;\
      p5##_type p5;\
     private:\
      ::testing::internal::string FormatDescription(bool negation) const {\
        const ::testing::internal::string gmock_description = (description);\
        if (!gmock_description.empty())\
          return gmock_description;\
        return ::testing::internal::FormatMatcherDescription(\
            negation, #name, \
            ::testing::internal::UniversalTersePrintTupleFieldsToStrings(\
                ::std::tr1::tuple<p0##_type, p1##_type, p2##_type, p3##_type, \
                    p4##_type, p5##_type>(p0, p1, p2, p3, p4, p5)));\
      }\
      GTEST_DISALLOW_ASSIGN_(gmock_Impl);\
    };\
    template <typename arg_type>\
    operator ::testing::Matcher<arg_type>() const {\
      return ::testing::Matcher<arg_type>(\
          new gmock_Impl<arg_type>(p0, p1, p2, p3, p4, p5));\
    }\
    name##MatcherP6(p0##_type gmock_p0, p1##_type gmock_p1, \
        p2##_type gmock_p2, p3##_type gmock_p3, p4##_type gmock_p4, \
        p5##_type gmock_p5) : p0(gmock_p0), p1(gmock_p1), p2(gmock_p2), \
        p3(gmock_p3), p4(gmock_p4), p5(gmock_p5) {\
    }\
    p0##_type p0;\
    p1##_type p1;\
    p2##_type p2;\
    p3##_type p3;\
    p4##_type p4;\
    p5##_type p5;\
   private:\
    GTEST_DISALLOW_ASSIGN_(name##MatcherP6);\
  };\
  template <typename p0##_type, typename p1##_type, typename p2##_type, \
      typename p3##_type, typename p4##_type, typename p5##_type>\
  inline name##MatcherP6<p0##_type, p1##_type, p2##_type, p3##_type, \
      p4##_type, p5##_type> name(p0##_type p0, p1##_type p1, p2##_type p2, \
      p3##_type p3, p4##_type p4, p5##_type p5) {\
    return name##MatcherP6<p0##_type, p1##_type, p2##_type, p3##_type, \
        p4##_type, p5##_type>(p0, p1, p2, p3, p4, p5);\
  }\
  template <typename p0##_type, typename p1##_type, typename p2##_type, \
      typename p3##_type, typename p4##_type, typename p5##_type>\
  template <typename arg_type>\
  bool name##MatcherP6<p0##_type, p1##_type, p2##_type, p3##_type, p4##_type, \
      p5##_type>::gmock_Impl<arg_type>::MatchAndExplain(\
      arg_type arg, \
      ::testing::MatchResultListener* result_listener GTEST_ATTRIBUTE_UNUSED_)\
          const

#define MATCHER_P7(name, p0, p1, p2, p3, p4, p5, p6, description)\
  template <typename p0##_type, typename p1##_type, typename p2##_type, \
      typename p3##_type, typename p4##_type, typename p5##_type, \
      typename p6##_type>\
  class name##MatcherP7 {\
   public:\
    template <typename arg_type>\
    class gmock_Impl : public ::testing::MatcherInterface<arg_type> {\
     public:\
      gmock_Impl(p0##_type gmock_p0, p1##_type gmock_p1, p2##_type gmock_p2, \
          p3##_type gmock_p3, p4##_type gmock_p4, p5##_type gmock_p5, \
          p6##_type gmock_p6)\
           : p0(gmock_p0), p1(gmock_p1), p2(gmock_p2), p3(gmock_p3), \
               p4(gmock_p4), p5(gmock_p5), p6(gmock_p6) {}\
      virtual bool MatchAndExplain(\
          arg_type arg, ::testing::MatchResultListener* result_listener) const;\
      virtual void DescribeTo(::std::ostream* gmock_os) const {\
        *gmock_os << FormatDescription(false);\
      }\
      virtual void DescribeNegationTo(::std::ostream* gmock_os) const {\
        *gmock_os << FormatDescription(true);\
      }\
      p0##_type p0;\
      p1##_type p1;\
      p2##_type p2;\
      p3##_type p3;\
      p4##_type p4;\
      p5##_type p5;\
      p6##_type p6;\
     private:\
      ::testing::internal::string FormatDescription(bool negation) const {\
        const ::testing::internal::string gmock_description = (description);\
        if (!gmock_description.empty())\
          return gmock_description;\
        return ::testing::internal::FormatMatcherDescription(\
            negation, #name, \
            ::testing::internal::UniversalTersePrintTupleFieldsToStrings(\
                ::std::tr1::tuple<p0##_type, p1##_type, p2##_type, p3##_type, \
                    p4##_type, p5##_type, p6##_type>(p0, p1, p2, p3, p4, p5, \
                    p6)));\
      }\
      GTEST_DISALLOW_ASSIGN_(gmock_Impl);\
    };\
    template <typename arg_type>\
    operator ::testing::Matcher<arg_type>() const {\
      return ::testing::Matcher<arg_type>(\
          new gmock_Impl<arg_type>(p0, p1, p2, p3, p4, p5, p6));\
    }\
    name##MatcherP7(p0##_type gmock_p0, p1##_type gmock_p1, \
        p2##_type gmock_p2, p3##_type gmock_p3, p4##_type gmock_p4, \
        p5##_type gmock_p5, p6##_type gmock_p6) : p0(gmock_p0), p1(gmock_p1), \
        p2(gmock_p2), p3(gmock_p3), p4(gmock_p4), p5(gmock_p5), \
        p6(gmock_p6) {\
    }\
    p0##_type p0;\
    p1##_type p1;\
    p2##_type p2;\
    p3##_type p3;\
    p4##_type p4;\
    p5##_type p5;\
    p6##_type p6;\
   private:\
    GTEST_DISALLOW_ASSIGN_(name##MatcherP7);\
  };\
  template <typename p0##_type, typename p1##_type, typename p2##_type, \
      typename p3##_type, typename p4##_type, typename p5##_type, \
      typename p6##_type>\
  inline name##MatcherP7<p0##_type, p1##_type, p2##_type, p3##_type, \
      p4##_type, p5##_type, p6##_type> name(p0##_type p0, p1##_type p1, \
      p2##_type p2, p3##_type p3, p4##_type p4, p5##_type p5, \
      p6##_type p6) {\
    return name##MatcherP7<p0##_type, p1##_type, p2##_type, p3##_type, \
        p4##_type, p5##_type, p6##_type>(p0, p1, p2, p3, p4, p5, p6);\
  }\
  template <typename p0##_type, typename p1##_type, typename p2##_type, \
      typename p3##_type, typename p4##_type, typename p5##_type, \
      typename p6##_type>\
  template <typename arg_type>\
  bool name##MatcherP7<p0##_type, p1##_type, p2##_type, p3##_type, p4##_type, \
      p5##_type, p6##_type>::gmock_Impl<arg_type>::MatchAndExplain(\
      arg_type arg, \
      ::testing::MatchResultListener* result_listener GTEST_ATTRIBUTE_UNUSED_)\
          const

#define MATCHER_P8(name, p0, p1, p2, p3, p4, p5, p6, p7, description)\
  template <typename p0##_type, typename p1##_type, typename p2##_type, \
      typename p3##_type, typename p4##_type, typename p5##_type, \
      typename p6##_type, typename p7##_type>\
  class name##MatcherP8 {\
   public:\
    template <typename arg_type>\
    class gmock_Impl : public ::testing::MatcherInterface<arg_type> {\
     public:\
      gmock_Impl(p0##_type gmock_p0, p1##_type gmock_p1, p2##_type gmock_p2, \
          p3##_type gmock_p3, p4##_type gmock_p4, p5##_type gmock_p5, \
          p6##_type gmock_p6, p7##_type gmock_p7)\
           : p0(gmock_p0), p1(gmock_p1), p2(gmock_p2), p3(gmock_p3), \
               p4(gmock_p4), p5(gmock_p5), p6(gmock_p6), p7(gmock_p7) {}\
      virtual bool MatchAndExplain(\
          arg_type arg, ::testing::MatchResultListener* result_listener) const;\
      virtual void DescribeTo(::std::ostream* gmock_os) const {\
        *gmock_os << FormatDescription(false);\
      }\
      virtual void DescribeNegationTo(::std::ostream* gmock_os) const {\
        *gmock_os << FormatDescription(true);\
      }\
      p0##_type p0;\
      p1##_type p1;\
      p2##_type p2;\
      p3##_type p3;\
      p4##_type p4;\
      p5##_type p5;\
      p6##_type p6;\
      p7##_type p7;\
     private:\
      ::testing::internal::string FormatDescription(bool negation) const {\
        const ::testing::internal::string gmock_description = (description);\
        if (!gmock_description.empty())\
          return gmock_description;\
        return ::testing::internal::FormatMatcherDescription(\
            negation, #name, \
            ::testing::internal::UniversalTersePrintTupleFieldsToStrings(\
                ::std::tr1::tuple<p0##_type, p1##_type, p2##_type, p3##_type, \
                    p4##_type, p5##_type, p6##_type, p7##_type>(p0, p1, p2, \
                    p3, p4, p5, p6, p7)));\
      }\
      GTEST_DISALLOW_ASSIGN_(gmock_Impl);\
    };\
    template <typename arg_type>\
    operator ::testing::Matcher<arg_type>() const {\
      return ::testing::Matcher<arg_type>(\
          new gmock_Impl<arg_type>(p0, p1, p2, p3, p4, p5, p6, p7));\
    }\
    name##MatcherP8(p0##_type gmock_p0, p1##_type gmock_p1, \
        p2##_type gmock_p2, p3##_type gmock_p3, p4##_type gmock_p4, \
        p5##_type gmock_p5, p6##_type gmock_p6, \
        p7##_type gmock_p7) : p0(gmock_p0), p1(gmock_p1), p2(gmock_p2), \
        p3(gmock_p3), p4(gmock_p4), p5(gmock_p5), p6(gmock_p6), \
        p7(gmock_p7) {\
    }\
    p0##_type p0;\
    p1##_type p1;\
    p2##_type p2;\
    p3##_type p3;\
    p4##_type p4;\
    p5##_type p5;\
    p6##_type p6;\
    p7##_type p7;\
   private:\
    GTEST_DISALLOW_ASSIGN_(name##MatcherP8);\
  };\
  template <typename p0##_type, typename p1##_type, typename p2##_type, \
      typename p3##_type, typename p4##_type, typename p5##_type, \
      typename p6##_type, typename p7##_type>\
  inline name##MatcherP8<p0##_type, p1##_type, p2##_type, p3##_type, \
      p4##_type, p5##_type, p6##_type, p7##_type> name(p0##_type p0, \
      p1##_type p1, p2##_type p2, p3##_type p3, p4##_type p4, p5##_type p5, \
      p6##_type p6, p7##_type p7) {\
    return name##MatcherP8<p0##_type, p1##_type, p2##_type, p3##_type, \
        p4##_type, p5##_type, p6##_type, p7##_type>(p0, p1, p2, p3, p4, p5, \
        p6, p7);\
  }\
  template <typename p0##_type, typename p1##_type, typename p2##_type, \
      typename p3##_type, typename p4##_type, typename p5##_type, \
      typename p6##_type, typename p7##_type>\
  template <typename arg_type>\
  bool name##MatcherP8<p0##_type, p1##_type, p2##_type, p3##_type, p4##_type, \
      p5##_type, p6##_type, \
      p7##_type>::gmock_Impl<arg_type>::MatchAndExplain(\
      arg_type arg, \
      ::testing::MatchResultListener* result_listener GTEST_ATTRIBUTE_UNUSED_)\
          const

#define MATCHER_P9(name, p0, p1, p2, p3, p4, p5, p6, p7, p8, description)\
  template <typename p0##_type, typename p1##_type, typename p2##_type, \
      typename p3##_type, typename p4##_type, typename p5##_type, \
      typename p6##_type, typename p7##_type, typename p8##_type>\
  class name##MatcherP9 {\
   public:\
    template <typename arg_type>\
    class gmock_Impl : public ::testing::MatcherInterface<arg_type> {\
     public:\
      gmock_Impl(p0##_type gmock_p0, p1##_type gmock_p1, p2##_type gmock_p2, \
          p3##_type gmock_p3, p4##_type gmock_p4, p5##_type gmock_p5, \
          p6##_type gmock_p6, p7##_type gmock_p7, p8##_type gmock_p8)\
           : p0(gmock_p0), p1(gmock_p1), p2(gmock_p2), p3(gmock_p3), \
               p4(gmock_p4), p5(gmock_p5), p6(gmock_p6), p7(gmock_p7), \
               p8(gmock_p8) {}\
      virtual bool MatchAndExplain(\
          arg_type arg, ::testing::MatchResultListener* result_listener) const;\
      virtual void DescribeTo(::std::ostream* gmock_os) const {\
        *gmock_os << FormatDescription(false);\
      }\
      virtual void DescribeNegationTo(::std::ostream* gmock_os) const {\
        *gmock_os << FormatDescription(true);\
      }\
      p0##_type p0;\
      p1##_type p1;\
      p2##_type p2;\
      p3##_type p3;\
      p4##_type p4;\
      p5##_type p5;\
      p6##_type p6;\
      p7##_type p7;\
      p8##_type p8;\
     private:\
      ::testing::internal::string FormatDescription(bool negation) const {\
        const ::testing::internal::string gmock_description = (description);\
        if (!gmock_description.empty())\
          return gmock_description;\
        return ::testing::internal::FormatMatcherDescription(\
            negation, #name, \
            ::testing::internal::UniversalTersePrintTupleFieldsToStrings(\
                ::std::tr1::tuple<p0##_type, p1##_type, p2##_type, p3##_type, \
                    p4##_type, p5##_type, p6##_type, p7##_type, \
                    p8##_type>(p0, p1, p2, p3, p4, p5, p6, p7, p8)));\
      }\
      GTEST_DISALLOW_ASSIGN_(gmock_Impl);\
    };\
    template <typename arg_type>\
    operator ::testing::Matcher<arg_type>() const {\
      return ::testing::Matcher<arg_type>(\
          new gmock_Impl<arg_type>(p0, p1, p2, p3, p4, p5, p6, p7, p8));\
    }\
    name##MatcherP9(p0##_type gmock_p0, p1##_type gmock_p1, \
        p2##_type gmock_p2, p3##_type gmock_p3, p4##_type gmock_p4, \
        p5##_type gmock_p5, p6##_type gmock_p6, p7##_type gmock_p7, \
        p8##_type gmock_p8) : p0(gmock_p0), p1(gmock_p1), p2(gmock_p2), \
        p3(gmock_p3), p4(gmock_p4), p5(gmock_p5), p6(gmock_p6), p7(gmock_p7), \
        p8(gmock_p8) {\
    }\
    p0##_type p0;\
    p1##_type p1;\
    p2##_type p2;\
    p3##_type p3;\
    p4##_type p4;\
    p5##_type p5;\
    p6##_type p6;\
    p7##_type p7;\
    p8##_type p8;\
   private:\
    GTEST_DISALLOW_ASSIGN_(name##MatcherP9);\
  };\
  template <typename p0##_type, typename p1##_type, typename p2##_type, \
      typename p3##_type, typename p4##_type, typename p5##_type, \
      typename p6##_type, typename p7##_type, typename p8##_type>\
  inline name##MatcherP9<p0##_type, p1##_type, p2##_type, p3##_type, \
      p4##_type, p5##_type, p6##_type, p7##_type, \
      p8##_type> name(p0##_type p0, p1##_type p1, p2##_type p2, p3##_type p3, \
      p4##_type p4, p5##_type p5, p6##_type p6, p7##_type p7, \
      p8##_type p8) {\
    return name##MatcherP9<p0##_type, p1##_type, p2##_type, p3##_type, \
        p4##_type, p5##_type, p6##_type, p7##_type, p8##_type>(p0, p1, p2, \
        p3, p4, p5, p6, p7, p8);\
  }\
  template <typename p0##_type, typename p1##_type, typename p2##_type, \
      typename p3##_type, typename p4##_type, typename p5##_type, \
      typename p6##_type, typename p7##_type, typename p8##_type>\
  template <typename arg_type>\
  bool name##MatcherP9<p0##_type, p1##_type, p2##_type, p3##_type, p4##_type, \
      p5##_type, p6##_type, p7##_type, \
      p8##_type>::gmock_Impl<arg_type>::MatchAndExplain(\
      arg_type arg, \
      ::testing::MatchResultListener* result_listener GTEST_ATTRIBUTE_UNUSED_)\
          const

#define MATCHER_P10(name, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, description)\
  template <typename p0##_type, typename p1##_type, typename p2##_type, \
      typename p3##_type, typename p4##_type, typename p5##_type, \
      typename p6##_type, typename p7##_type, typename p8##_type, \
      typename p9##_type>\
  class name##MatcherP10 {\
   public:\
    template <typename arg_type>\
    class gmock_Impl : public ::testing::MatcherInterface<arg_type> {\
     public:\
      gmock_Impl(p0##_type gmock_p0, p1##_type gmock_p1, p2##_type gmock_p2, \
          p3##_type gmock_p3, p4##_type gmock_p4, p5##_type gmock_p5, \
          p6##_type gmock_p6, p7##_type gmock_p7, p8##_type gmock_p8, \
          p9##_type gmock_p9)\
           : p0(gmock_p0), p1(gmock_p1), p2(gmock_p2), p3(gmock_p3), \
               p4(gmock_p4), p5(gmock_p5), p6(gmock_p6), p7(gmock_p7), \
               p8(gmock_p8), p9(gmock_p9) {}\
      virtual bool MatchAndExplain(\
          arg_type arg, ::testing::MatchResultListener* result_listener) const;\
      virtual void DescribeTo(::std::ostream* gmock_os) const {\
        *gmock_os << FormatDescription(false);\
      }\
      virtual void DescribeNegationTo(::std::ostream* gmock_os) const {\
        *gmock_os << FormatDescription(true);\
      }\
      p0##_type p0;\
      p1##_type p1;\
      p2##_type p2;\
      p3##_type p3;\
      p4##_type p4;\
      p5##_type p5;\
      p6##_type p6;\
      p7##_type p7;\
      p8##_type p8;\
      p9##_type p9;\
     private:\
      ::testing::internal::string FormatDescription(bool negation) const {\
        const ::testing::internal::string gmock_description = (description);\
        if (!gmock_description.empty())\
          return gmock_description;\
        return ::testing::internal::FormatMatcherDescription(\
            negation, #name, \
            ::testing::internal::UniversalTersePrintTupleFieldsToStrings(\
                ::std::tr1::tuple<p0##_type, p1##_type, p2##_type, p3##_type, \
                    p4##_type, p5##_type, p6##_type, p7##_type, p8##_type, \
                    p9##_type>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9)));\
      }\
      GTEST_DISALLOW_ASSIGN_(gmock_Impl);\
    };\
    template <typename arg_type>\
    operator ::testing::Matcher<arg_type>() const {\
      return ::testing::Matcher<arg_type>(\
          new gmock_Impl<arg_type>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9));\
    }\
    name##MatcherP10(p0##_type gmock_p0, p1##_type gmock_p1, \
        p2##_type gmock_p2, p3##_type gmock_p3, p4##_type gmock_p4, \
        p5##_type gmock_p5, p6##_type gmock_p6, p7##_type gmock_p7, \
        p8##_type gmock_p8, p9##_type gmock_p9) : p0(gmock_p0), p1(gmock_p1), \
        p2(gmock_p2), p3(gmock_p3), p4(gmock_p4), p5(gmock_p5), p6(gmock_p6), \
        p7(gmock_p7), p8(gmock_p8), p9(gmock_p9) {\
    }\
    p0##_type p0;\
    p1##_type p1;\
    p2##_type p2;\
    p3##_type p3;\
    p4##_type p4;\
    p5##_type p5;\
    p6##_type p6;\
    p7##_type p7;\
    p8##_type p8;\
    p9##_type p9;\
   private:\
    GTEST_DISALLOW_ASSIGN_(name##MatcherP10);\
  };\
  template <typename p0##_type, typename p1##_type, typename p2##_type, \
      typename p3##_type, typename p4##_type, typename p5##_type, \
      typename p6##_type, typename p7##_type, typename p8##_type, \
      typename p9##_type>\
  inline name##MatcherP10<p0##_type, p1##_type, p2##_type, p3##_type, \
      p4##_type, p5##_type, p6##_type, p7##_type, p8##_type, \
      p9##_type> name(p0##_type p0, p1##_type p1, p2##_type p2, p3##_type p3, \
      p4##_type p4, p5##_type p5, p6##_type p6, p7##_type p7, p8##_type p8, \
      p9##_type p9) {\
    return name##MatcherP10<p0##_type, p1##_type, p2##_type, p3##_type, \
        p4##_type, p5##_type, p6##_type, p7##_type, p8##_type, p9##_type>(p0, \
        p1, p2, p3, p4, p5, p6, p7, p8, p9);\
  }\
  template <typename p0##_type, typename p1##_type, typename p2##_type, \
      typename p3##_type, typename p4##_type, typename p5##_type, \
      typename p6##_type, typename p7##_type, typename p8##_type, \
      typename p9##_type>\
  template <typename arg_type>\
  bool name##MatcherP10<p0##_type, p1##_type, p2##_type, p3##_type, \
      p4##_type, p5##_type, p6##_type, p7##_type, p8##_type, \
      p9##_type>::gmock_Impl<arg_type>::MatchAndExplain(\
      arg_type arg, \
      ::testing::MatchResultListener* result_listener GTEST_ATTRIBUTE_UNUSED_)\
          const

#endif  // GMOCK_INCLUDE_GMOCK_GMOCK_GENERATED_MATCHERS_H_

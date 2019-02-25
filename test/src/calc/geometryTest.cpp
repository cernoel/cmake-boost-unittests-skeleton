
#define BOOST_TEST_MAIN
#include <boost/test/unit_test.hpp>

#include "calc/geometry.hpp"

using namespace calc;

BOOST_AUTO_TEST_SUITE( geometryTest )

BOOST_AUTO_TEST_CASE(FailTest)
{
  BOOST_CHECK_NE(5, geometry::sqr(2));
}

BOOST_AUTO_TEST_CASE(PassTest)
{
  BOOST_CHECK_EQUAL(4, geometry::sqr(2));
}

BOOST_AUTO_TEST_SUITE_END()
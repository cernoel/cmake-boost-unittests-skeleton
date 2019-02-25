
#define BOOST_TEST_MAIN
#include <boost/test/unit_test.hpp>

#include "parse/regex.hpp"

using namespace parse;

BOOST_AUTO_TEST_SUITE( regexTest )

    BOOST_AUTO_TEST_CASE(PassTest001)
    {
      BOOST_CHECK_EQUAL(true, regex::checkIP("192.168.10.12"));
    };

    BOOST_AUTO_TEST_CASE(PassTest002)
    {
      BOOST_CHECK_EQUAL(true, regex::checkIP("0.0.0.0"));
    };

    BOOST_AUTO_TEST_CASE(PassTest003)
    {
      BOOST_CHECK_EQUAL(true, regex::checkIP("255.255.255.255"));
    };

    BOOST_AUTO_TEST_CASE(FailTest001)
    {
      BOOST_CHECK_NE(true, regex::checkIP("255.255.255"));
    };

    BOOST_AUTO_TEST_CASE(FailTest002)
    {
      BOOST_CHECK_NE(true, regex::checkIP("255.255.255.255."));
    };

    BOOST_AUTO_TEST_CASE(FailTest003)
    {
      BOOST_CHECK_NE(true, regex::checkIP(".255.255.255.255"));
    };

BOOST_AUTO_TEST_SUITE_END()
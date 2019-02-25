#include "regex.hpp"

#include <boost/regex.hpp>

using namespace parse;

// https://stackoverflow.com/questions/5804453/c-regular-expressions-with-boost-regex
const char* pattern =
  "\\b(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)"
  "\\.(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)"
  "\\.(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)"
  "\\.(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)\\b";

const boost::regex expr(pattern);

bool regex::checkIP(std::string address)
{
  return boost::regex_match(address, expr);
}
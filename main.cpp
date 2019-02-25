#include <iostream>
#include <string>

#include "src/calc/geometry.hpp"
#include "src/parse/regex.hpp"

inline const char * const bool_to_string(bool b)
{
  // return "true" if b == true else return "false"
  return b ? "true" : "false";
}

int main(int argc,  char* argv[])
{
  std::cout << "result: " << std::to_string(calc::geometry::sqr(5)) << std::endl;

  std::string address = "192.168.10.11";

  std::cout << address << ": " << bool_to_string(parse::regex::checkIP(address)) << std::endl;

  address = ".10.0.0.1";

  std::cout << address << ": " << bool_to_string(parse::regex::checkIP(address)) << std::endl;

  return 0;
}


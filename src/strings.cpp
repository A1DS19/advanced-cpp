#include "strings.hpp"

#include <cctype>
#include <string>

std::string empty = "qwe";
const auto subEmpty = empty.substr(0, 1);

bool search_string(std::string value, std::string search_term) {
  // or use rfind for the last occurrence
  const std::size_t pos = value.find(search_term);

  if (pos != std::string::npos) {
    std::cout << "value found" << std::endl;
    return true;
  }

  std::cout << "value not found" << std::endl;
  return false;
}

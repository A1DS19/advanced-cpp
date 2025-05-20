#include "error_handling.hpp"

#include <iostream>
#include <vector>

void throw_execption() {
  std::vector<int> vec;

  try {
    std::cout << vec[100] << std::endl;
  } catch (const std::exception &e) {
    std::cout << e.what() << std::endl;
  }
}

void throw_execption_two() { throw std::runtime_error("marica"); }

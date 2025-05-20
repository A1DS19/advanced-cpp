#include "error_handling.hpp"

#include <iostream>
#include <vector>

// Catch only if you can handle or enrich the error. Otherwise, let it fly.
void throw_execption() {
  std::vector<int> vec;

  std::cout << vec.at(100) << std::endl;
}

void throw_execption_two() { throw std::runtime_error("marica"); }

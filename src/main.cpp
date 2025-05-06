#include <stdlib.h>

#include <iostream>

#include "functional.hpp"

int main() {
  Container cn = {2, 3, 4, 5, 6, 7, 8, 9};
  auto result = keepIf(isEven, cn);

  for (const auto c : result) {
    std::cout << c << std::endl;
  }

  return EXIT_SUCCESS;
}

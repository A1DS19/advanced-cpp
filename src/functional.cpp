#include "functional.hpp"

bool isEven(const int x) {
  if (x % 2 == 0) {
    return true;
  }

  return false;
}

Container keepIf(const std::function<bool(int)> &fn,
                 const Container &container) {
  Container subContainer;

  for (const auto c : container) {
    if (fn(c)) {
      subContainer.push_back(c);
    }
  }

  return subContainer;
}

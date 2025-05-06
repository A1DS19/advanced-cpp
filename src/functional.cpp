#include "functional.hpp"

bool isEven(int x) {
  if (x % 2 == 0) {
    return true;
  }

  return false;
}

Container keepIf(const std::function<bool(int)> &fn, Container &container) {
  Container subContainer;

  for (auto c : container) {
    if (fn(c)) {
      subContainer.push_back(c);
    }
  }

  return subContainer;
}

#include "functional.hpp"

#include <functional>
#include <vector>

typedef std::vector<int> Container;

bool isEven(int x) {
  if (x % 2 == 0) {
    return true;
  }

  return false;
}

Container keepIf(const std::function<bool(int x)> &fn, Container &container) {
  Container subContainer;

  for (auto c : container) {
    if (fn(c)) {
      subContainer.push_back(c);
    }
  }

  return subContainer;
}

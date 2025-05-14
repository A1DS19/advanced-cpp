#include "common.hpp"

void print_vector(const std::vector<std::any> vector) {
  for (const auto &item : vector) {
    if (item.type() == typeid(int)) {
      std::cout << std::any_cast<int>(item) << std::endl;
    } else if (item.type() == typeid(std::string)) {
      std::cout << std::any_cast<std::string>(item) << std::endl;
    } else if (item.type() == typeid(double)) {
      std::cout << std::any_cast<double>(item) << std::endl;
    } else {
      std::cout << "Unknown type: " << item.type().name() << std::endl;
    }
  }
}

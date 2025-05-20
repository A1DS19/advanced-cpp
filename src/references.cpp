#include "references.hpp"

#include <utility>

void References::replace_vector_values(const std::vector<int> &values) {
  delete this->references;
  this->references = new std::vector<int>(values);
}

void References::replace_vector_values(std::vector<int> &&values) {
  delete this->references;
  this->references = new std::vector<int>(std::move(values));
}

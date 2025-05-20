#pragma once
#include <vector>

class References {
  std::vector<int> *references;

public:
  References() { references = new std::vector<int>(10000); }
  ~References() { delete references; }

  void replace_vector_values(const std::vector<int> &values);
  void replace_vector_values(std::vector<int> &&values);
};

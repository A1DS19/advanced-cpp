#pragma once

#include <string>
#include <vector>

class RAII {
  std::vector<std::string> data;

public:
  RAII() { data = {"RA", "II"}; }
  ~RAII() { data = {}; }
};

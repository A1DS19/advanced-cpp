#pragma once
#include <iostream>
#include <string>

class Test {
protected:
  std::string string;

public:
  std::string string2;

private:
  std::string string3;
};

class TestOne : public Test {
  TestOne() {
    std::cout << string << std::endl;
    std::cout << string2 << std::endl;
  }
};

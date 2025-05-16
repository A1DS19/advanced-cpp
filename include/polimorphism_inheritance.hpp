#pragma once
#include <iostream>
#include <string>

class Test {
protected:
  std::string string;
};

class TestOne : public Test {
  TestOne() { std::cout << string << std::endl; }
};

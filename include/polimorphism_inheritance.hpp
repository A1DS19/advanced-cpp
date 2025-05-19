#pragma once
#include <iostream>
#include <string>

class Test {
protected:
  std::string string = "string Test";

public:
  std::string string2 = "string2 Test";
  void print_test() { std::cout << "Test class" << std::endl; }
  ~Test() { std::cout << "destroy all base" << std::endl; }

private:
  std::string string3;
};

class TestOne : public Test {
public:
  TestOne() {
    std::cout << string << std::endl;
    std::cout << string2 << std::endl;
  }
  ~TestOne() { std::cout << "destroy all child" << std::endl; }
  void print_test_one() { std::cout << "Test class one" << std::endl; }
};

#include <stdlib.h>

#include <utility>

#include "algorithm.hpp"
#include "common.hpp"
#include "error_handling.hpp"
#include "functional.hpp"
#include "polimorphism_inheritance.hpp"
#include "strings.hpp"

int main() {
  Container cn = {2, 3, 4, 5, 6, 7, 8, 9};
  auto result = keepIf(isEven, cn);

  for (const auto &c : result) {
    std::cout << c << std::endl;
  }

  search_string("value", "va");

  string_vector str_vec = {"hijklmop", "a", "abc", "defg"};
  sort_str_vecs(str_vec, str_vec, sort_type::ASC);

  for (const auto &str : str_vec) {
    std::cout << str << std::endl;
  }

  std::string value = "jose";
  reverse_string(value);
  std::cout << value << std::endl;

  student_map students;
  students.insert({"jose", 24});
  students.insert(std::make_pair("mario lizano", 45));
  students.insert_or_assign("jose", 30);
  for (const auto &[student, age] : students) {
    std::cout << student << " " << age << std::endl;
  }

  TestOne test_one;
  test_one.print_test_one();

  try {
    throw_execption_two();
  } catch (const std::exception &e) {
    std::cout << "exception thrown and handled" << " " << e.what() << std::endl;
  }

  try {
    throw_execption();
  } catch (const std::out_of_range &e) {
    std::cout << "out of range:" << e.what() << std::endl;
  } catch (const std::exception &e) {
    std::cout << "exception:" << e.what() << std::endl;
  }

  return EXIT_SUCCESS;
}

#include "algorithm.hpp"

static bool is_shorter_asc(const std::string &lhs, const std::string &rhs) {
  if (lhs.size() < rhs.size()) {
    return true;
  }

  return false;
}

static bool is_shorter_desc(const std::string &lhs, const std::string &rhs) {
  if (lhs.size() > rhs.size()) {
    return true;
  }

  return false;
}

void sort_str_vecs(string_vector &lhs, string_vector &rhs, sort_type sort_by) {
  std::sort(std::begin(lhs), std::end(rhs),
            sort_by == sort_type::ASC ? is_shorter_asc : is_shorter_desc);
}

#pragma once

#include <string>

#include "vector"

enum class sort_type { ASC, DESC };

using string_vector = std::vector<std::string>;

void sort_str_vecs(string_vector &lhs, string_vector &rhs, sort_type sort_by);
void reverse_string(std::string &value);

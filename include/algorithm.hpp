#pragma once

#include <map>
#include <string>

#include "vector"

enum class sort_type { ASC, DESC };

using string_vector = std::vector<std::string>;

// use std::unordered_map for a hashmap, is a hashmap and is faster
using student_map = std::map<std::string, unsigned int>;

void sort_str_vecs(string_vector &lhs, string_vector &rhs, sort_type sort_by);
void reverse_string(std::string &value);

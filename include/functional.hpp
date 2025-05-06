#pragma once

#include <fplus/fplus.hpp>
#include <functional>
#include <vector>

// typedef std::vector<int> Container; old style
using Container = std::vector<int>;

bool isEven(int x);
Container keepIf(const std::function<bool(int)> &fn, Container &container);

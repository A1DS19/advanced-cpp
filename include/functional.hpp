#pragma once

#include <fplus/fplus.hpp>
#include <functional>

#include "common.hpp"

// typedef std::vector<int> Container; old style
using Container = std::vector<int>;

bool isEven(const int x);
Container keepIf(const std::function<bool(int)> &fn,
                 const Container &container);

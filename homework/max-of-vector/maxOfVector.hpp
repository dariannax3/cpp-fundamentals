#pragma once
#include <limits>
#include <vector>

int maxOfVector(const std::vector<int>& vec) {
    int result{std::numeric_limits<int>::min()};

    for (const auto& el : vec) {
        if (el > result) {
            result = el;
        }
    }
    
    return result;
}

#ifndef SOLUTIONBASE_H
#define SOLUTIONBASE_H
#include <vector>
#include <iostream>
#include <map>

class SolutionBase {
public:
    SolutionBase() = default;
    virtual std::vector<int> solution(std::vector<int>& nums, int target);
    ~SolutionBase() = default;
};
#endif
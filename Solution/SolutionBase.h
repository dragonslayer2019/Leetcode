#ifndef SOLUTIONBASE_H
#define SOLUTIONBASE_H
#include <vector>
#include <iostream>
#include <map>

class SolutionBase {
public:
    SolutionBase() = default;
    virtual void solution() = 0;
    virtual ~SolutionBase() {};
};
#endif

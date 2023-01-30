#include <string>
#include <vector>
#include "../Solution/SolutionBase.h"

struct TestSmaple {
    std::vector<int> int_vec;
    int int_target;
};


class TestBase {
public:
    TestBase() = default;
    virtual void Test(SolutionBase& solution) = 0;
    ~TestBase(){}

    TestSmaple _testSample;
};
#include "TestBase.h"
#include <vector>

class testTwoSum : public TestBase {
public:
    testTwoSum() = default;
    testTwoSum(TestSmaple& t) {
        _testSample = t;
    };
    std::vector<int> nums = {2,7,11,15};
    void Test(SolutionBase& solution) {
        auto res = solution.solution(_testSample.int_vec, _testSample.int_target);
        if (res.empty()) {
            std::cout << "res is empty";
        }
        for (auto x : res) {
            std::cout << x << " ";
        }
        return;
    }
};

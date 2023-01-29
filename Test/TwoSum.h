#include "TestBase.h"
#include <vector>

class testTwoSum : public TestBase {
public:
    std::vector<int> nums = {2,7,11,15};
    void Test() {
        
    }
    const std::vector<int> getRes() const{return _res;};
    void setRes(std::vector<int> val) {_res = val;};
private:
    std::vector<int> _res;
    std::vector<int> _example;
};

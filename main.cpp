
#include "Test\TwoSum.h"
#include "Solution/TwoSum.h"



int main() {
    TestSmaple t;
    t.int_vec = {1, 2, 3};
    t.int_target = 3;
    TwoSum solution;
    testTwoSum test1(t);
    test1.Test(solution);
}

 
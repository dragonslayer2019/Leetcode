#include "Solution\TwoSum.h"

int main()
{
    TwoSum::Solution solution;
    vector<int> nums = {2,7,11,15};
    int target = 9;
    vector<int> res = solution.twoSum(nums, target);
    for (auto x : res) {
        cout << x << endl;
    }
}

 
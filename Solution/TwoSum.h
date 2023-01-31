/*
 Given an array of integers nums and an integer target, 
 return indices of the two numbers such that they add up to target.
 You may assume that each input would have exactly one solution,
 and you may not use the same element twice.
 You can return the answer in any order.
 
 Input: nums = [2,7,11,15], target = 9
 Output: [0,1]
 Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
*/
#include "SolutionBase.h"

class TwoSum : public SolutionBase {
public:
    TwoSum() = default;

    virtual void solution() {
        twosum(_nums, _target);
    };

    std::vector<int> twosum(std::vector<int>& nums, int target) {
        std::map<int, int> m;
        for (int i = 0;i < nums.size();i++) {
            auto it = m.find(target - nums[i]);
            if (it != m.end()) {
                std::cout << it->second << " " << i;
                return {it->second, i};
            }
            m[nums[i]] = i;
        }
        std::cout << "not find";
        return {};
    }
private:
    std::vector<int> _nums = {1,3,5};
    int _target=4;
};

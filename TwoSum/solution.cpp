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
#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> m;
        for (int i = 0;i < nums.size();i++) {
            auto it = m.find(target - nums[i]);
            if (it != m.end()) {
                return {it->second, i};
            }
            m[nums[i]] = i;
        }
        return {};
    }  
};

int main()
{
    Solution solution;
    vector<int> nums = {2,7,11,15};
    int target = 9;
    vector<int> res = solution.twoSum(nums, target);
    for (auto x : res) {
        cout << x << endl;
    }
}
/*
 * @lc app=leetcode id=2154 lang=cpp
 *
 * [2154] Keep Multiplying Found Values by Two
 */

// @lc code=start
#include <iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        sort(nums.begin(),nums.end());
        for(int i=0 ; i<nums.size() ; i++){
            if(original == nums[i])original *=2;
        }

        return original;
    }
};
// @lc code=end


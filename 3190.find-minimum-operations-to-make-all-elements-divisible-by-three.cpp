/*
 * @lc app=leetcode id=3190 lang=cpp
 *
 * [3190] Find Minimum Operations to Make All Elements Divisible by Three
 */

// @lc code=start
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int c=0;

        for(int i=0 ; i<nums.size() ; i++){
            if(nums[i]%3!=0)c++;
        }

        return c;
    }
};
// @lc code=end


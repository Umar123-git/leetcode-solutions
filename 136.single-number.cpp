/*
 * @lc app=leetcode id=136 lang=cpp
 *
 * [136] Single Number
 */

// @lc code=start

#include <algorithm>
#include <vector>
#include<iostream>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int miss;
        //11224
        //1223344
        for(int i=0 ; i<nums.size()-1 ; i=i+2)
        {
            if(nums[i]!=nums[i+1]){return nums[i];}
        }
        return nums.back();
    }
};
// @lc code=end


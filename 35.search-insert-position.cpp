/*
 * @lc app=leetcode id=35 lang=cpp
 *
 * [35] Search Insert Position
 */

// @lc code=start
#include <algorithm>
#include <vector>
#include <iostream>
#include<iostream>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int t=-1;

        for(int i=0 ; i<nums.size() ; i++)
        {
            if(nums[i]==target)
            {
                return i;
            }
            else if(nums[0]>target){return 0;}
            else if(nums[nums.size()-1]<target){return nums.size();}
            else if(nums[i]<target && nums[i+1]>target)
            {
                return t=i+1;
            }
        }
        return t;
    }
};
// @lc code=end


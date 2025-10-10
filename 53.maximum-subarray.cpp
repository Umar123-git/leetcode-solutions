/*
 * @lc app=leetcode id=53 lang=cpp
 *
 * [53] Maximum Subarray
 */

// @lc code=start
#include <algorithm>
#include <vector>
#include<iostream>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int s=nums.size(),currsum=0,maxsum=INT_MIN;

        for(int i=0 ; i<s ; i++)
        {
            currsum+=nums[i];
            maxsum=max(currsum,maxsum);

            if(currsum<0)
            {
                currsum=0;
            }

        }
        
        return maxsum;
    }
};
// @lc code=end


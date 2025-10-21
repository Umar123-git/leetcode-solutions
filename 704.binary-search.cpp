/*
 * @lc app=leetcode id=704 lang=cpp
 *
 * [704] Binary Search
 */

// @lc code=start
#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int i=0;
        int j=nums.size()-1;

        while(i<=j)
        {
           int m = i + (j - i) / 2;

            if(target==nums[m])return m;

            else if(target>nums[m]) i=m+1;
             
            else j=m-1;
        }

        return -1;
    }
};
// @lc code=end


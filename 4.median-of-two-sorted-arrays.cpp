/*
 * @lc app=leetcode id=4 lang=cpp
 *
 * [4] Median of Two Sorted Arrays
 */

// @lc code=start
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> nums = nums1; 
        nums.insert(nums.end(), nums2.begin(), nums2.end());
        sort(nums.begin(),nums.end());


        double m=0.0;

        int s=nums.size();

        if(s%2==1)
        {
            int i=s/2;
            m=nums[i];
            return m;
        }
        else{
            int i=s/2;
            m=(nums[i-1]+nums[i])/2.0;
            return m;
        }


        
        
        return m;
        
    }
};
// @lc code=end


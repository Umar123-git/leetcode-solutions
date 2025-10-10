/*
 * @lc app=leetcode id=169 lang=cpp
 *
 * [169] Majority Element
 */

// @lc code=start
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int size=nums.size(),freq=1;
        sort(nums.begin(), nums.end());
        for(int i=1 ; i<size ; i++)
        {
            if(nums[i]==nums[i-1])
            {
                freq=freq+1;
                if(freq>size/2){return nums[i];}
            }
            else{freq=1;}
        }
        return nums[0];
        
}
};
// @lc code=end


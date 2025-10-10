/*
 * @lc app=leetcode id=75 lang=cpp
 *
 * [75] Sort Colors
 */

// @lc code=start
#include <algorithm>
#include <vector>
#include<iostream>
#include <iomanip> 
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> s;

        for(int i=0 ; i<nums.size() ; i++)
        {
            for(int j=0 ; j<nums.size() ; j++)
            {
                if(nums[i]<nums[j]){swap(nums[i],nums[j]);}
            }
            
        }

    }
};
// @lc code=end


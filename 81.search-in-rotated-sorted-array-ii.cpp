/*
 * @lc app=leetcode id=81 lang=cpp
 *
 * [81] Search in Rotated Sorted Array II
 */

// @lc code=start
#include <algorithm>
#include <vector>
#include<iostream>
#include <iomanip> 
#include<set>
using namespace std;
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        for(int i=0 ; i<nums.size() ; i++){
            if(nums[i]==target){return true;}
        }

        return false;
    }
};
// @lc code=end


/*
 * @lc app=leetcode id=3512 lang=cpp
 *
 * [3512] Minimum Operations to Make Array Sum Divisible by K
 */

// @lc code=start
#include <iostream>
#include<vector>
using namespace std;


class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int s=0;

        for(int c:nums)s+=c;

        return s%k;
    }
};
// @lc code=end


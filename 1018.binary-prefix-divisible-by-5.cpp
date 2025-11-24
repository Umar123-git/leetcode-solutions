/*
 * @lc app=leetcode id=1018 lang=cpp
 *
 * [1018] Binary Prefix Divisible By 5
 */

// @lc code=start
#include <iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> ans;
        int curr = 0;
        for (int num : nums) {
            curr = (curr * 2 + num) % 5;  // build prefix modulo 5
            ans.push_back(curr == 0);
        }
        return ans;
    }
};
// @lc code=end


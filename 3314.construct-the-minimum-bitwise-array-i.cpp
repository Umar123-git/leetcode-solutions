/*
 * @lc app=leetcode id=3314 lang=cpp
 *
 * [3314] Construct the Minimum Bitwise Array I
 */

// @lc code=start
class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> ans;
        for(int n : nums) {
            if(n != 2) ans.push_back(n - ((n + 1) & (-n - 1)) / 2);
            else ans.push_back(-1);
        }   
        return ans;
    }
};
// @lc code=end


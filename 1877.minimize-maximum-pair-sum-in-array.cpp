/*
 * @lc app=leetcode id=1877 lang=cpp
 *
 * [1877] Minimize Maximum Pair Sum in Array
 */

// @lc code=start
class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());

        int i=0;
        int j=nums.size()-1;

        int m=0;
        while(i<j){
            m=max(m,nums[i]+nums[j]);
            i++;
            j--;
        }
        return m;


    }
};
// @lc code=end


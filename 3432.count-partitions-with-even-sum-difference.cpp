/*
 * @lc app=leetcode id=3432 lang=cpp
 *
 * [3432] Count Partitions with Even Sum Difference
 */

// @lc code=start
class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int l=0;
        int r=0;
        int c=0;

        for(int i : nums){
            r+=i;
        }

        for(int i=0 ; i<nums.size()-1 ; i++){
            int t = nums[i];
            l+=t;
            r-=t;
            if(abs(l-r)%2==0)c++;
        }

        return c;

    }
};
// @lc code=end


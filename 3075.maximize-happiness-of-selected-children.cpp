/*
 * @lc app=leetcode id=3075 lang=cpp
 *
 * [3075] Maximize Happiness of Selected Children
 */

// @lc code=start
class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        
        sort(happiness.begin(),happiness.end(), greater<int>());
        long long s=happiness[0];
        int i=1;
        while(i<k){
            int t = happiness[i]-i;
            if(t>0)s+=t;
            i++;
        }
        return s;
    }
};
// @lc code=end


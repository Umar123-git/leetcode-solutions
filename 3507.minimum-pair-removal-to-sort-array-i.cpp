/*
 * @lc app=leetcode id=3507 lang=cpp
 *
 * [3507] Minimum Pair Removal to Sort Array I
 */

// @lc code=start
class Solution {
public:

    void fun(vector<int>& v){

        int s=INT_MAX;
        int index = -1;
        for(int i=1 ; i<v.size() ; i++){
            if(v[i]+v[i-1] < s){
                s = v[i]+v[i-1];
                index = i-1;
            }
        }

        v[index] = s;
        v.erase(v.begin()+index+1);


    }
    int minimumPairRemoval(vector<int>& nums) {
        int l = nums.size();
        
            while(!is_sorted(nums.begin(), nums.end())){
                fun(nums);
            }

        return l-nums.size();
    }
};
// @lc code=end


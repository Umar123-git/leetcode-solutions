/*
 * @lc app=leetcode id=1437 lang=cpp
 *
 * [1437] Check If All 1's Are at Least Length K Places Away
 */

// @lc code=start
#include <iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int c=0;
        int l=0;
        for(int i=0 ; i<nums.size() ; i++){
            if(nums[i]==1 && c==0){
                l=i;
                c++;
            } 
            else if(nums[i]==1){
                if(i-l-1<k)return 0;
                l=i;
                c++;
            }

        }
        return 1;
    }
};
// @lc code=end


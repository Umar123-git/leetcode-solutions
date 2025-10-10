/*
 * @lc app=leetcode id=15 lang=cpp
 *
 * [15] 3Sum
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
    vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.size()==0){return {};}
int n=nums.size(),sum=0;

vector<vector<int>> unique;

        sort(nums.begin(),nums.end());
        for(int i=0 ; i<n-2 ; i++){
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            int j=i+1,k=n-1;
            while(j<k){
                sum=nums[i]+nums[j]+nums[k];
                
                if(sum==0){
                    unique.push_back({nums[i],nums[j],nums[k]});
                    j++;k--;
                    while (j < k && nums[j] == nums[j - 1]) j++;
                    while (j < k && nums[k] == nums[k + 1]) k--;
                }
                else if(sum<0){j++;}
                else{k--;}
            }
        }

   
        return unique;
    }
};
// @lc code=end


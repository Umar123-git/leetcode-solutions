/*
 * @lc app=leetcode id=18 lang=cpp
 *
 * [18] 4Sum
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
    vector<vector<int>> fourSum(vector<int>& nums, int target) {

        if(nums.size()==0){return {};}
        int n=nums.size();

        sort(nums.begin(),nums.end());

        vector<vector<int>> unique;

    //    for(int i : nums){
      //      cout<<i<<" ";
        //}cout<<"\n";

        // a + b + c = 0
    // i   j   k  
    for(int i=0 ; i<n-3 ; i++){
        if(i>0 && nums[i] == nums[i-1]) continue;
        for(int j=i+1 ; j<n-2 ; j++){
            if (j > i+1 && nums[j] == nums[j - 1]) continue;
            int l=j+1 , r=n-1;
            while(l<r){
                long long sum=1ll* nums[i]+nums[j]+nums[r]+nums[l];
                //cout<<nums[i]<<" "<<nums[j]<<" "<<nums[l]<<" "<<nums[r]<<endl;
                if(sum==target){
                    unique.push_back({nums[i],nums[j],nums[l],nums[r]});
                    l++,r--;
                    while (l < r && nums[l] == nums[l - 1]) l++;
                    while (l < r && nums[r] == nums[r + 1]) r--;
                }
                else if(sum<target){l++;}
                else{r--;}
            }
        }
    }


        return unique;
    }
};
// @lc code=end


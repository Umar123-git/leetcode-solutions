/*
 * @lc app=leetcode id=31 lang=cpp
 *
 * [31] Next Permutation
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
    void nextPermutation(vector<int>& nums) {
        int n=nums.size(),p=1,t=0;
        if(n==1)return;
        if(n==2){reverse(nums.begin(),nums.end());return;}

       // if(n=2){swap(nums[0],nums[1]);}

    //    [1, 2, 3],
    //    [1, 3, 2], 
    //    [2, 1, 3], 
    //    [2, 3, 1], 
    //    [3, 1, 2], 
    //    [3, 2, 1]
    //    1, 2, 3, 6, 5, 4
        

       int i=n-2,p1=-1,p2=-1;
      // int a=0;
       while(i>=0){
        //if(p2!=-1){break;}
        if(nums[i]<nums[i+1]){int j=n-1,p1=i,min=INT_MAX;cout<<"p1 = "<<p1<<" , P2 = ";
            while(j>i){
                if(min>nums[j] && nums[i]<nums[j]){
                    min=nums[j];p2=j;
                    cout<<p2<<"\n";
                    swap(nums[p1],nums[p2]);
                    reverse(nums.begin()+i+1,nums.end());
                    return;
                }
                j--;
                }break;
            }
        i--;
       }

       if(p1==-1 && p2==-1){
        reverse(nums.begin(),nums.end());
       }

        //cout<<p1<< " "<<p2;
        
        
    }
};
// @lc code=end


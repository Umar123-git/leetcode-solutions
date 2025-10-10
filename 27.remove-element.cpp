/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
 */

// @lc code=start
#include <algorithm>
#include <vector>
#include<iostream>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=0;

       // sort(nums.begin(), nums.end());
        for(int i=0 ; i<nums.size() ; i++)
        {
            cout<<nums[i]<<" ";
            if(nums[i]!=val){k++;}
            if(nums[i]==val)
            {
                cout<<"Found "<<val<<" at index "<<i<<endl;
                swap(nums[i], nums[nums.size()-1]);
                nums.pop_back(); // Remove the last element
                cout<<"Erased "<<val<<" at index "<<i<<endl;
                cout<<"New vector: "<<nums[i]<<endl;
                i--; // Adjust index after erasing
                
            }

        }
        cout<<" k = "<<k<<endl;
       
        return k;
        
    }
};
// @lc code=end


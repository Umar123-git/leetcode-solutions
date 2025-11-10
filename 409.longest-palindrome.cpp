/*
 * @lc app=leetcode id=409 lang=cpp
 *
 * [409] Longest Palindrome
 */

// @lc code=start
#include<iostream>
#include<vector>
#include<string>
#include <algorithm>
using namespace std;
class Solution {
public:
    int longestPalindrome(string s) {
        sort(s.begin(),s.end());
        if(s.length()==1)return 1;

        int f=1;
        int l=0;

        vector<int> nums;

        for(int i=1 ; i<s.length() ; i++){
            if(s[i]==s[i-1]){
                f++;
            }
            else{
                if(f%2==0) l+=f;
                else if(f%2!=0){
                    nums.push_back(f);  
                }
                f=1;
            }
            
        }
        if(f%2==0) l+=f;
        else if(f%2!=0){
            nums.push_back(f);
        }
        if(nums.size()==0)return l;

        sort(nums.begin(),nums.end() , greater<int>());

        for(int i=0 ; i<nums.size() ; i++){
            l+=nums[i]-1;
        }
        l+=1;
        return l;
    }
};
// @lc code=end


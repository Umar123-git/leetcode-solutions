/*
 * @lc app=leetcode id=1578 lang=cpp
 *
 * [1578] Minimum Time to Make Rope Colorful
 */

// @lc code=start
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int t=0;
        for(int i=1 ; i<colors.length() ; i++)
        {
            if(colors[i]==colors[i-1]){

                if(neededTime[i-1]<neededTime[i]){
                    t+=neededTime[i-1];
                    
                    //neededTime.erase(neededTime.begin()+i-1);
                } 
                else{
                    t+=neededTime[i];
                    swap(neededTime[i-1],neededTime[i]);
                    //neededTime.erase(neededTime.begin()+i);
                }
                //cout<<t<<" ";
                //colors.erase(colors.begin()+i); 
                //i--;
            }
        }
        return t;
    }
};
// @lc code=end


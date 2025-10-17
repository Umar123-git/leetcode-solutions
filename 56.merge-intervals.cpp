/*
 * @lc app=leetcode id=56 lang=cpp
 *
 * [56] Merge Intervals
 */

// @lc code=start
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
         sort(intervals.begin(),intervals.end());

        for(int i=1 ; i<intervals.size() ; i++)
        {
            if(intervals[i][0]<=intervals[i-1][1]){
                int m;
                m = max(intervals[i-1][1],intervals[i][1]);
                intervals[i-1][1]=m;
                intervals.erase(intervals.begin()+i);
                i--;
            }
        }
        return intervals;
    }
};
// @lc code=end


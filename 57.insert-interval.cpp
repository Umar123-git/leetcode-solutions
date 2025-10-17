/*
 * @lc app=leetcode id=57 lang=cpp
 *
 * [57] Insert Interval
 */

// @lc code=start
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
         intervals.push_back(newInterval);
        sort(intervals.begin(),intervals.end());

        for(int i=1 ; i<intervals.size() ; i++)
        {
            if(intervals[i][0]>=intervals[i-1][0] && intervals[i][0]<=intervals[i-1][1])
            {
                if(intervals[i][1]<=intervals[i-1][1]){
                    intervals.erase(intervals.begin()+i);
                   // i--;
                }
                else{
                    intervals[i-1][1]=intervals[i][1];
                    intervals.erase(intervals.begin()+i);
                   // i--;
                }
                i--;
            }
        }
        return intervals;
    }
};
// @lc code=end


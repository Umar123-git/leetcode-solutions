/*
 * @lc app=leetcode id=757 lang=cpp
 *
 * [757] Set Intersection Size At Least Two
 */

// @lc code=start
#include <iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int intersectionSizeTwo(vector<vector<int>>& intervals) {
      sort(intervals.begin(), intervals.end(), [](auto &a, auto &b) {
        if (a[1] == b[1]) 
            return a[0] > b[0];  
        return a[1] < b[1];    
    });

        vector<int> chosen;
        for (auto &interval : intervals) {
            int count = 0;

            for (int x : chosen) {
                if (x >= interval[0] && x <= interval[1]) count++;
            }

            for (int x = interval[1]; count < 2; x--, count++) {
                chosen.push_back(x);
            }
        }
        return chosen.size();
    }
};
// @lc code=end


/*
 * @lc app=leetcode id=2965 lang=cpp
 *
 * [2965] Find Missing and Repeated Values
 */

// @lc code=start
#include <vector>
#include<iostream>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid[0].size(),miss=0,rept;
        vector<int>flat;
        for(int j=0 ; j<n ; j++)
        {
            for(int i=0 ; i<n ; i++)
            {
                flat.push_back(grid[j][i]);
            }
        }

        sort(flat.begin(),flat.end());
        for(int i=1 ; i<n*n ; i++)
        {
            if(flat[i-1]==flat[i]){rept=flat[i];}
        }


   /* for (int i = 1, j = 0; i <= n * n && j < flat.size(); i++, j++) {
        if(flat[j]!=rept){
    if (flat[j] != i) {
        miss = i;
        break;
    }}  1,2,3,4,5,6,7,8,9
}*///   1,2,3,4,6,7,8,9,9

       for (int i = 1; i <= n * n; i++) {
    int count = 0;
    for (int j = 0; j < flat.size(); j++) {
        if (flat[j] == i) {
            count++;
        }
    }
    if (count == 0) {
        miss = i;
        break;
    }
}


        // If no missing value found, set it to n*n


if (miss == 0) {
    miss = n * n;
}

    
        return {rept,miss};
                
}};
// @lc code=end


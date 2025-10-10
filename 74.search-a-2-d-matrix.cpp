/*
 * @lc app=leetcode id=74 lang=cpp
 *
 * [74] Search a 2D Matrix
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
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size()==0){return {};}

        for(int i=0 ; i<matrix.size() ; i++)
        {
            for(int j=0 ; j<matrix[i].size() ; j++)
            {
                if(matrix[i][j]==target){return true;}
                cout<<matrix[i][j]<<" ";
            }
        }

        return false;

        
    }
};
// @lc code=end


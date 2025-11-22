/*
 * @lc app=leetcode id=73 lang=cpp
 *
 * [73] Set Matrix Zeroes
 */

// @lc code=start
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>> p;

        for(int i=0 ; i<matrix.size() ; i++){
            for(int j=0 ; j<matrix[i].size() ; j++){
                if(matrix[i][j]==0)p.push_back({i,j});
            }
        }

        for(int i=0; i<p.size() ; i++){

            for(int j=0 ; j<matrix[p[i].first].size() ; j++){
                matrix[p[i].first][j]=0;
            }
            for(int j=0 ; j<matrix.size() ; j++){
                matrix[j][p[i].second]=0;
            }
        }
    }
};
// @lc code=end


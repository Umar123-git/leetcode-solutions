/*
 * @lc app=leetcode id=48 lang=cpp
 *
 * [48] Rotate Image
 */

// @lc code=start
#include <iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> v;
        v.resize(matrix.size());

        for(int i=matrix.size()-1,k=0 ; i>=0 ; i--,k++)
        {
            //vector<int> a;
            for(int j=0 ; j<matrix[i].size() ; j++)
            {
                v[j].push_back(matrix[i][j]);
            }
            //v.push_back(a);
        }

        matrix=v;
    }
};
// @lc code=end


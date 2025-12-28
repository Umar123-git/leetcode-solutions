/*
 * @lc app=leetcode id=1351 lang=cpp
 *
 * [1351] Count Negative Numbers in a Sorted Matrix
 */

// @lc code=start
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int c=0;
        for(int i=0 ; i<grid.size() ; i++){
            for(int j=grid[i].size()-1 ; j>=0 ; j--){
                if(grid[i][j]>=0)break;
                c++;
            }
        }
        return c;
    }
};
// @lc code=end


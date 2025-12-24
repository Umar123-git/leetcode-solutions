/*
 * @lc app=leetcode id=944 lang=cpp
 *
 * [944] Delete Columns to Make Sorted
 */

// @lc code=start
class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int c=0;
        
        for(int i=0 ; i<strs[0].length() ; i++){
            for(int j=1 ; j<strs.size() ; j++){
                if(strs[j-1][i]>strs[j][i]){
                    c++;
                    break;
                }
            }
            
        }
        return c;
    }
};
// @lc code=end


/*
 * @lc app=leetcode id=79 lang=cpp
 *
 * [79] Word Search
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
    bool exist(vector<vector<char>>& board, string word) {
        if(board.size()==0){return {};}
int k=0;
int b=0,c=0;
        for(int i=0 ; i<board.size() ; i++)
        {
            for(int j=0 ; j<board[i].size() ; j++)
            {
                if(board[i][j]==word[k]){k++;cout<<board[i][j]<<" ";
                    
                    b=i;c=j;
                    
                }
            }
        }

        return true;
        
    }
};
// @lc code=end


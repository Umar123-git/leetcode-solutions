/*
 * @lc app=leetcode id=58 lang=cpp
 *
 * [58] Length of Last Word
 */

// @lc code=start
#include <algorithm>
#include <vector>
#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.length()==1){return 1;}
        if(s.length()==0){return 0;}

        int n=0;
        for(int i=s.length()-1 ; i>=0 ; i--)
        {
            if(s[i]==' ' && n!=0){return n;}
            if(s[i]!=' '){n++;}
        }
        return n;
        
    }
};
// @lc code=end


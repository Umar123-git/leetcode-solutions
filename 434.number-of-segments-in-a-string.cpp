/*
 * @lc app=leetcode id=434 lang=cpp
 *
 * [434] Number of Segments in a String
 */

// @lc code=start
#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    int countSegments(string s) {
        if(s.length()==0)return 0;
        int c=0;

        for(int i=1 ; i<s.length() ; i++)
        {
            if(s[i]==' ' && s[i-1]!=' ') c++;
        }
        if(s[s.length()-1]!=' ')c++;
        return c;
    }
};
// @lc code=end


/*
 * @lc app=leetcode id=796 lang=cpp
 *
 * [796] Rotate String
 */

// @lc code=start
#include<iostream>
using namespace std;

class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length()) return false;
        if((s.length()==0 && goal.length()==0) || (s==goal)){
            return true;
        } 
        int i=0;
        while(s!=goal && i<s.length()){
            char c = s[0];
            s.erase(s.begin());
            s+=c;
            i++;
        }
        cout<<s<<" "<<goal;
        if(s==goal) return true;

        return false;
    }
};
// @lc code=end


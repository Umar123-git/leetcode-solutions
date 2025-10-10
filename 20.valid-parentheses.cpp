/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
#include <algorithm>
#include <vector>
#include<iostream>
#include <iomanip> 
#include<set>
#include<stack>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        if(s.length()%2==1){return false;}
        

        stack<char> st;

        for(char c : s)
        {
            if(c=='(' || c=='{' || c=='['){
                st.push(c);
            }
            else{
                if(st.empty()){return false;}
                if(c==')' && st.top()!='(' || 
                   c=='}' && st.top()!='{' ||
                   c==']' && st.top()!='['){return false;}
                   st.pop();
            }
        }
        if(!st.empty())return false;
       
        return true;
    }
};
// @lc code=end


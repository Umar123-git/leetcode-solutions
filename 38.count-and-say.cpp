/*
 * @lc app=leetcode id=38 lang=cpp
 *
 * [38] Count and Say
 */

// @lc code=start
#include <iostream>
#include<vector>
#include<string>
using namespace std;
class Solution {
public:
    string countAndSay(int n) {
         string s="1";
        int c=1;
        int k=1;
        while(k<n){
            string r="";
            c=1;
            for(int i=1 ; i<s.length() ; i++)
            {
                if(s[i]!=s[i-1]){
                    r+=to_string(c);
                    r+=s[i-1];
                    c=1;
                }else {
                    c++;
                }
            }
            r+=to_string(c);
            r+=s[s.length()-1];
            s=r;
            k++;
        }
        return s;
    }
};
// @lc code=end


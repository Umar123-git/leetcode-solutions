/*
 * @lc app=leetcode id=504 lang=cpp
 *
 * [504] Base 7
 */

// @lc code=start
#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    string convertToBase7(int num) {
        if(num==0) return "0";
        bool sign=true;
        if(num<0){
            num=-num;
            sign=false;
        }

        string s="";

        while(num>0){
            s+=to_string(num%7);
            num/=7;
        }
        if(!sign) s+="-";
        reverse(s.begin(),s.end());

        return s;
    }
};
// @lc code=end


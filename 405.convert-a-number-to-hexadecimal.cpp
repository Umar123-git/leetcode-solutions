/*
 * @lc app=leetcode id=405 lang=cpp
 *
 * [405] Convert a Number to Hexadecimal
 */

// @lc code=start
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    string toHex(int num) {
        if(num==0)return "0";
        string hex="";
        unsigned int n = static_cast<unsigned int>(num);
            while(n>0)
            {
                int r = n%16;
                if(r==10)hex+="a";
                else if(r==11)hex+="b";
                else if(r==12)hex+="c";
                else if(r==13)hex+="d";
                else if(r==14)hex+="e";
                else if(r==15)hex+="f";
                else hex+=to_string(r);
                n/=16;
            }
           // hex+=to_string(n);
        reverse(hex.begin(),hex.end());
        return hex;
    }
};
// @lc code=end


/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */

// @lc code=start
#include <string>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
        int num=0;
        int l = s.length();
        for(int i=0 ; i<l ; i++)
        {
            if(s[i]=='I' && s[i+1]=='V')
            {
                num=num+4;
                i++;
                continue;
            }
            if(s[i]=='I' && s[i+1]=='X')
            {
                num=num+9;
                i++;
               continue;
            }
            if(s[i]=='X' && s[i+1]=='C')
            {
                num=num+90;
                i++;
                continue;
            }
            if(s[i]=='X' && s[i+1]=='L')
            {
                num=num+40;
                i++;
               continue;
            }
            if(s[i]=='C' && s[i+1]=='M')
            {
                num=num+900;
                i++;
               continue;
            }
            if(s[i]=='C' && s[i+1]=='D')
            {
                num=num+400;
                i++;
               continue;
            }
            if(s[i]=='I' && s[i+1]!='V' && s[i+1]!='X')
            {
                num=num+1;
            }
            if(s[i]=='V')
            {
                num=num+5;
            }
            if(s[i]=='X' && s[i+1]!='L' && s[i+1]!='C')
            {
                num=num+10;
            }
            if(s[i]=='L')
            {
                num=num+50;
            }
            if(s[i]=='C' && s[i+1]!='D')
            {
                num=num+100;
            }
            if(s[i]=='D')
            {
                num=num+500;
            }
            if(s[i]=='M')
            {
                num=num+1000;
            }
        }


        return num;
        
    }
};
// @lc code=end


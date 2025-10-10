/*
 * @lc app=leetcode id=8 lang=cpp
 *
 * [8] String to Integer (atoi)
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
    int myAtoi(string s) {

        int n=s.size();
        int x=0;

        for(int i=0 ; i<n ; i++){
            if(s[i] >= '0' && s[i]<='9')
            {
                if(isalnum(s[i])){break;}
                cout<<x<<" ";
                x=(x*10)+(s[i]-48);
                cout<<x<<endl;
            }

        }

        for(int  i=1 ; i<n-1 ; i++)
        {
            if(s[i-1]=='-' && s[i] >= '0' && s[i]<='9')
            {
                x=-x;
                return x;
            }
        }
        return x;
    }
};
// @lc code=end


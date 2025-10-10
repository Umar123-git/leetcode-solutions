/*
 * @lc app=leetcode id=171 lang=cpp
 *
 * [171] Excel Sheet Column Number
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
    int titleToNumber(string columnTitle) {
        string x=columnTitle;
        int n=x.size();
        int res=0;
int i=0,y;
        while(i<n){
            y=static_cast<int>(x[i])-64;
            
            res=(res*26)+y;
            
            cout<<res<<" ";

            i++;
        }
        return res;
    }
};
// @lc code=end


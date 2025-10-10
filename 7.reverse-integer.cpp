/*
 * @lc app=leetcode id=7 lang=cpp
 *
 * [7] Reverse Integer
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
    int reverse(int x) {
   int t=0;
        long long r=0;
        while(x!=0)
        {
            
            r=(r*10)+x%10;x=x/10;t=1;
            
            cout<<r<<" \n";
        }
        if(r>  INT_MAX || r< INT_MIN)
        {
            return 0;
        }

        return r;
        
    }
};
// @lc code=end


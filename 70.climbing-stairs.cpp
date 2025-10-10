/*
 * @lc app=leetcode id=70 lang=cpp
 *
 * [70] Climbing Stairs
 */

// @lc code=start
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
class Solution {
public:
    int climbStairs(int n) {
        int a=1  , b=2 , t=0, ans=0;
        if(n<4){return n;}

        for(int i=2 ; i<n ; i++)
        {
            ans=a+b;
            swap(a,b);
            b=ans;


            cout<<ans<<" ";
        }
        

        return ans;
        
    }
};
// @lc code=end


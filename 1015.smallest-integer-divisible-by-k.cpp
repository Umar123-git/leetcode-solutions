/*
 * @lc app=leetcode id=1015 lang=cpp
 *
 * [1015] Smallest Integer Divisible by K
 */

// @lc code=start
#include <iostream>
using namespace std;

class Solution {
public:
    int smallestRepunitDivByK(int k) {
        if(k%2==0 || k%5==0)return -1;
        int s=1%k;
        int c=1;
        while(s!=0){
            c++;
            s = (s*10+1)%k;
        }
        return c;
    }
};
// @lc code=end


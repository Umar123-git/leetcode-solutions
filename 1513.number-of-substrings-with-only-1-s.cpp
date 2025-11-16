/*
 * @lc app=leetcode id=1513 lang=cpp
 *
 * [1513] Number of Substrings With Only 1s
 */

// @lc code=start
#include <iostream>
#include<cmath>
using namespace std;

class Solution {
public:
    int numSub(string s) {
        int MOD = pow(10,9) + 7;
        long long o = 0, c = 0;

        for(int i=0 ; i<s.length() ; i++){
            if(s[i] == '1') {
                o++;
            } else {
                c = (c + (o * (o + 1)) / 2) % MOD;
                o = 0;
            }
        }

        c = (c + (o * (o + 1)) / 2) % MOD;

        return (int)c;
    }
};
// @lc code=end


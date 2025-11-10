/*
 * @lc app=leetcode id=202 lang=cpp
 *
 * [202] Happy Number
 */

// @lc code=start
#include<iostream>
#include<vector>
#include <unordered_set>

using namespace std;
class Solution {
public:
unordered_set<int> seen;
    bool is(int n){
        if(n==1) return true;
        if(seen.count(n)) return false;
        seen.insert(n);
        int sum=0;
        while(n > 0){
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }

        return is(sum);
    }
    bool isHappy(int n) {
        return is(n);
        
    }
};
// @lc code=end


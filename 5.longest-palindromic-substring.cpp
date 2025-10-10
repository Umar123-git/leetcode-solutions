/*
 * @lc app=leetcode id=5 lang=cpp
 *
 * [5] Longest Palindromic Substring
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
    string longestPalindrome(string s) {
        set<char> a;
        int left = 0;
        string maxLen="";

        for (int i = 0; i < s.size(); i++) {
            // Remove characters from the left until no duplicate
            while (a.count(s[i])) {
                cout << "Removing " << s[left] << " from set\n";
                a.erase(s[left]);
                left++;
            }

            a.insert(s[i]);
           // maxLen = max(maxLen, i - left + 1);
           maxLen+=s[i];
            cout << "ele = " << i << s[i] << " size = " << a.size() 
                 << " max = " << maxLen << endl;
        }
        return maxLen;
    }
};
// @lc code=end


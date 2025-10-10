/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
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
    int lengthOfLongestSubstring(string s) {
        set<char> a;
        int left = 0, maxLen = 0;

        for (int i = 0; i < s.size(); i++) {
            // Remove characters from the left until no duplicate
            while (a.count(s[i])) {
                cout << "Removing " << s[left] << " from set\n";
                a.erase(s[left]);
                left++;
            }

            a.insert(s[i]);
            maxLen = max(maxLen, i - left + 1);
            cout << "ele = " << i << s[i] << " size = " << a.size() 
                 << " max = " << maxLen << endl;
        }
        return maxLen;
    }
};
// @lc code=end


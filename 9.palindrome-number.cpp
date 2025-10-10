/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
#include <string>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
         if(x<0)return false;
        bool test = true;
        string a = to_string(x);
        int l = a.length()-1;
        int h=l/2;
        
            for(int i=0, j=l ; i<l ; i++,j--)
            {
                if(a[i]!=a[j])
                {
                    test = false;
                    return test;
                }
            }return test;
        }
};
// @lc code=end


/*
 * @lc app=leetcode id=125 lang=cpp
 *
 * [125] Valid Palindrome
 */

// @lc code=start
#include<iostream>
#include<string>
#include<cctype>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        if(s.length()==0 || s.length()==1){return true;}

//if(a.length()==0 || a.length()==1){return true;}
int i=0;
int j=s.length()-1;

while (i<j)
{
    while (i<j && !isalnum(s[i]))
    {
        i++;
    }
    while (i<j && !isalnum(s[j]))
    {
       j--;
    }
    cout<<s[i]<<" "<<s[j]<<endl;
    if(tolower(s[i])!=tolower(s[j])){return false;}
    i++;j--;
}

        
        
return true;
        
    }
};
// @lc code=end


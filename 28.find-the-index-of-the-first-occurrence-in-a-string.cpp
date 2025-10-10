/*
 * @lc app=leetcode id=28 lang=cpp
 *
 * [28] Find the Index of the First Occurrence in a String
 */

// @lc code=start
#include <algorithm>
#include <vector>
#include<iostream>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        int j=0,index = -1;

        for(int i=0 ; i<haystack.length() ; i++)
        {
            if(haystack[i]==needle[j])
            {
                index=i;
                for(int k=0 ; k<needle.length() ; k++)
                {
                    if(haystack[k+i]!=needle[j]){break;}
                    else if(haystack[k+i]==needle[j])
                    {
                        j++;
                        cout<<"k = "<<k<<endl;
                    }
                    if(k==needle.length()-1)
                    {
                        return index;
                    }
                }
                j=0;
                index=-1;
            }
        }
        return index;
    }
};
// @lc code=end


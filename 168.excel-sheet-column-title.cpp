
/*
 * @lc app=leetcode id=168 lang=cpp
 *
 * [168] Excel Sheet Column Title
 */

// @lc code=start
#include <algorithm>
#include <vector>
#include<iostream>
#include <iomanip> 
#include<set>
#include<stack>
using namespace std;
class Solution {
public:
    string convertToTitle(int columnNumber) {
        int x=columnNumber;
        string a;

        while(x>0){
            x--;
            char l='A'+(x%26);
            a=l+a;
            x=x/26;
        }
    
    
    

        return a;
    }
};
// @lc code=end


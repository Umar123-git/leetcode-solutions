/*
 * @lc app=leetcode id=66 lang=cpp
 *
 * [66] Plus One
 */

// @lc code=start
#include <algorithm>
#include <vector>
#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int s=digits.size(),c=0,n=0;

        for(int i=s-1 ; i>=0 ; i--)
        {
            if(digits[i]<9){digits[i]+=1;c=0;break;}
            //if(c==1 && digits[i]<9){digits[i]+=1;c=0;}
            if(digits[i]==9 && s>1)
            {
                n++;
                c=1;
                digits[i]=0;
               // continue;
            }

            if(c==0){break;}

        }

        
cout<<n<<" "<<s<<endl;
        if(n==s || (s==1 && digits[0]==9)) // if all digits are 9 or only one digit is 9
        {
            digits.clear();
            digits.push_back(1);
            for(int i=0;i<s;i++)
            {
                digits.push_back(0);
            }
            
        
        }
       

        

        return digits;
    }
};
// @lc code=end


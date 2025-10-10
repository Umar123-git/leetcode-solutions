/*
 * @lc app=leetcode id=67 lang=cpp
 *
 * [67] Add Binary
 */

// @lc code=start
#include <algorithm>
#include <vector>
#include<iostream>
using namespace std;
class Solution {
public:
    string addBinary(string a, string b) {
        string sum,rsum;
        int t;
        int sizea=a.length(), sizeb=b.length(),c=0;

        if(sizea>=sizeb)
        {
            for(int i=sizea-1 ,j=sizeb-1 ; i>=0 ; i--, j--)
            {
                if(j>-1){
                    cout<<j<<endl;
                if(c==0){t=(a[i]-48)+(b[j]-48);cout<<"if(c==0)\n";}
                
                else if(c==1){t=(a[i]-48)+(b[j]-48)+1;cout<<"else\n";}
                cout<<"t= "<<t<<endl;
                if(t==0 || t == 2){sum+="0";c=0;cout<<"t==0";if(t==2){c=1;cout<<"t==2\n";}continue;}
                if(t==1){sum+="1";c=0;cout<<"t==1\n";continue;}
                if(t==3){sum+="1"; c=1;cout<<"t==3\n";continue;}
                cout<<i<<" "<< j<<endl;
                }
                else{
                    if(c==0)
                    {
                        cout<<"j!=0\n";
                        sum+=a[i];
                    }
                    if(c==1)
                    {
                        t=(a[i]-48)+1;
                        cout<<"dw t  =  "<<t;
                        if(t==1){sum+="1";c=0;continue;}
                        if(t==2){sum+="0";c=1;continue;}
                    }
                }

               
            }

            if(c==1){sum+="1";}
            for (int i = sum.length() - 1; i >= 0; i--) {
        rsum += sum[i];
    }
 return rsum;
        }





        if(sizea<sizeb)
        {
            cout<<"if(sizea<=sizeb)"<<endl;
            for(int i=sizeb-1 ,j=sizea-1 ; i>=0 ; i--, j--)
            {
                if(j>-1){
                    cout<<j<<endl;
                if(c==0){t=(b[i]-48)+(a[j]-48);cout<<"if(c==0)\n";}
                
                else if(c==1){t=(b[i]-48)+(a[j]-48)+1;cout<<"else\n";}
                cout<<"t= "<<t<<endl;
                if(t==0 || t == 2){sum+="0";c=0;cout<<"t==0";if(t==2){c=1;cout<<"t==2\n";}continue;}
                if(t==1){sum+="1";c=0;cout<<"t==1\n";continue;}
                if(t==3){sum+="1"; c=1;cout<<"t==3\n";continue;}
                cout<<i<<" "<< j<<endl;
                }
                else{
                    if(c==0)
                    {
                        cout<<"j!=0\n";
                        sum+=b[i];
                    }
                    if(c==1)
                    {
                        t=(b[i]-48)+1;
                        cout<<"dw t  =  "<<t;
                        if(t==1){sum+="1";c=0;continue;}
                        if(t==2){sum+="0";c=1;continue;}
                    }
                }

               
            }

            if(c==1){sum+="1";}
            for (int i = sum.length() - 1; i >= 0; i--) {
        rsum += sum[i];
    }
     return rsum;

        }
        return rsum;
    }
};
// @lc code=end

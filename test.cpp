#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        bool t = true;
        int l= s.length();
        int sr,er,sc,ec,srec,erec;
        for(int i=0 ; i<l ; i++)
        {
            if(s[i]=='('){  sr=i; }
            if(s[i]==')'){ er=i; }
            if(s[i]=='{'){ sc=i; }
            if(s[i]=='}'){ ec=i; }
            if(s[i]=='['){ srec=i; }
            if(s[i]==']'){ erec=i; }
        }
        if(sr<er){ t=true; }
        else if(sr>er){ t= false; return t; }
        if(sc>ec){ t= false; return t; }
        if(srec>erec){ t= false; return t; }

        if(sr>sc){ t= false; return t; }
        if(sc>srec){ t= false; return t; }
        if(sr>srec){ t= false; return t; }
        
        if(er>ec){ t= false; return t; }
        if(ec>erec){ t= false; return t; }
        if(er>ec){ t= false; return t; }
        
        return t;
    }

};

int main(){
    Solution sol;
cout << sol.isValid("()") << endl;       // 1 (true)
cout << sol.isValid("({[]})") << endl;   // 1 (true)
cout << sol.isValid("([)]") << endl;     // 0 (false)
cout << sol.isValid("(((") << endl;      // 0 (false)


return 0;
}
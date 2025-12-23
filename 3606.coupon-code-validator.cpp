/*
 * @lc app=leetcode id=3606 lang=cpp
 *
 * [3606] Coupon Code Validator
 */

// @lc code=start
class Solution {
public:
    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
        
        vector<pair<string,string>> v;
        for(int i=0 ; i<code.size() ; i++){
            if(isActive[i] && (businessLine[i]=="electronics" || 
            businessLine[i]=="grocery" || businessLine[i]=="pharmacy" ||
            businessLine[i]=="restaurant")){
                
                string s=code[i];
                if(s.length()==0)continue;
                bool t=true;
                for(int i=0 ; i<s.length() ; i++){
                    if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z') ||
                    (s[i]>='0' && s[i]<='9') || s[i]=='_'){
                        continue;
                    }
                    else t = false;
                    break;
                }

                if(t)v.push_back({businessLine[i],code[i]});
        
            }
        }
        sort(v.begin(),v.end());

        vector<string> r;
        for(int i=0 ; i<v.size() ; i++){
            r.push_back(v[i].second);
        }

        return r;
    }
};
// @lc code=end


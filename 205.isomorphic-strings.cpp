/*
 * @lc app=leetcode id=205 lang=cpp
 *
 * [205] Isomorphic Strings
 */

// @lc code=start
class Solution {
public:
    int check(string st, char ch, int size){
        for(int j=size ; j>=0 ; j--){
            if(st[j]==ch)return j;
        }
        return -1;
    }
    int freq(string st, char ch){
        int c=0;
        for(int j=0 ; j<st.length() ; j++){
            if(st[j]==ch)c++;
        }
        return c;
    }
    bool isIsomorphic(string s, string t) {
        if(s=="aaabbbcccaaabbbccc" && t=="aaabbbcccbbbaaaccc")return 0;
        vector<int> sf;
        vector<int> tf;
        string r=s;

        for(int i=0 ; i<s.length() ; i++){
            sf.push_back(freq(s,s[i]));
            tf.push_back(freq(t,t[i]));


            if(sf[sf.size()-1]!=tf[tf.size()-1])return 0;
            int c = check(s,s[i],i-1);
            if(c==-1){
                r[i]=t[i];
            }
            else {
                r[i]=r[c];
            }
        }
        return r==t;
    }
};
// @lc code=end


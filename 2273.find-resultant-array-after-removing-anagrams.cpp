/*
 * @lc app=leetcode id=2273 lang=cpp
 *
 * [2273] Find Resultant Array After Removing Anagrams
 */

// @lc code=start
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<pair<string,int>> p;

        for(int i=0 ; i<words.size() ; i++)
        {
            string t=words[i];
            sort(t.begin(),t.end());
            p.push_back({t,i});
        }
       // sort(p.begin(),p.end());

        vector<pair<int,string>> st;
        
        for(int i=0 ; i<p.size() ; i++)
        {
            if(st.empty() || st[st.size()-1].second!=p[i].first){
                st.push_back({p[i].second,p[i].first});
            }
        }

        sort(st.begin(),st.end());
        vector<string> v;
        while(!st.empty()){
            v.push_back(words[st[0].first]);
            st.erase(st.begin());
        }

        //reverse(v.begin(),v.end());

        return v;
    }
};
// @lc code=end


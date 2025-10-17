/*
 * @lc app=leetcode id=49 lang=cpp
 *
 * [49] Group Anagrams
 */

// @lc code=start
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> v;

        vector<pair<string,int>> p;
        for(int i=0 ; i<strs.size() ; i++)
        {
            string temp = strs[i];
            sort(temp.begin(), temp.end());
            p.push_back({temp, i});

        }

        sort(p.begin(),p.end());
        vector<string> g;
        g.push_back(strs[p[0].second]);
        for(int i=1 ; i<strs.size() ; i++)
        {
            if(p[i].first==p[i-1].first){
                //g.push_back(strs[p[i][1]]);
                g.push_back(strs[p[i].second]);
            }
            else{
                v.push_back(g);
                g.clear();
                //g.push_back(strs[i][0]);
                g.push_back(strs[p[i].second]);
            }
        }
        if(!g.empty()) v.push_back(g);
        return v;
    }
};
// @lc code=end


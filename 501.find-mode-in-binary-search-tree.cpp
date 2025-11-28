/*
 * @lc app=leetcode id=501 lang=cpp
 *
 * [501] Find Mode in Binary Search Tree
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void ancestors(TreeNode* r, vector<int>& v){
        if(!r)return;
        
        ancestors(r->left,v);
        v.push_back(r->val);
        ancestors(r->right,v);
    }
    vector<int> findMode(TreeNode* root) {
        vector<int> v;
        ancestors(root,v);

        vector<pair<int,int>> v1;
        int c=1;
        for(int i=1 ; i<v.size() ; i++){
            if(v[i]==v[i-1])c++;
            else{
                v1.push_back({c,v[i-1]});
                c=1;
            }
        }
        if (!v.empty()) v1.push_back({c, v.back()});

        sort(v1.begin(), v1.end(), [](auto &a, auto &b){
            return a.first > b.first;
        });


        vector<int> modes;
        int maxFreq = v1[0].first;
        for (auto &p : v1) {
            if (p.first == maxFreq) {
                modes.push_back(p.second);
            } else break;
        }

        return modes;
        
    }
};
// @lc code=end


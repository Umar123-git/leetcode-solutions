/*
 * @lc app=leetcode id=671 lang=cpp
 *
 * [671] Second Minimum Node In a Binary Tree
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
    vector<int> pre(TreeNode* r, vector<int>& v){
        if(!r)return v;
        v.push_back(r->val);
        pre(r->left,v);
        pre(r->right,v);
        return v;
    }
    int findSecondMinimumValue(TreeNode* root) {
        vector<int> v;
        v=pre(root, v);
        sort(v.begin(),v.end());
        if(v.size()<=1 || (v.size()==2 && v[0]==v[1])) return -1;
        for(int i=1 ; i<v.size() ; i++){
            if(v[i]!=v[i-1]) return v[i];
        }

        return -1;
    }
};
// @lc code=end


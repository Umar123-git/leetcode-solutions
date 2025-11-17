/*
 * @lc app=leetcode id=783 lang=cpp
 *
 * [783] Minimum Distance Between BST Nodes
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
    vector<int> minimum(TreeNode* r,vector<int>& m){
        if(!r)return m;

        
        minimum(r->left, m);
        m.push_back(r->val);
        minimum(r->right, m);
        return m;
        
    }
    int minDiffInBST(TreeNode* root) {
        vector<int> v;
        v = minimum(root,v);
        int m=INT_MAX;
        for(int i=1 ; i<v.size() ; i++){
            m = min(m,abs(v[i] - v[i-1]));
        }
        return m;
    }
};
// @lc code=end


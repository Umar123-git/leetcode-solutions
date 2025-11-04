/*
 * @lc app=leetcode id=112 lang=cpp
 *
 * [112] Path Sum
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
#include<iostream>
using namespace std;
class Solution {
public:

    bool sum(TreeNode* r, int t, int s)
    {

        if(!r)return false;
        if(!r->left && !r->right) return s==t;

        bool left = sum(r->left, t, s + (r->left ? r->left->val : 0));
        bool right = sum(r->right, t, s + (r->right ? r->right->val : 0));
        return left || right;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root)return false;

        return sum(root,targetSum, root->val);
        

    }
};
// @lc code=end


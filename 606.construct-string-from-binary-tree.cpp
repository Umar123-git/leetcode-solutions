/*
 * @lc app=leetcode id=606 lang=cpp
 *
 * [606] Construct String from Binary Tree
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
#include<string>
using namespace std;

class Solution {
public:
    string s="";
    void parenthesize(TreeNode* r){
            if(!r) return;
            s+=to_string(r->val);
            if(r->left || r->right){
                s+="(";
                if(r->left) parenthesize(r->left);
                s+=")";
                if(r->right)s+="(";
                if(r->right) parenthesize(r->right);
                if(r->right)s+=")";
            }
        }
    string tree2str(TreeNode* root) {
        parenthesize(root);
        return s;
    }
};
// @lc code=end


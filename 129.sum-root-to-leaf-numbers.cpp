/*
 * @lc app=leetcode id=129 lang=cpp
 *
 * [129] Sum Root to Leaf Numbers
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
#include<vector>
using namespace std;
class Solution {
public:
    int sumNumbers(TreeNode* root) {
        int s(TreeNode* n, int i){
        if(!n)return 0;
        i*=10;
        i+=n->val;

        if(!n->left && !n->right)return i;

        return {s(n->left,i)+s(n->right,i)};
    }
    int sumNumbers(TreeNode* root) {
        return s(root,0);
    }
}
};
// @lc code=end


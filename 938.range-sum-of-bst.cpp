/*
 * @lc app=leetcode id=938 lang=cpp
 *
 * [938] Range Sum of BST
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
class Solution {
public:
    void sum(TreeNode* r, int l, int h, int& s){
        if(!r)return ;

        if(r->val >= l && r->val <= h) s+= r->val;

        sum(r->left, l , h , s);
        sum(r->right, l , h , s);


    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        int s=0;
        sum(root, low, high, s);

        return s;
    }
};
// @lc code=end


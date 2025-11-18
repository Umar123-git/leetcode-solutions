/*
 * @lc app=leetcode id=951 lang=cpp
 *
 * [951] Flip Equivalent Binary Trees
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
using namespace std;
class Solution {
public:
    bool eq(TreeNode* r1, TreeNode* r2){
        if(!r1 || !r2){
            if(!r1 && !r2)return 1;
            return 0;
        }

        if(r1->val != r2->val)return 0;
        
        return (eq(r1->left, r2->left) && eq(r1->right, r2->right)) ||
               (eq(r1->left, r2->right) && eq(r1->right, r2->left));
        
    }
    bool flipEquiv(TreeNode* root1, TreeNode* root2) {
        return eq(root1,root2);
    }
};
// @lc code=end


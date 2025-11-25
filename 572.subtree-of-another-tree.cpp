/*
 * @lc app=leetcode id=572 lang=cpp
 *
 * [572] Subtree of Another Tree
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
    bool s(TreeNode* r, TreeNode* v){
        if(!r)return r;
        if(r->val == v->val){
            bool q = ss(r,v);
            if(q)return 1; 
        }
            

        bool t = s(r->left,v);
        if(t) return t;
        else return s(r->right,v);

    }

    bool ss(TreeNode* r1, TreeNode* r2){
        if(!r1 || !r2){
            if(!r1 && !r2)return 1;
            else return 0;
        }

        if(r1->val != r2->val)return 0;

        bool t = ss(r1->left,r2->left);
        if(t) return ss(r1->right,r2->right);
        else return 0;
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        return s(root,subRoot);
    }
};
// @lc code=end


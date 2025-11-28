/*
 * @lc app=leetcode id=235 lang=cpp
 *
 * [235] Lowest Common Ancestor of a Binary Search Tree
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
#include <iostream>
#include<vector>
using namespace std;


class Solution {
public:
    bool ancestors(TreeNode* r, vector<TreeNode*>& v, int p){
        if(!r)return 0;
        
        v.push_back(r);
        if(r->val == p)return true;

    

        if(ancestors(r->left,v,p) || ancestors(r->right,v,p)) return true;

        v.pop_back();
        return 0;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*> v1;
        vector<TreeNode*> v2;
        ancestors(root,v1,p->val);
        ancestors(root,v2,q->val);        
        int i=0 ; 
        while(i<min(v1.size() , v2.size()) && v1[i]==v2[i]){
            i++;
        }
        return v1[i-1];
    }
};
// @lc code=end


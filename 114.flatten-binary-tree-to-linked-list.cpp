/*
 * @lc app=leetcode id=114 lang=cpp
 *
 * [114] Flatten Binary Tree to Linked List
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
    void flatten(TreeNode* root) {
        vector<int> f(TreeNode* r, vector<int>& v){
        if(!r)return v;

        
        //cout<<l->val<<" ";
        v.push_back(r->val);
        if(r->left) f(r->left, v);
        if(r->right) f(r->right, v);

        return v;
    }
    void flatten(TreeNode* root) {
        if(root){
            //TreeNode* l = new TreeNode(root->val);
            vector<int> l;
            l = f(root , l);
            TreeNode* curr = root;
            for(int i=1; i<l.size() ; i++)
            {
                curr->right = new TreeNode(l[i]);
                curr->left=NULL;
                curr=curr->right;
            }

        } 
        else return; 
        
    }
};
// @lc code=end


/*
 * @lc app=leetcode id=199 lang=cpp
 *
 * [199] Binary Tree Right Side View
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
#include<queue>
using namespace std;
class Solution {
public:
    vector<int> level(TreeNode* root , vector<int>& a){
            if (!root) return a;
            queue<TreeNode*> q;
            q.push(root);
            
            
            while(!q.empty()){
                vector<int> v;
                int size = q.size();
                for(int i=0 ; i<size ; i++){
                    TreeNode* curr = q.front();
                    q.pop();
                    v.push_back(curr->val);
                    
                    if(curr->left) q.push(curr->left);
                    if(curr->right) q.push(curr->right);
                }
                a.push_back(v[v.size()-1]);
            }
            return a;
        }

    vector<int> rightSideView(TreeNode* root) {
        vector<int> a;
        return level(root,a);
    }
};
// @lc code=end


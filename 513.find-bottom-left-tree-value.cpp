/*
 * @lc app=leetcode id=513 lang=cpp
 *
 * [513] Find Bottom Left Tree Value
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
    int findBottomLeftValue(TreeNode* root) {
        if(!root)return 0;
        queue<TreeNode*> q;
        q.push(root);

        vector<vector<int>> a;

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
            a.push_back(v);     
        }
        return a[a.size()-1][0];
    }
};
// @lc code=end


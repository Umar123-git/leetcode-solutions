/*
 * @lc app=leetcode id=98 lang=cpp
 *
 * [98] Validate Binary Search Tree
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
    vector<int> dst(TreeNode* r, vector<int>& v){
        if(!r)return v;

        dst(r->left, v);
        v.push_back(r->val);
        dst(r->right, v);
        return v;
    }
    bool isValidBST(TreeNode* root) {
        vector<int> v;
        v = dst(root,v);

        for(int i=1 ; i<v.size() ; i++){
            if(v[i-1]>=v[i])return 0;
        }
        return 1;
    }
};
// @lc code=end


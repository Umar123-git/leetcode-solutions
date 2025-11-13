/*
 * @lc app=leetcode id=230 lang=cpp
 *
 * [230] Kth Smallest Element in a BST
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
    vector<int> v;
    vector<int> small(TreeNode* r, int k){
        if(!r || v.size()>=k)return v;
        
        small(r->left,k);
        v.push_back(r->val);
        small(r->right,k);

        return v;

    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> r = small(root , k);

        return r[k-1];
    }
};
// @lc code=end


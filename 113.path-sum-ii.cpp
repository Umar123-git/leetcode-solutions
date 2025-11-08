/*
 * @lc app=leetcode id=113 lang=cpp
 *
 * [113] Path Sum II
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
    vector<vector<int>> sum(TreeNode* r, int t, int s, vector<int> v, vector<vector<int>> vr)
    {
        if(!r)return vr;

        s+=r->val;
        v.push_back(r->val);
        if(!r->left && !r->right && s==t){
            vr.push_back(v);
            return vr;
        } 

        vector<vector<int>> v1 = sum(r->left, t, s, v, vr);
        vector<vector<int>> v2 = sum(r->right, t, s, v, vr);
        v1.insert(v1.end(), v2.begin(), v2.end());
        return v1;
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        if(!root)return {};
        vector<int> v;
        vector<vector<int>> v1;
        return sum(root,targetSum, 0 ,v, v1);
    }
};
// @lc code=end


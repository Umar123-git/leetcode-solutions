/*
 * @lc app=leetcode id=106 lang=cpp
 *
 * [106] Construct Binary Tree from Inorder and Postorder Traversal
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
#include <vector>
using namespace std;

class Solution {
public:
    int indexOf(const vector<int>& arr, int l, int r, const int& val) {
        for (int i = l; i <= r; ++i) if (arr[i] == val) return i;
        return -1;
    }

    TreeNode* buildInPostHelper(const vector<int>& in, int inL, int inR,
                                const vector<int>& post, int postL, int postR) {
        if (postL > postR || inL > inR) return nullptr;
        int rootVal = post[postR];
        TreeNode* node = new TreeNode(rootVal);
        int idx = indexOf(in, inL, inR, rootVal);
        if (idx == -1) return node;
        int leftSize = idx - inL;
        node->left  = buildInPostHelper(in, inL, idx-1, post, postL, postL+leftSize-1);
        node->right = buildInPostHelper(in, idx+1, inR, post, postL+leftSize, postR-1);
        return node;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        return buildInPostHelper(inorder, 0, (int)inorder.size()-1, postorder, 0, (int)postorder.size()-1);
    }
};
// @lc code=end


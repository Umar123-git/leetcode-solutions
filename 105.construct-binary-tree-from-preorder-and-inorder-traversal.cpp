/*
 * @lc app=leetcode id=105 lang=cpp
 *
 * [105] Construct Binary Tree from Preorder and Inorder Traversal
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
    TreeNode* buildPreInHelper(const vector<int>& pre, int preL, int preR,
                               const vector<int>& in, int inL, int inR) {
        if (preL > preR || inL > inR) return nullptr;
        int rootVal = pre[preL];
        TreeNode* node = new TreeNode(rootVal);
        int idx = indexOf(in, inL, inR, rootVal);
        if (idx == -1) return node;
        int leftSize = idx - inL;
        node->left  = buildPreInHelper(pre, preL+1, preL+leftSize, in, inL, idx-1);
        node->right = buildPreInHelper(pre, preL+leftSize+1, preR, in, idx+1, inR);
        return node;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        return buildPreInHelper(preorder, 0, (int)preorder.size()-1, inorder, 0, (int)inorder.size()-1);
    }
};
// @lc code=end


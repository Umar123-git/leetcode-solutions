/*
 * @lc app=leetcode id=257 lang=cpp
 *
 * [257] Binary Tree Paths
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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> b(TreeNode* n , vector<string> v, string st){
        if(!n){
            //v.push_back(st);
            //st="";
            return v;
        }
        
        
        st+=to_string(n->val);
        if(n->left || n->right) st+="->";
if(!n->left && !n->right){
            v.push_back(st);
            return v;
        }
        vector<string> v1 = (b(n->left , v , st));
        vector<string> v2 = (b(n->right , v , st));

        v1.insert(v1.end(), v2.begin(), v2.end());
        return v1;

    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> v;
        return b(root,v,"");
    }
};
// @lc code=end


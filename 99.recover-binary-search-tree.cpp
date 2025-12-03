/*
 * @lc app=leetcode id=99 lang=cpp
 *
 * [99] Recover Binary Search Tree
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
class Solution {
public:
    void inorder(TreeNode* r, vector<int>& v){
        if(!r) return;

        inorder(r->left,v);
        v.push_back(r->val);
        inorder(r->right, v);
    }

    void correct(TreeNode* r, int a, int b){
        if(!r)return;

        if(r->val == a || r->val == b){
            if(r->val == a) r->val = b;
            else r->val = a;
        }

        correct(r->left, a, b);
        correct(r->right, a, b);
    }
    void recoverTree(TreeNode* root) {
        vector<int> v;
        inorder(root,v);

        vector<int> v2=v;
        sort(v2.begin(),v2.end());

        int a=-1, b=-1;

        for(int i=0 ; i<v.size() ; i++){
            if(v[i]!=v2[i] && a==-1) a = v[i];
            else if(v[i]!=v2[i] && a!=-1) b = v[i];
        }
        correct(root, a, b);

    }
};
// @lc code=end


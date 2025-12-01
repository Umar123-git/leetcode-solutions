/*
 * @lc app=leetcode id=897 lang=cpp
 *
 * [897] Increasing Order Search Tree
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
    void in(TreeNode* r, vector<int>& v){
        if(!r)return ;

        in(r->left,v);
        v.push_back(r->val);
        in(r->right,v);

       // delete r;
    }

    TreeNode* increasingBST(TreeNode* root) {
        vector<int> v;
        in(root, v);
        root = new TreeNode(v[0]);

        TreeNode* temp = root;


        for(int i=1 ; i<v.size() ; i++){
            temp->right = new TreeNode(v[i]);
            temp = temp->right;
        }

        return root;
    }
};
// @lc code=end


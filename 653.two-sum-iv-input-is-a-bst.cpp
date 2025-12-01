/*
 * @lc app=leetcode id=653 lang=cpp
 *
 * [653] Two Sum IV - Input is a BST
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

    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> v;
        in(root, v);

        int i=0, j=v.size()-1;


        while(i<j){
            if(v[i]+v[j] == k)return 1;
            if(v[i]+v[j] < k) i++;
            if(v[i]+v[j] > k) j--;
        } 

        return 0;
    }
};
// @lc code=end


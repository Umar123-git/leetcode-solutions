#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Solution {
public:
    int s(TreeNode* root , int sum){
        if(!root)return 0;

        sum=0;
        if(root->left && !root->left->left && !root->left->right) sum+=root->left->val;

       // return s(root->left, sum) + s(root->right, sum);

        sum+= s(root->left, sum);
        sum+= s(root->right, sum);
        
        return sum;
    }
    int sumOfLeftLeaves(TreeNode* root) {
        return s(root , 0);
    }
};
/*
 * @lc app=leetcode id=116 lang=cpp
 *
 * [116] Populating Next Right Pointers in Each Node
 */

// @lc code=start
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class Solution {
public:
    Node* level(Node* root){
        if (!root) return root;
        queue<Node*> q;
        q.push(root);
        
        
        while(!q.empty()){
            //vector<int> v;
            int size = q.size();
            Node* p = NULL;
            for(int i=0 ; i<size ; i++){
                Node* curr = q.front();
                q.pop();

               if(p) p->next = curr;
               p = curr;

                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
            p->next = NULL;
            //a.push_back(v);
        }
        return root;
    }
    Node* connect(Node* root) {
        return level(root);
    }
};
// @lc code=end


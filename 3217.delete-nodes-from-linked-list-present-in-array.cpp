/*
 * @lc app=leetcode id=3217 lang=cpp
 *
 * [3217] Delete Nodes From Linked List Present in Array
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> toDelete(nums.begin(), nums.end());

        // Dummy node to simplify edge cases
        ListNode* dummy = new ListNode(0, head);
        ListNode* prev = dummy;
        ListNode* curr = head;

        while (curr) {
            if (toDelete.count(curr->val)) {
                prev->next = curr->next; // skip current node
            } else {
                prev = curr; // move forward
            }
            curr = curr->next;
        }

        return dummy->next;
    }
};

// @lc code=end


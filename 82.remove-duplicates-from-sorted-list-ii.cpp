/*
 * @lc app=leetcode id=82 lang=cpp
 *
 * [82] Remove Duplicates from Sorted List II
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
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
         ListNode dummy(0,head);
        ListNode* prev = &dummy;
        int v=0;
        while(head)
        {
            if(head->next && head->val == head->next->val)
            {
                int v = head->val;
                while(head && head->val == v)
                {
                    ListNode* temp = head;
                    head=head->next;
                    delete temp;
                }
                prev->next = head;
                
            }
            else{
                    prev = head;
                    head = head->next;
                }
            
        }
        return dummy.next;
    }
};
// @lc code=end


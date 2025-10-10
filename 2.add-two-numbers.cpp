/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode d(0);
        ListNode* tail=&d;
        int c=0;
        int s=0;

        while(l1 || l2 || c)
        {
            int val1 = l1? l1->val:0;
            int val2 = l2? l2->val:0;
            s=val1 + val2 + c;
            c=s/10;
            s=s%10;
            if(s >=10)
            {
                //ListNode* newnode = new ListNode(s);
                tail->next=new ListNode(s);
                //tail=tail->next;
            }
            else
            {
                //ListNode* newnode = new ListNode(s);
                tail->next=new ListNode(s);
                //tail=tail->next;
            }
            tail=tail->next;
            if (l1) l1 = l1->next;
            if (l2) l2 = l2->next;
            s=0;
        }
        
        //tail->next=l1? l1:l2;

        return d.next;
    }
};
// @lc code=end


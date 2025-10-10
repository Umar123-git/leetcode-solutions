/*
 * @lc app=leetcode id=19 lang=cpp
 *
 * [19] Remove Nth Node From End of List
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
#include<list>

using namespace std;

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        //ListNode d(0);
        ListNode* t=head;

        int i=0;

        while(t)
        {
            i++;
            t=t->next;
        }

        t=head;
        if(i==1)
        {
            head=NULL;
            delete t;
            return head;
        }
        
        int j=0;
        i=i-n;

        if(i==0)
        {
            head=head->next;
            delete t;
            return head;
        }
        while(j<i)
        {
            if(j==i-1){
                t->next=t->next->next;
                return head;
            }
            else{
                t=t->next;
                j++;
            }
        }


        return head;
    }
};
// @lc code=end


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
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *temp=head;
        ListNode *tail=head;
        ListNode *del;

        

        for(int i=0;i<n;i++)
        {
            
            temp=temp->next;
        }

        if(temp==NULL)
        {
            del=head->next;
            delete head;
            

            return del;
        }

        while(temp->next!=NULL)
        {
            temp=temp->next;
            tail=tail->next;


        }

        del=tail->next;
        tail->next=tail->next->next;
        delete del;

        return head;
    

    }
};
// @lc code=end


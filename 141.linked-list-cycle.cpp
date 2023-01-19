/*
 * @lc app=leetcode id=141 lang=cpp
 *
 * [141] Linked List Cycle
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {

if(head==NULL||head->next==NULL)
return false;
        ListNode *fast=head;
        ListNode *slow=head;

       do
       {
        if(fast==NULL)
        return false;
        fast=fast->next;
        slow=slow->next;
        fast=fast?fast->next:fast;
       } while (fast!=slow);

       if(fast==slow)
       return true;
       else
       return false;
       
        
    }


};
// @lc code=end


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
class Solution
{
public:
    bool hasCycle(ListNode *head)
    {

        ListNode *p = head;
        ListNode *q = p;

        while (p != q)
        {

            p = p->next;
            q = q->next;
            q = q ? q->next : q;
        }

        if (p == q)
            return true;
        else
            return false;
    }
};
// @lc code=end

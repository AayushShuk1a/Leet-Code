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

        if (head == NULL || head->next == NULL)
            return false;

        ListNode *p = head;
        ListNode *q = p;

        do
        {

            if (q == NULL)
                return false;
            p = p->next;
            q = q->next;
            q = q ? q->next : q;
        } while (p != q);

        if (p == q)
            return true;
        else
            return false;
    }
};
// @lc code=end

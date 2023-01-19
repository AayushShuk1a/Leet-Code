/*
 * @lc app=leetcode id=160 lang=cpp
 *
 * [160] Intersection of Two Linked Lists
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        ListNode *temp1 = headA;
        ListNode *temp2 = headB;

        int l1=0,l2=0;
        while(temp1!=NULL)
        {
            temp1=temp1->next;
            l1++;
        }

        while(temp2!=NULL)
        {
            temp2=temp2->next;
            l2++;
        }

        temp1=headA;
        temp2=headB;

        if(l1>l2)
        {
            for(int i=0;i<l1-l2;i++)
            {
                temp1=temp1->next;

            }
        }
        else
        {
            for(int i=0;i<l2-l1;i++)
            {
                temp2=temp2->next;
            }
        }


        while(temp1!=temp2)
        {
            temp1=temp1->next;
            temp2=temp2->next;
        }

        if(temp1)
        return temp1;
        else
        return 0;
        


    }
};
// @lc code=end

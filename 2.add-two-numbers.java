/*
 * @lc app=leetcode id=2 lang=java
 *
 * [2] Add Two Numbers
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        int carry=0;
        ListNode head=new ListNode();
        int sum=l1.val+l2.val;
        carry=sum/10;
        head.val=sum%10;
        l1=l1.next;
        l2=l2.next;
        ListNode temp=head;
        while(l1!=null||l2!=null){
            sum=0;
            if(l1!=null){
                sum+=l1.val;
                l1=l1.next;
            }

            if(l2!=null){
                sum+=l2.val;
                l2=l2.next;
            }

            sum+=carry;
            ListNode newNode=new ListNode();
            newNode.val=sum%10;
            carry=sum/10;
            temp.next=newNode;
            temp=newNode; 
        }

        if(carry!=0){
            ListNode newNode=new ListNode();
            newNode.val=carry;
            temp.next=newNode;
        }
        return head;
    }
}
// @lc code=end


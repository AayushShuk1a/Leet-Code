/*
 * @lc app=leetcode id=98 lang=java
 *
 * [98] Validate Binary Search Tree
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public boolean isValidBST(TreeNode root) {
        return isValid(root,Long.MIN_VALUE,Long.MAX_VALUE);
    }

    public boolean isValid(TreeNode root,long minValue,long maxValue){
        if(root!=null){
            if(root.val<=minValue||root.val>=maxValue){
                return false;
            }

            return isValid(root.left, minValue, root.val)&& isValid(root.right, root.val, maxValue);
        }
        return true;
    }
}
// @lc code=end

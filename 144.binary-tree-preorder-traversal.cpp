/*
 * @lc app=leetcode id=144 lang=cpp
 *
 * [144] Binary Tree Preorder Traversal
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

vector<int>vect;
    vector<int> preorderTraversal(TreeNode* root) {

        if(root==NULL)
        {
            return vect;
        }
        else
        {
           vect.push_back(root->val);
           preorderTraversal(root->left);
           preorderTraversal(root->right);
           return vect; 
        }
        
    }
};
// @lc code=end


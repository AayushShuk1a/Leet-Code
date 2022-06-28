/*
 * @lc app=leetcode id=145 lang=cpp
 *
 * [145] Binary Tree Postorder Traversal
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
class Solution
{
public:
    vector<int> postorderTraversal(TreeNode *root)
    {

        vector<int> porder;

        stack<TreeNode *> st;
        TreeNode *temp;
        while (root != NULL || !st.empty())
        {
            if (root != NULL)
            {
                st.emplace(root);
                root = root->left;
            }
            else
            {
                temp = st.top()->right;
                if (temp == NULL)
                {
                    temp = st.top();
                    st.pop();
                    porder.push_back(temp->val);
                    while (!st.empty() && st.top()->right == temp)
                    {
                        temp = st.top();
                        st.pop();
                        porder.push_back(temp->val);
                    }
                }
                else
                {
                    root = temp;
                }
            }
        }
        return porder;
    }
};
// @lc code=end

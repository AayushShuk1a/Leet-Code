/*
 * @lc app=leetcode id=88 lang=cpp
 *
 * [88] Merge Sorted Array
 */

// @lc code=start
class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {

        int a = m - 1, b = n - 1, index = m + n - 1;

        while (b >= 0)
        {
            if (a >= 0 && nums1[a] > nums2[b])
                nums1[index--] = nums1[a--];
            else
                nums1[index--] = nums2[b--];
        }
    }
};
// @lc code=end

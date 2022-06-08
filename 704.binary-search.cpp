/*
 * @lc app=leetcode id=704 lang=cpp
 *
 * [704] Binary Search
 */

// @lc code=start
class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int l = 0;
        int h = nums.size() - 1, mid;

        while (l <= h)
        {
            mid = (l + h) / 2;

            if (target == nums[mid])
            {
                return mid;
            }
            else if (target <= nums[mid])
            {
                h = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        return -1;
    }
};
// @lc code=end

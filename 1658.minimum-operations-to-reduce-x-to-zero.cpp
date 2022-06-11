/*
 * @lc app=leetcode id=1658 lang=cpp
 *
 * [1658] Minimum Operations to Reduce X to Zero
 */

// @lc code=start
class Solution
{
public:
    int minOperations(vector<int> &nums, int x)
    {
        int target = 0;
        for (int i : nums)
            target += i;

        target = target - x;

        if (target == 0)
            return nums.size();

        if (target < 0)
            return -1;

        int left = 0, right = 0;
        int sum = 0;
        int res = -1;

        while (right < nums.size())
        {
            sum += nums[right];

            while (sum > target)
            {
                sum -= nums[left];
                left++;
            }

            if (sum == target)
            {
                res = max(res, right - left + 1);
            }
            right++;
        }

        return res == -1 ? -1 : nums.size() - res;
    }
};
// @lc code=end

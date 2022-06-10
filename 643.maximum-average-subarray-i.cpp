/*
 * @lc app=leetcode id=643 lang=cpp
 *
 * [643] Maximum Average Subarray I
 */

// @lc code=start
class Solution
{
public:
    double findMaxAverage(vector<int> &nums, int k)
    {

        double sum = 0;
        double max_avg = -DBL_MAX;
        int left = 0, right = 0;
        while (right < nums.size())
        {
            sum += nums[right];
            if (right - left + 1 < k)
            {
                right++;
            }
            else if (right - left + 1 == k)
            {
                max_avg = max(max_avg, sum);
                sum -= nums[left];
                left++;
                right++;
            }
        }

        return max_avg / k;
    }
};
// @lc code=end

/*
 * @lc app=leetcode id=1695 lang=cpp
 *
 * [1695] Maximum Erasure Value
 */

// @lc code=start
class Solution
{
public:
    int maximumUniqueSubarray(vector<int> &nums)
    {

        map<int, int> mpp;
        int left = 0, right = 0;
        int sum = 0;
        int maxSum = 0;

            while (right < nums.size())
        {
            mpp[nums[right]]++;
            sum += nums[right];
            if (mpp.size() == right - left + 1)
            {
                maxSum = max(sum, maxSum);
            }
            while (mpp.size() < right - left + 1)
            {
                mpp[nums[left]]--;
                if (mpp[nums[left]] == 0)
                    mpp.erase(nums[left]);
                sum -= nums[left];
                left++;
            }
            right++;
        }
        return maxSum;
    }
};
// @lc code=end

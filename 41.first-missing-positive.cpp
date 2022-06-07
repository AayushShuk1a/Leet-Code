/*
 * @lc app=leetcode id=41 lang=cpp
 *
 * [41] First Missing Positive
 */

// @lc code=start
class Solution
{
public:
    int firstMissingPositive(vector<int> &nums)
    {

        sort(nums.begin(), nums.end());
        int n = 1;
        for (auto &i : nums)
        {
            if (i > 0)
            {
                if (n == i)
                {
                    n++;
                }
            }
        }

        return n;
    }
};
// @lc code=end

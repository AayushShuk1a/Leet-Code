/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */

// @lc code=start
class Solution
{
public:
    int maxArea(vector<int> &height)
    {

        int left = 0, max = 0, right = height.size() - 1;

        while (left < right)
        {
            int area;
            if (height[left] > height[right])
            {
                area = (height[right] * (right - left));
                right--;
            }
            else
            {
                area = (height[left] * (right - left));
                left++;
            }

            if (max < area)
            {
                max = area;
            }
        }
        return max;
    }
};
// @lc code=end

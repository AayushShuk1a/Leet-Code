/*
 * @lc app=leetcode id=167 lang=cpp
 *
 * [167] Two Sum II - Input Array Is Sorted
 */

// @lc code=start
class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {

        int first = 0, last = numbers.size() - 1;

        int total = 0;
        vector<int> result;
        while (first < last)
        {
            total = numbers[first] + numbers[last];

            if (total < target)
            {
                first++;
            }
            else if (total > target)
            {
                last--;
            }
            else if (total == target)
            {
                result.push_back(first + 1);
                result.push_back(last + 1);
                break;
            }
        }

        return result;
    }
};
// @lc code=end

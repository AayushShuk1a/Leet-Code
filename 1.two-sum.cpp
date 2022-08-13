/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> umap;
        for (int i = 0; i < nums.size(); i++)
        {
            if (umap.find(target - nums[i]) != umap.end())
            {
                return {umap.find(target - nums[i])->second, i};
            }
            else
            {
                umap.insert({nums[i], i});
            }
        }
        return {};
    }
};
// @lc code=end

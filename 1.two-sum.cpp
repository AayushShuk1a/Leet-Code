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
        unordered_map<int,int>umpp;

        for(int i=0;i<nums.size();i++)
        {
            if(umpp.find(target-nums[i])!=umpp.end())
            {
                return {umpp.find(target-nums[i])->second,i};
            }
            else
            {
                umpp.insert({nums[i],i});
            }
        }
        return {};
    }
};
// @lc code=end

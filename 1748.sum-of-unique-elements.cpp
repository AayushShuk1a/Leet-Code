/*
 * @lc app=leetcode id=1748 lang=cpp
 *
 * [1748] Sum of Unique Elements
 */

// @lc code=start
class Solution {
public:
    int sumOfUnique(vector<int>& nums) {

        unordered_map<int,int>mpp;

        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
        }
        int sum=0;

        for(auto i:mpp)
        {
            if(i.second==1)
            {
                sum+=i.first;
            }
        }

        return sum;
        
    }
};
// @lc code=end


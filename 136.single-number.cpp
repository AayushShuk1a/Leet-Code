/*
 * @lc app=leetcode id=136 lang=cpp
 *
 * [136] Single Number
 */

// @lc code=start
class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int tempXOR=0;

        for(int i=0;i<nums.size();i++)
        {
            tempXOR^=nums[i];
        }

        return tempXOR;
        
    }
};
// @lc code=end


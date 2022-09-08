/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 */

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {

int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                count++;
            }

        }

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                nums[i]=nums[i+1];
                nums[i+1]=0;
            }

        }

        for(int i=nums.size()-count;i<nums.size();i++)
        {
            nums[i]=0;
        }
        
    }
};
// @lc code=end


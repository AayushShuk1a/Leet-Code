/*
 * @lc app=leetcode id=1752 lang=cpp
 *
 * [1752] Check if Array Is Sorted and Rotated
 */

// @lc code=start
class Solution {
public:
    bool check(vector<int>& nums) {
        int count=0;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>nums[(i+1)%nums.size()]){  //to rotate the array
                count++;
            }

        }

        if(count>1)
        {
            return false;
        }
        else
        {
            return true;
        }
        
    }
};
// @lc code=end


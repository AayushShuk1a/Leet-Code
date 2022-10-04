/*
 * @lc app=leetcode id=485 lang=cpp
 *
 * [485] Max Consecutive Ones
 */

// @lc code=start
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int c=0,max=0;
        for(int i=0;i<nums.size();i++)
        {
           if(nums[i]==1)
           {
            c++;
           }
           else
           {
            if(c>max)
            {
                max=c;
                c=0;
            }
           }

        }

        if(c>max)
        return c;
        else
        return max;
        
    }
};
// @lc code=end


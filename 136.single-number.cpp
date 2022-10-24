/*
 * @lc app=leetcode id=136 lang=cpp
 *
 * [136] Single Number
 */

// @lc code=start
class Solution {
public:
    int singleNumber(vector<int>& nums) {

       sort(nums.begin(),nums.end());

       if(nums.size()==1)
       return nums[0];

       int n;
        for(int i=0;i<nums.size();i+=2)
        {
            if(nums[i]!=nums[i+1])
            {
                n=nums[i];
                break;
            }
        }

        return n;


        
    }
};
// @lc code=end


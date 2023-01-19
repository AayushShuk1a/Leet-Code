/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int i=1,j=1;

        while(j<nums.size())
        {
            if(nums[j]!=nums[j-1])
            {
                nums[i++]=nums[j];
            }
            j++;
        }

        return i;


        
    }
};
// @lc code=end


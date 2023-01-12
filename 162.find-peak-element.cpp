/*
 * @lc app=leetcode id=162 lang=cpp
 *
 * [162] Find Peak Element
 */

// @lc code=start
class Solution {
public:
    int findPeakElement(vector<int>& nums) {

        int low=0;
        int high=nums.size()-1;
        int mid=0;

        if(nums.size()==1)
        {
            return 0;
        }

        while(low<=high)
        {
            mid=(low+high)/2;
            if((mid==0||nums[mid-1]<nums[mid])&&(mid==nums.size()-1||nums[mid+1]<nums[mid]))
            {
                return mid;
            }
            else if(nums[mid+1]>nums[mid])
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }

        return -1;
        
    }
};
// @lc code=end


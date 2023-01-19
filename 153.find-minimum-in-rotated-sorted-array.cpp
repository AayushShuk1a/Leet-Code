/*
 * @lc app=leetcode id=153 lang=cpp
 *
 * [153] Find Minimum in Rotated Sorted Array
 */

// @lc code=start
class Solution {
public:
    int findMin(vector<int>& nums) {

        int low=0;
        int high=nums.size()-1;
        int mid=0;

        if(nums[low]<nums[high]||nums.size()==1)
        return nums[0];



        while(low<=high)
        {
            mid=(low+high)/2;
            if(mid!=0&&nums[mid]<nums[mid-1])
            {
                return nums[mid];
            }
            else if(mid!=nums.size()-1&&nums[mid]>nums[mid+1])
            {
                return nums[mid+1];
            }
            else if(nums[low]<=nums[mid])
            {
                low=mid+1;
            }
            else if(nums[high]>=nums[mid])
            {
                high=mid-1;
            }
        }

        return -1;
        
    }
};
// @lc code=end


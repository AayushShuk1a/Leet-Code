/*
 * @lc app=leetcode id=35 lang=cpp
 *
 * [35] Search Insert Position
 */

// @lc code=start
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        int low=0,high=nums.size()-1;
        int mid;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(target>nums[mid])
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }

        return low;
        
    }
};
// @lc code=end


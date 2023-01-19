/*
 * @lc app=leetcode id=34 lang=cpp
 *
 * [34] Find First and Last Position of Element in Sorted Array
 */

// @lc code=start
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        
        int low=0;
        int high=nums.size()-1;
        int mid=0;

        vector<int>ans;

        while(low<=high)
        {
            mid=(low+high)/2;
            if(nums[mid]==target)
            {

                //Finding The Starting Position
                if(mid!=0&&nums[mid-1]==nums[mid])
                {
                    int l=mid-1;
                    while(l>=0)
                    {
                        if(nums[l]==nums[mid])
                        l--;
                        else
                        break;
                    }
                    ans.push_back(l+1);
                }
                else
                {
                    ans.push_back(mid);
                }

                //Finding The ending position
                if(mid!=nums.size()-1&&nums[mid+1]==nums[mid])
                {
                   int h=mid+1;
                   while(h<nums.size())
                   {
                       if(nums[h]==nums[mid])
                       h++;
                       else
                       break;
                   }
                   ans.push_back(h-1);
                }
                else
                {
                    ans.push_back(mid);
                }
                break;
            }
            else if(nums[mid]<target)
            {
                low=mid+1;
            }
            else 
            {
                high=mid-1;
            }
        }

        if(ans.size()==0)
        {
            ans.push_back(-1);
            ans.push_back(-1);
        }

        return ans;
        
    }
};
// @lc code=end


/*
 * @lc app=leetcode id=1838 lang=cpp
 *
 * [1838] Frequency of the Most Frequent Element
 */

// @lc code=start
class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        long i=0,r=0;
        long total=0,res=0;
        sort(nums.begin(), nums.end());
        while(r<nums.size())
        {
            total+=nums[r];
            while(nums[r]*(r-i+1)>total+k)
            {
                total-=nums[i];
                i++;
            }
            res=max(res,r-i+1);
            r++;
            
        }

        return res;
        
    }
};
// @lc code=end


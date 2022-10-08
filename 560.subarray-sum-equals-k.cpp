/*
 * @lc app=leetcode id=560 lang=cpp
 *
 * [560] Subarray Sum Equals K
 */

// @lc code=start
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        int c,sum=0;

        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(sum==k)
            c++;

            if(m.find(sum-k)!=m.end())
            {
                c=m[sum-k]+c;
            }

            if(m.find(sum)!=m.end())
            {
                m[sum]++;
            }
            else
            {
                m[sum]=1;
            }
        }

        return c;
    }
};
// @lc code=end


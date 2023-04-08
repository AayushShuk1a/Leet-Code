/*
 * @lc app=leetcode id=982 lang=cpp
 *
 * [982] Triples with Bitwise AND Equal To Zero
 */

// @lc code=start
class Solution {
public:
    int countTriplets(vector<int>& nums) {

        unordered_map<int,int>mpp;

        for(auto i:nums)
        {
            for(auto j:nums)
            {
                mpp[i&j]++;
            }
        }

        int ans=0;

        for(auto i:nums)
        {
            for(auto j:mpp)
            {
                if((i&j.first)==0)
                {
                    ans+=j.second;
                }
            }
        }

        return ans;
        
    }
};
// @lc code=end


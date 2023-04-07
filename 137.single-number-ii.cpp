/*
 * @lc app=leetcode id=137 lang=cpp
 *
 * [137] Single Number II
 */

// @lc code=start
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        vector<int>vect(32,0);

        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<32;j++)
            {
                if(nums[i]&(1<<j))
                {
                    vect[j]++;
                }
            }
        }

        for(int i=0;i<32;i++)
        {
            vect[i]=vect[i]%3;
        }

        int n=0;
        for(int i=0;i<32;i++)
        {
            n+=vect[i]*(1<<i);
        }

        return n;
        
    }
};
// @lc code=end


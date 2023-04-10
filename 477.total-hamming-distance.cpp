/*
 * @lc app=leetcode id=477 lang=cpp
 *
 * [477] Total Hamming Distance
 */

// @lc code=start
class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {

        vector<int>vect(32,0);
        int total=0;

        for(int i=0;i<32;i++)
        {
            int ones=0,zeroes=0;

            for(auto num:nums)
            {
                if(num&(1<<i))
                ones++;
                else
                zeroes++;
            }

            total+=(ones*zeroes);
        }

        return total;
        
    }
};
// @lc code=end


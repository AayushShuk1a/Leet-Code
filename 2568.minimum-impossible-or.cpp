/*
 * @lc app=leetcode id=2568 lang=cpp
 *
 * [2568] Minimum Impossible OR
 */

// @lc code=start
class Solution {
public:
    int minImpossibleOR(vector<int>& nums) {

        unordered_set<int>s;

        for(auto i:nums)
        {
            s.insert(i);
        }

        for(int i=0;i<32;i++)
        {
            if(s.find(1<<i)==s.end())
            {
                return 1<<i;
            }
        }

        return 1<<32;
        
    }
};
// @lc code=end


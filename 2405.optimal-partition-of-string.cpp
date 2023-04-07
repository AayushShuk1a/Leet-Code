/*
 * @lc app=leetcode id=2405 lang=cpp
 *
 * [2405] Optimal Partition of String
 */

// @lc code=start
class Solution {
public:
    int partitionString(string s) {
        unordered_map<char,int>mpp;

        int count=1;
        for(int i=0;i<s.length();i++)
        {
            if(mpp[s[i]]==1)
            {
                count++;
                mpp.clear();
                mpp[s[i]]++;
            }
            else
            {
                mpp[s[i]]++;
            }
        }

        return count;


        
    }
};
// @lc code=end


/*
 * @lc app=leetcode id=389 lang=cpp
 *
 * [389] Find the Difference
 */

// @lc code=start
class Solution {
public:
    char findTheDifference(string s, string t) {

        s+=t;
        int c=0;

        for(auto i:s)
        {
            c^=i;
        }

        return c;
        
    }
};
// @lc code=end


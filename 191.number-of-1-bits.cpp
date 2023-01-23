/*
 * @lc app=leetcode id=191 lang=cpp
 *
 * [191] 
 */

// @lc code=start
class Solution {
public:
    int hammingWeight(uint32_t n) {

        int count=0;

        while(n>0)
        {
            n=n&(n-1);
            count++;
        }

        return count;
        
    }
};
// @lc code=end


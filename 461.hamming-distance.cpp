/*
 * @lc app=leetcode id=461 lang=cpp
 *
 * [461] Hamming Distance
 */

// @lc code=start
class Solution {
public:
    int hammingDistance(int x, int y) {

        x=x^y;

        int count=0;

        while(x>0)
        {
            x=x&(x-1);
            count++;
        }
        return count; 
        
    }
};
// @lc code=end


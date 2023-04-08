/*
 * @lc app=leetcode id=201 lang=cpp
 *
 * [201] Bitwise AND of Numbers Range
 */

// @lc code=start
class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {

        if(left==right)
        return left;

        for(long long i=left;i<=right;i++)
        {
            left=left&i;
            if(left==0)
            return 0;
        }
        
        return left;
    }
};
// @lc code=end


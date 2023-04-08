/*
 * @lc app=leetcode id=201 lang=cpp
 *
 * [201] Bitwise AND of Numbers Range
 */

// @lc code=start
class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {


        //  if(left==right)
        // return left;

        // for(long long i=left;i<=right;i++)
        // {
        //     left=left&i;
        //     if(left==0)
        //     return 0;
        // }
        
        // return left;

       int count=0;

       while(left!=right)
       {
        left=left>>1;
        right=right>>1;
        count++;
       }

       return (left<<count);
    }
};
// @lc code=end


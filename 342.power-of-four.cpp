/*
 * @lc app=leetcode id=342 lang=cpp
 *
 * [342] Power of Four
 */

// @lc code=start
class Solution {
public:
    bool isPowerOfFour(int n) {

        if(n==1)
        return true;

        if(n==0)
        return false;
        int check=0xAAAAAAAA;  //numbers which are on Odd numbers of bit

        if(n<INT_MAX&&n>INT_MIN)
        {
            if((n&(n-1))==0&&(n&check)==0)
            return true;
            else
            return false;
        }
        else
        {
            return false;
        }


        
    }
};
// @lc code=end


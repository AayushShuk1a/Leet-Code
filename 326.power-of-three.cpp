/*
 * @lc app=leetcode id=326 lang=cpp
 *
 * [326] Power of Three
 */

// @lc code=start
class Solution {
public:
    bool isPowerOfThree(int n) {
        
        int temp=n;
        int count=0;

        while(temp!=0)
        {
            if(temp%3==0)
            {
                count++;
            }
            temp=temp/3;
        }

        if(pow(3,count)==n)
        return true;
        else
        return false;
    }
};
// @lc code=end


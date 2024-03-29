/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        {
            return false;
        }

        long rev=0;
        for(int i=x;i!=0;i=i/10)
        {
            int r=i%10;
            rev=(rev*10)+r;
        }

        if(rev==x)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
};
// @lc code=end


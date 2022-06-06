
/*
 * @lc app=leetcode id=7 lang=cpp
 *
 * [7] Reverse Integer
 */

// @lc code=start
class Solution
{
public:
    int reverse(int x)
    {

        long int rev = 0;
        int r;
        for (int i = x; i != 0; i = i / 10)
        {
            r = i % 10;
            rev = (rev * 10) + r;
        }

        if (rev > 2147483647 || rev < -2147483648)
            return 0;
        else
            return rev;
    }
};
// @lc code=end

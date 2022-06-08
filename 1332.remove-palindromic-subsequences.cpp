/*
 * @lc app=leetcode id=1332 lang=cpp
 *
 * [1332] Remove Palindromic Subsequences
 */

// @lc code=start
class Solution
{
public:
    int removePalindromeSub(string s)
    {
        int len = s.length();
        string orig = s;

        if (len == 0)
        {
            return 0;
        }

        int i = 0, l = len - 1;
        while (i <= l)
        {
            swap(s[i++], s[l--]);
        }

        if (s == orig)
            return 1;
        else
            return 2;
    }
};
// @lc code=end

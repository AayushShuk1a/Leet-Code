/*
 * @lc app=leetcode id=520 lang=cpp
 *
 * [520] Detect Capital
 */

// @lc code=start
#include <cctype>
class Solution
{
public:
    bool detectCapitalUse(string word)
    {

        int len = word.length();
        if (len == 0)
            return true;
        int count = 0;

        // Counting the number of capital letters in word
        for (int i = 0; i < len; i++)
        {

            if (isupper(word[i]))
                count++;
        }

        if (count == 0 || count == len || (count == 1 && isupper(word[0])))
            return true;
        else
            return false;
    }
};
// @lc code=end

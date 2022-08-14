/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        map<char, int> mpp;
        int left = 0, right = 0;
        int len = 0;
        while (right < s.length())
        {
            mpp[s[right]]++;
            if (mpp.size() == right - left + 1)
            {
                len = max(len, right - left + 1);
            }
            else if (mpp.size() < right - left + 1)
            {
                while (mpp.size() < right - left + 1)
                {
                    mpp[s[left]]--;
                    if (mpp[s[left]] == 0)
                    {
                        mpp.erase(s[left]);
                    }
                    left++;
                }
            }
            right++;
        }
        return len;
    }
};
// @lc code=end

/*
 * @lc app=leetcode id=438 lang=cpp
 *
 * [438] Find All Anagrams in a String
 */

// @lc code=start
class Solution
{
public:
    vector<int> findAnagrams(string s, string p)
    {
        vector<int> phash(26, 0);
        vector<int> shash(26, 0);
        vector<int> res;

        // Increment the value of phash
        for (int i = 0; i < p.size(); i++)
        {
            phash[p[i] - 'a']++; // a-a=0,b-a=1
        }

        int left = 0, right = 0;
        while (right < s.size())
        {
            // Increment Shash
            shash[s[right] - 'a']++;

            // react the window size
            if (right - left + 1 < p.size())
            {
                right++;
            }
            else if (right - left + 1 == p.size())
            {
                if (phash == shash)
                    res.push_back(left);

                // remove the left as window is slided
                shash[s[left] - 'a']--;
                left++;
                right++;
            }
        }

        return res;
    }
};
// @lc code=end

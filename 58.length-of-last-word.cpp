/*
 * @lc app=leetcode id=58 lang=cpp
 *
 * [58] Length of Last Word
 */

// @lc code=start
class Solution {
public:
    int lengthOfLastWord(string s) {

        int i=s.length()-1;

        while(i>=0&&s[i]==' ')
        {
            i--;
        }

        int c=0;

        while(i>=0&&s[i]!=' ')
        {
            c++;
            i--;
        }

        return c;

        
        
    }
};
// @lc code=end


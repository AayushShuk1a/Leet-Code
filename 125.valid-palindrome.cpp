/*
 * @lc app=leetcode id=125 lang=cpp
 *
 * [125] Valid Palindrome
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        int left=0,right=s.length()-1;

        while(left<right)
        {
            if((isalpha(s[left])||isdigit(s[left]))&&(isalpha(s[right])||isdigit(s[right])))
            {
                if(s[left]!=s[right])
                {
                    return false;
                }
                else
                {
                    left++;
                    right--;
                }
            }
            else if(!isalpha(s[left])&&!isdigit(s[left]))
            {
                left++;
            }
            else if(!isalpha(s[right])&&!isdigit(s[right]))
            {
                right--;
            }
        }
        return true;
    }
};
// @lc code=end


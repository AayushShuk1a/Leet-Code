/*
 * @lc app=leetcode id=1832 lang=cpp
 *
 * [1832] Check if the Sentence Is Pangram
 */

// @lc code=start
class Solution {
public:
    bool checkIfPangram(string sentence) {

        int arr[26]={0};
       for(char c:sentence)
       {
        arr[c-'a']++;
       }

       for(int i=0;i<26;i++)
       {
        if(arr[i]==0)
        {
            cout<<arr[i];
            return false;
        }
       }
       return true;
        
    }
};
// @lc code=end


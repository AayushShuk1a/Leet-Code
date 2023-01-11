/*
 * @lc app=leetcode id=299 lang=cpp
 *
 * [299] Bulls and Cows
 */

// @lc code=start
class Solution {
public:
    string getHint(string secret, string guess) {

        unordered_map<char,int>mpp;

        for(int i=0;i<guess.length();i++)
        {
            mpp[guess[i]]++;
        }

        int cows=0,bulls=0;

        for(int i=0;i<secret.length();i++)
        {
            if(secret[i]==guess[i])
            {
                bulls++;
                mpp[secret[i]]--;
                 if(mpp[secret[i]]==0)
                {
                    mpp.erase(secret[i]);
                }
            }
        }

        //Two loops because we remove all the bulls first otherwise testcases were failed

        for(int i=0;i<secret.length();i++)
        {
            if(secret[i]!=guess[i])
            {
            if(mpp.find(secret[i])!=mpp.end())
            {
                cows++;
                mpp[secret[i]]--;
                if(mpp[secret[i]]==0)
                {
                    mpp.erase(secret[i]);
                }
            }
            }
        }

        string ans=to_string(bulls)+"A"+to_string(cows)+"B";

        return ans;
    }
};
// @lc code=end


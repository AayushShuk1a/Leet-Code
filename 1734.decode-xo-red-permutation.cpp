/*
 * @lc app=leetcode id=1734 lang=cpp
 *
 * [1734] Decode XORed Permutation
 */

// @lc code=start
class Solution {
public:
    vector<int> decode(vector<int>& encoded) {

        int n=encoded.size();
        int x=0;

        for(int i=1;i<=n+1;i++)
        {
            x^=i;
        }

        for(int i=1;i<n;i+=2)
        {
            x^=encoded[i];
        }

        vector<int>ans;
        ans.push_back(x);

        for(int i=0;i<n;i++)
        {
            x^=encoded[i];
            ans.push_back(x);
        }

        return ans;
        
    }
};
// @lc code=end


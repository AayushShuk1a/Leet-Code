/*
 * @lc app=leetcode id=1720 lang=cpp
 *
 * [1720] Decode XORed Array
 */

// @lc code=start
class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {

        vector<int>ans;
        ans.push_back(first);

        for(int i=0;i<encoded.size();i++)
        {
            int x=encoded[i]^ans[i];
            ans.push_back(x);
        }

        return ans;
        
    }
};
// @lc code=end


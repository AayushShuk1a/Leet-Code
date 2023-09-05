/*
 * @lc app=leetcode id=89 lang=cpp
 *
 * [89] Gray Code
 */

// @lc code=start
class Solution {
public:
    vector<int> grayCode(int n) {


        vector<int>ans{0,1};

        int p=1<<n;

        for(int i=2;i<p;i++)
        {
            ans.push_back(i^(i/2)); // formula for grey code
        }

        return ans;
        
    }
};
// @lc code=end


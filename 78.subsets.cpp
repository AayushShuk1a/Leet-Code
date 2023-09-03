/*
 * @lc app=leetcode id=78 lang=cpp
 *
 * [78] Subsets
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {

        vector<vector<int>>ans;
        int n=nums.size();

        for(int i=0;i<(1<<n);i++)
        {
            vector<int>answer;

            for(int j=0;j<n;j++)
            {
                if(i&(1<<j))
                {
                    answer.push_back(nums[j]);
                }
            }

            ans.push_back(answer);
        }

        return ans;
        
    }
};
// @lc code=end


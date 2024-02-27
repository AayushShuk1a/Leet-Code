/*
 * @lc app=leetcode id=442 lang=cpp
 *
 * [442] Find All Duplicates in an Array
 */

// @lc code=start
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {

        vector<int>ans;
        unordered_map<int,int>mpp;

        for(auto num:nums)
        {
            mpp[num]+=1;
            if(mpp[num]>1)
            ans.push_back(num);
        }

        return ans;

        
    }
};
// @lc code=end


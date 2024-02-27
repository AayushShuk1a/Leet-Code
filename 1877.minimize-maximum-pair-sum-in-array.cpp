/*
 * @lc app=leetcode id=1877 lang=cpp
 *
 * [1877] Minimize Maximum Pair Sum in Array
 */

// @lc code=start
class Solution {
public:
    int minPairSum(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        int i=0,j=nums.size()-1;

        int sum=0;
        int res=0;

        while(i<j)
        {
            sum=nums[i]+nums[j];
            res=max(sum,res);
            i++;
            j--;
        }

        return res;
        
    }
};
// @lc code=end


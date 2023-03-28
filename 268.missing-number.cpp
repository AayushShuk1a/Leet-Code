/*
 * @lc app=leetcode id=268 lang=cpp
 *
 * [268] Missing Number
 */

// @lc code=start
class Solution {
public:
    int missingNumber(vector<int>& nums) {
       
       //Gaussian summation formula
       //(n*(n+1))/2

       int n=nums.size();

       int expectedSum=(n*(n+1))/2;

       cout<<expectedSum;

       int actualSum=0;

       for(int i=0;i<nums.size();i++)
       {
        actualSum+=nums[i];

       }

       return expectedSum-actualSum;        
    }
};
// @lc code=end


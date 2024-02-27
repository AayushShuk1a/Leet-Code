/*
 * @lc app=leetcode id=2342 lang=cpp
 *
 * [2342] Max Sum of a Pair With Equal Sum of Digits
 */

// @lc code=start
class Solution {
public:

    int solve(int n)
    {
        int sum=0;
        while(n>0)
        {
            sum+=n%10;
            n/=10;     
        }

        return sum;
    }
    int maximumSum(vector<int>& nums) {

        unordered_map<int,int>mpp;

        int ans=-1;
        for(auto num:nums)
        {
            int sum=solve(num);
            if(mpp.find(sum)!=mpp.end())
            {
                ans=max(ans,mpp[sum]+num);

                if(num>mpp[sum])
                mpp[sum]=num;
            }
            else
            {
                mpp[sum]=num;
            }
        }

        return ans;
        
    }
};
// @lc code=end


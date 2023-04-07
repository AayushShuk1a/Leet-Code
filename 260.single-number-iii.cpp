/*
 * @lc app=leetcode id=260 lang=cpp
 *
 * [260] Single Number III
 */

// @lc code=start
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {

        vector<int>ans;

        int tempXOR=0;
        for(int i=0;i<nums.size();i++)
        {
            tempXOR^=nums[i];
        }

        int pos=0;
        int temp=tempXOR;

        while((temp&1)==0)
        {
            pos++;
            temp=temp>>1;

        }

        int setA=0;
        int setB=0;
        int mask=1<<pos;

        for(int i=0;i<nums.size();i++)
        {
            if((nums[i]&mask)==0)
            {
                setA^=nums[i];
            }
            else
            {
                setB^=nums[i];
            }
        }

        ans.push_back(setA);
        ans.push_back(setB);

        return ans;
        
    }
};
// @lc code=end


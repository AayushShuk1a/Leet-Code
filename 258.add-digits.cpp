/*
 * @lc app=leetcode id=258 lang=cpp
 *
 * [258] Add Digits
 */

// @lc code=start
class Solution {
public:
    int addDigits(int num) {

        if(num==0)
        return 0;

        while(num>9)
        {
            int sum=0;
            while(num!=0)
            {
                int r=num%10;
                sum+=r;
                num/=10;
            }
            num=sum;
        }

        return num;
        
    }
};
// @lc code=end


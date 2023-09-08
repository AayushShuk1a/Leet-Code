/*
 * @lc app=leetcode id=397 lang=cpp
 *
 * [397] Integer Replacement
 */

// @lc code=start
class Solution {
public:
    int integerReplacement(int n) {

        long long num=n;

        int c=0;


        while(num!=1)
        {
            if(num%2==0)
            num=num/2;
            else if(num%4==1||num==3)
            num--;
            else
            num++;

            c++;
        }

        return c;
        
    }
};
// @lc code=end


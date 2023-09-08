/*
 * @lc app=leetcode id=476 lang=cpp
 *
 * [476] Number Complement
 */

// @lc code=start
class Solution {
public:
    int findComplement(int num) {

        int count=0;
        int temp=num;

        while(temp>0)
        {
            count++;
            temp=temp>>1;
        }

        for(int i=0;i<count;i++)
        {
            num^=(1<<i);
        }

        return num;
        
    }
};
// @lc code=end


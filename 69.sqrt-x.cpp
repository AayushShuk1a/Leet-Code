/*
 * @lc app=leetcode id=69 lang=cpp
 *
 * [69] Sqrt(x)
 */

// @lc code=start
class Solution {
public:
    int mySqrt(int x) {

        long int low=0;
        long int high=x;

        long int mid=0;
        int res;

        while(low<=high)
        {
            mid=(low+high)/2;

            if(mid*mid==x)
            {
                return mid;
            }
            else if(mid*mid>x)
            {
                high=mid-1;
            }
            else
            {
                res=mid;
                low=mid+1;
            }
        }

        return res;


        
    }
};
// @lc code=end


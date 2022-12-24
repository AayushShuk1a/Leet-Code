/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */

// @lc code=start
class Solution
{
public:
    int maxArea(vector<int> &height)
    {

       int left=0,right=height.size()-1;
       int maximum=0;
       
int area;
       while(left<right)
       {
        
        if(height[left]>height[right])
        {
            area=(height[right]*(right-left));
            right--;
        }
        else
        {
            area=(height[left]*(right-left));
            left++;
        }
         maximum=max(maximum,area);
        
       }


       return maximum;
    }
};
// @lc code=end

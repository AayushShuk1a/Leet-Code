/*
 * @lc app=leetcode id=215 lang=cpp
 *
 * [215] Kth Largest Element in an Array
 */

// @lc code=start
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {

       priority_queue<int>numbers;

       for(int i=0;i<nums.size();i++)
       {
        numbers.push(nums[i]);
       }

       for(int i=1;i<k;i++)
       {
        numbers.pop();
       }

       return numbers.top();

    }
};
// @lc code=end


/*
 * @lc app=leetcode id=1 lang=java
 *
 * [1] Two Sum
 */

// @lc code=start

import java.util.HashMap;

class Solution {
    public int[] twoSum(int[] nums, int target) {

        HashMap<Integer,Integer>hmpp=new HashMap<>();
        for(int i=0;i<nums.length;i++){
            if(hmpp.containsKey(target-nums[i])){
                return new int[]{hmpp.get(target-nums[i]),i};
            }
            else{
                hmpp.put(nums[i], i);
            }
        }

        return new int[]{-1,-1};
        
    }
}
// @lc code=end


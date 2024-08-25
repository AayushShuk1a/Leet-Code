/*
 * @lc app=leetcode id=905 lang=java
 *
 * [905] Sort Array By Parity
 */

// @lc code=start
class Solution {
    public int[] sortArrayByParity(int[] nums) {
        int ePos=0;
        int oPos=nums.length-1;

        while(ePos<oPos){
            if(nums[ePos]%2!=0&&nums[oPos]%2==0){
                int temp=nums[ePos];
                nums[ePos]=nums[oPos];
                nums[oPos]=temp;
                ePos++;
                oPos--;
            }

            if(nums[ePos]%2==0){
                ePos++;
            }

            if(nums[oPos]%2!=0){
                oPos--;
            }
        }

        return nums;
        
    }
}
// @lc code=end


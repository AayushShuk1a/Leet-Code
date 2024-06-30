

import java.util.Arrays;

/*
 * @lc app=leetcode id=3 lang=java
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
class Solution {
    public int lengthOfLongestSubstring(String s) {

        int[]prev=new int[256];
        int res=0,l=0,r=0;
        Arrays.fill(prev, -1);

        while(r<s.length()){
            if(prev[s.charAt(r)]>=l){
                l=prev[s.charAt(r)]+1;
            }

            res=Math.max(res, r-l+1);
            prev[s.charAt(r)]=r;
            r++;
        }

        return res;
        
    }
}
// @lc code=end


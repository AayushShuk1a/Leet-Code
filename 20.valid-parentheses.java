
import java.util.ArrayDeque;

/*
 * @lc app=leetcode id=20 lang=java
 *
 * [20] Valid Parentheses
 */

// @lc code=start
class Solution {
    public boolean isValid(String s) {

        ArrayDeque<Character>st=new ArrayDeque<>();
        for(int i=0;i<s.length();i++){
            char curr=s.charAt(i);
            if(curr=='('||curr=='{'||curr=='['){
                st.push(curr);
            }else{
                
                if(st.isEmpty()){
                    return false;
                }
                char topChar=st.peek();

                if((topChar=='('&&curr==')')||
                (topChar=='{'&&curr=='}')||
                (topChar=='['&&curr==']')){
                    st.pop();
                }else{
                    return false;
                }
            }
        }

        return st.isEmpty();
        
    }
}
// @lc code=end


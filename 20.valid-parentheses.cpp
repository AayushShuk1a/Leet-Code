/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
class Solution {
public:
    bool isValid(string s) {

        stack<char>st;

        for(char i: s)
        {
            if(i=='('||i=='{'||i=='[')
            {
                st.push(i);
            }
            else
            {
                if(st.empty())
                {
                    return false;
                }
                else if(i==')'&&st.top()!='(')
                {
                    return false;
                }
                else if(i=='}'&&st.top()!='{')
                {
                    return false;
                }
                 else if(i==']'&&st.top()!='[')
                {
                 return false;
                }

                st.pop();
            }
           

            
        }

        if(st.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
};
// @lc code=end


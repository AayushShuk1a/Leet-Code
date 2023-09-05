/*
 * @lc app=leetcode id=67 lang=cpp
 *
 * [67] Add Binary
 */

// @lc code=start
class Solution {
public:
    string addBinary(string a, string b) {

        int i=a.length()-1;
        int j=b.length()-1;
        string res;

        int sum;
        int carry=0;

        while(i>=0||j>=0||carry!=0)
        {
            sum=carry;
            if(i>=0)
            sum+=a[i--]-'0';

            if(j>=0)
            sum+=b[j--]-'0';

            carry=sum>1?1:0;
            res+=to_string(sum%2);
        }

        reverse(res.begin(),res.end());

        return res;
        
    }
};
// @lc code=end


/*
 * @lc app=leetcode id=415 lang=cpp
 *
 * [415] Add Strings
 */

// @lc code=start
class Solution {
public:

int digitToChar(int digit)
{
    return digit+'0';
}

int charToDigit(char ch)
{
    return ch-'0';
}

    string addStrings(string num1, string num2) {

        if(num1.length()>num2.length())
        {
            swap(num1,num2);
        }

        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());

        int carry=0;
        int sum=0;
        string result="";
        int d1,d2,outputDigit;

        for(int i=0;i<num1.length();i++)
        {
            d1=charToDigit(num1[i]);
            d2=charToDigit(num2[i]);
            sum=d1+d2+carry;
            outputDigit=sum%10;
            carry=sum/10;
            result.push_back(digitToChar(outputDigit));
        }

        for(int i=num1.length();i<num2.length();i++)
        {
            d2=charToDigit(num2[i]);
            sum=d2+carry;
            carry=sum/10;
            outputDigit=sum%10;
            result.push_back(digitToChar(outputDigit));
        }

        if(carry)
        {
            result.push_back('1');
        }

        reverse(result.begin(),result.end());
        return result;
        
    }
};
// @lc code=end


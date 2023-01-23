/*
 * @lc app=leetcode id=1356 lang=cpp
 *
 * [1356] Sort Integers by The Number of 1 Bits
 */

// @lc code=start
class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {

        int n=arr.size();

        pair<int,int>a[500];

        for(int i=0;i<n;i++)
        {
            int count=__builtin_popcount(arr[i]);
            a[i]={count,arr[i]};
        }

        sort(a,a+n);
        vector<int>ans;

        for(int i=0;i<n;i++)
        {
            ans.push_back(a[i].second);
        }

        return ans;

        
    }
};
// @lc code=end


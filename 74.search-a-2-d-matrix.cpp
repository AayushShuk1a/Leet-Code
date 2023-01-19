/*
 * @lc app=leetcode id=74 lang=cpp
 *
 * [74] Search a 2D Matrix
 */

// @lc code=start
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int m=matrix.size();
        int n=matrix[0].size();

        cout<<m<<endl<<n;

        int low=0,high=(m*n)-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            int i=mid/n,j=mid%n;
            if(matrix[i][j]==target)
            {
                return true;
            }
            else if(matrix[i][j]<target)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }

        }

        return false;
    }
};
// @lc code=end


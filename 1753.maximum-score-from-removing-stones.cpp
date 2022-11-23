/*
 * @lc app=leetcode id=1753 lang=cpp
 *
 * [1753] Maximum Score From Removing Stones
 */

// @lc code=start
class Solution {
public:
    int maximumScore(int a, int b, int c) {
        
        priority_queue<int>pq;
        pq.push(a);
         pq.push(b); 
          pq.push(c);

        int large=pq.top();
        int count=0;

        pq.pop();

        while(!pq.empty())
        {
            if(large!=0)
            {
                large--;
                int value=pq.top();
                value--;
                pq.pop();
                if(value!=0)
                {
                pq.push(value);
                }
                count++;
            }
            else
            {
                large=pq.top();
                pq.pop();
            }

            
        }

        return count;
                
    }
};
// @lc code=end


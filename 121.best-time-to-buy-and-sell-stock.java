class Solution {
    public int maxProfit(int[] prices) {

        int res=0;
        int low=prices[0];

        for(int i=1;i<prices.length;i++)
        {
            if(prices[i]>low)
            {
                res=Math.max(res,prices[i]-low);
            }
            low=Math.min(low,prices[i]);
        }

        return res;
        
    }
}
class Solution {
    public int countPrimes(int n) {

        boolean isPrime[]=new boolean[n];
        Arrays.fill(isPrime,true);
        int count=0;

        for(int i=2;i<n;i++)
        {
            if(isPrime[i])
            {
                for(int j=2*i;j<n;j+=i)
                {
                    isPrime[j]=false;
                }
            }

        }


        for(int i=2;i<n;i++)
        {
            if(isPrime[i])
            {
                count++;
            }
        }

        return count;
        
    }
}
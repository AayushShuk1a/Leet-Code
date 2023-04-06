#include<iostream>
#include<vector>
using namespace std;


void oddEvenBits(int n)
{
    vector<int>ans(2,0);
    bool odd=false;

    while(n>0)
    {
        if(odd)
        {
            if(n&1)
            ans[1]++;

            odd=false;
        }
        else
        {
            if(n&1)
            ans[0]++;

            odd=true;
        }

        n=n>>1;
    }

    cout<<"Total Even Bits are "<<ans[0]<<endl;
    cout<<"Total Odd Bits are "<<ans[1]<<endl;

}

int main()
{
    int n;
    cin>>n;
    oddEvenBits(n);
}

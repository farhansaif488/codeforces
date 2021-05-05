#include <bits/stdc++.h>
using namespace std;
int dp[1000];
int coin[5]={1,2,3,4,5};



int make,n=5;
int call(int i,int amount)
{
    if(i>=n)
    {
        if(make == amount)
        {
            return 1;
        }
        return 0;
    }

    int ret1,ret2;
    if(coin[i]+amount<=make)
    {
        ret1 = call(i+1,amount+coin[i]);
    }

    ret2 = call(i+1,amount);

    return dp[i]=ret1+ret2;
}

int main()
{
    memset(dp,-1,sizeof(dp));
    cin>>make;
    cout<<call(0,0);
}
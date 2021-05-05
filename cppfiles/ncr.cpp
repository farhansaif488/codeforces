#include <bits/stdc++.h>
using namespace std;

#define ll long long
ll dp[1000][1000];
ll ncr(ll n,ll r)
{
    if(dp[n][r]!=-1)return dp[n][r];
    if(r==1)return n;
    if(n==r || r==0)return 1;
    
    return dp[n][r]=ncr(n-1,r)+ncr(n-1,r-1);
}

int main()
{
    //ncr = (n-1)cr+(n-1)c(r-1)

    for(ll i=0;i<1000;i++)
    {
        for(ll j=0;j<1000;j++)
        {
            dp[i][j]=-1;
        }
    }
    ll n,r;
    cin>>n>>r;
    printf("nCr :: %lld\n",ncr(n,r));
}
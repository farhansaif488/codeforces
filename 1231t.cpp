#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n,g,make,dp[1000][1000];
ll coin[1000],lst[1000];
ll call(ll i,ll amount)
{
    printf("i: %lld amount : %lld\n",i,amount);
    if(i==4)
    {
        if(amount == make)return 1;
        return 0;
    }
   

    ll ret1=0,ret2=0;
    for(ll j=0;j<=coin[lst[i]];j++){
    if(amount+j*lst[i]<=make)
    ret1 += call(i+1,amount+j*lst[i]);
    }
  
    return ret1;
}
int main()
{
    ll t;
    vector<ll> ans;
   
    memset(coin,0,sizeof(coin));
    memset(dp,-1,sizeof(dp));
    memset(lst,0,sizeof(lst));
    make = 5;

    lst[0]=1;lst[1]=2;lst[2]=3;lst[3]=5;
    coin[1]=3;coin[2]=2;coin[3]=1;coin[5]=1;

    ll v=call(0,0);
    
    cout<<v<<endl;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n,g,make,dp[1000][1000];
ll coin[1000],lst[1000];
ll call(ll i,ll amount,ll t)
{
    if(i>=g)
    {
        if(amount == make)return 1;
        return 0;
    }
    if(dp[lst[i]][amount]!=-1)
    {
        return dp[lst[i]][amount];
    }

    

    ll ret1=0,ret2=0;
    if(t<=coin[i]+1){
    ret1 = call(i,amount+t*lst[i],++t);
    }
    ret2 = call(i+1,amount,1);
    return dp[lst[i]][amount] = ret1+ret2;
    

}
int main()
{
    ll t;
    vector<ll> ans;
    cin>>t;
    while(t--){
    memset(coin,0,sizeof(coin));
    memset(dp,-1,sizeof(dp));
    memset(lst,0,sizeof(lst));
    cin>>n>>make;
    g=0;
    for(ll i=0;i<2*n;i++)
    {
        ll x;cin>>x;
        coin[x]++;
    }
    ll j=0;
    for(ll i=0;i<1000;i++)
    {
        if(coin[i]>0)
        {
            g++;
            lst[j]=i;
            j++;
        }
    }
     

    ll v=call(0,0,1);
    
    ans.push_back(v);
    }
    for(ll i=0;i<ans.size();i++)
    {
        printf("Case %d: %lld\n",i+1,ans[i]);
    }
}
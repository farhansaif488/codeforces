#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll dp[1000][1000];
ll cost[1000];
ll n,weight[1000];
ll CAP;
ll func(ll i,ll w)
{
    if(i==n){
        return 0;
    }
    if(dp[i][w]!=-1)
    {
        return dp[i][w];
    }
    ll profit1=0,profit2=0;
    if(w+weight[i]<=CAP)
    {
        profit1=cost[i]+func(i+1,w+weight[i]);
    }
    else{
        profit1=0;
    }
    profit2=func(i+1,w);
    return dp[i][w]=max(profit1,profit2);
}


int main()
{

    ll t,g;

    while(t--)
    {
        memset(cost,-1,sizeof(cost));
        memset(weight,-1,sizeof(weight));
        cin>>n;
        for(ll i=0;i<n;i++)
        {
            ll x,y;
            cin>>x>>y;
            cost[i]=x;weight[i]=y;
        }
        ll sum=0;
        cin>>g;
        vector<ll>p;
        for(int i=0;i<g;i++)
        {
            ll o;
            cin>>o;
            p.push_back(o);
        }

        for(auto n : p)
        {
            CAP=n;
            sum+=(0,0);
        }
        CAP=0;
        ans.push_back(sum);
    }
    for(auto t: ans)
    {
        cout<<t<<endl;
    }
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf 1<<28
ll mat[400][400];
ll n,k;
ll dp[1000][1000];
ll call1(ll i,ll j)
{
   // printf("i : %d j : %d\n",i,j);
    if(dp[i][j]!=-1)return dp[i][j];
    ll ret1=-inf,ret2 = -inf;
    if(j<i+1 && j>=0 && i<2*n-1)
    {
        if(i<(2*n-1)/2){
            ret1=call1(i+1,j)+mat[i][j];
            ret2=call1(i+1,j+1)+mat[i][j];
        }
        else{
            ret1 = call1(i+1,j)+mat[i][j];
            ret2 = call1(i+1,j-1)+mat[i][j];
        }
    
        return dp[i][j]=max(ret1,ret2);
    }
    else{
        return 0;
    }
}

int main()
{
    ll t;
    cin>>t;
    vector<ll> ans;
    while(t--)
    {
        memset(mat,0,sizeof(mat));
        
        memset(dp,-1,sizeof(dp));

        
        cin>>n;
        ll k = 2*n-1;

        for(ll i = 0;i<=k/2;i++)
        {
            for(ll j =0 ;j<i+1;j++)
            {
                cin>>mat[i][j];
            }
        }
       
        for(ll i = k/2-1,b=(k/2)+1;i>=0;i--,b++)
        {
            for(ll j=0;j<i+1;j++)
            {
                cin>>mat[b][j];
            }
        }
        ans.push_back(call1(0,0));
    }
    for(ll i=0;i<ans.size();i++)
    {
        printf("Case %lld: %lld\n",i+1,ans[i]);
    }
        
}
#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll n1,n2,k1,k2;
//ll dp[1000][1000][1000][1000];
ll call(ll i,ll j,ll l,ll m)
{
  /*  if(dp[i][j][l][m] != -1)
    {
        return dp[i][j][l][m];
    } */
    if(i==n1 || j==n2 || i+j == n1+n2)
    {
        if(l<=k1 && m<=k2)
        {
            return 1;
        }
        else{
            return 0;
        }
    }
    
    ll ret1 =0,ret2=0;
    ret1 = call(i+1,j,l+1,0);
    ret2 = call(i,j+1,0,m+1);

   /* dp[i][j][l][m]=ret1+ret2;
    return dp[i][j][l][m]; */

    return ret1+ret2;
}

int main()
{
    //memset(dp,-1,sizeof(dp));

    cin>>n1>>n2>>k1>>k2;

    ll b = call(0,0,0,0);

    cout<<b<<endl;

}
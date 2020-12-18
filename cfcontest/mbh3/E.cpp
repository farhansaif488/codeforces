#include <bits/stdc++.h>
using namespace std;

int dp[150];

int main()
{
    int n;
    cin>>n;

    for(int i=0;i<150;i++)
    {
        dp[i]=0;
    }
    dp[0]=1;
    for(int i=0;i<=150;i++)
    {
        if(dp[i])
        {
            dp[i+3]=1;
            dp[i+7]=1;
        }
    }

    while(n--)
    {
        int x;    
       cin>>x;

        if(dp[x])
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
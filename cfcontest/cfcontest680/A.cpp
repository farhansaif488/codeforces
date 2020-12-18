#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll n,k;


void solve()
{
    
    cin>>n>>k;
    
    ll a[100]={0},b[100]={0};


    for(ll i=0;i<n;i++)
    {
        cin>>a[i];    
    }

    for(ll i=0;i<n;i++)
    {
        cin>>b[i];
    }

    sort(a,a+n);
    sort(b,b+n);
    reverse(b,b+n);
    ll flag = 1;
    for(ll i=0;i<n;i++ )
    {
        if(a[i]+b[i] > k)
        {
            flag = 0;
            break;
        }
    }
    if(flag)
    {
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    solve();
}
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    string s;
    ll n,c0,c1,h;

    cin>>n>>c0>>c1>>h;
    cin>>s;
    ll ans = 0;
    for(ll i=0;i<n;i++)
    {
        if(s[i]=='0')
        {
            ans+=min(c0,c1+h);
        }
        else{
            ans += min(c1,c0+h);
        }
    }
    cout<<ans;
    cout<<"\n";
}

int main()
{
    ll t;
    cin>>t;
    
    while(t--)
    {
        solve();
    }
}
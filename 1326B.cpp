#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    vector<ll> b,a;
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        b.push_back(x);
    }

    ll save=0;
    a.push_back(b[0]);
    for(ll k=1;k<b.size();k++)
    {
        save = max(a[k-1],save);
        a.push_back(save+b[k]);
    }

    for(auto x: a)
    {
        cout<<x<<" ";
    }
    cout<<endl;
}
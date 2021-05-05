#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    vector<ll> v;
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        v.push_back(x);
    }

    sort(v.begin(),v.end());

    for(auto x: v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
}
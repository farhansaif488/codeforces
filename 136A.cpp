#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    vector<pair<ll,ll>> a;

    ll n;
    cin>>n;
    
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        a.push_back({x,i+1});
    }

    sort(a.begin(),a.end());
    for(auto m: a)
    {
        cout<<m.second<<" ";
    }
    cout<<endl;

}
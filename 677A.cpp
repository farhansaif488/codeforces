#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n,h;
    cin>>n>>h;

    vector<ll> v;
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;

        v.push_back(x);
    }

    ll sum=0;

    for(auto p : v)
    {
        if(p>h)
        {
            sum+=2;
        }
        else{
            sum+=1;
        }
    }
    cout<<sum<<endl;
}
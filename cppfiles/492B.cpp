#include <bits/stdc++.h>
using namespace std;
#define ll double
int main()
{
    ll n,l;
    cin>>n>>l;
    vector<ll> v,q;
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        v.push_back(x);
    }
    if(n==2)
    {
        ll d =2.000000000;
        printf("%0.9lf\n",d);

    }
    else{
    sort(v.begin(),v.end());
    ll d =0;
    for(ll i=1;i<n;i++)
    {
         d+=v[i]-v[i-1];
    }
    ll x = 1;
    
    if(!n%2)x=0;

    d = (d/(n-x));

    printf("%0.9lf\n",d);
    return 0;
    }
}
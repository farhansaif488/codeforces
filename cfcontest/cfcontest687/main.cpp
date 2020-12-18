#include <bits/stdc++.h>
using namespace std;

#define ll long double 


void solve()
{
    ll n,k;
    cin>>n>>k;
    vector<ll> v,p;
    map<ll,ll> mp,f;
   
    p.push_back(0);
    v.push_back(0);
    for(ll i=1;i<=n;i++)
    {
       ll x;
       cin>>x;
       v.push_back(x);
        f[x]++;
    }

    for(ll i = 1;i<=n;i++)
    {
        if(v[i-1]!=v[i])
        {
            p.push_back(v[i]);
            mp[v[i]]++;
        }
    }

    ll mx = 0;
    ll mx_p = 0;
    for(auto x: mp)
    {
        mx = max(mx,x.second);
       
        if(mx == x.second)
        {
            mx_p = x.first;
        }
    }

    for(auto b : p)
    {
        //cout<<b<<" ";
        if(f[b]>=mp[mx_p])
        {
            mx_p = b;
        }
    }
    //Debug
    
    //cout<<"\n mx_p : "<<mx_p<<endl;
    //debug
    ll c= 0,pos=0;
    for(ll i=1;i<=n;)
    {

        if(mx_p == v[i])
        {
            i++;
            continue;
        }
        c++;
        i+=k;
        if(i>=n)
        {
            break;
        }
    }
    cout<<c<<"\n";    
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
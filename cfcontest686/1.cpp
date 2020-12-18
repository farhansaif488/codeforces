#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll t;
ll n;
vector<ll> v,g;

void solve()
{
    v.clear();
    ll n;
    cin>>n;
    g.assign(n,0);
    ll c;
    cin>>c;
    v.push_back(c);
    for(ll i=1;i<n;i++)
    {
        cin>>c;
        if(v[i-1] !=c)
        {
        v.push_back(c);
        ++g[c];
        }
    }
    if(v.size()!=1)
    {
    --g[v[0]];
    --g[v[v.size()-1]];
    }

    ll mn = min(g[v[0]],g[v[v.size()-1]]);
    //debug
    
    //debug
    for(ll i=1;i<v.size()-1;i++)
    {   
        //cout<<g[v[i]]<<endl;
        mn = min(mn,g[v[i]]);
    }
    cout<<mn<<endl;
}

int main()
{
    cin>>t;
    while(t--)
    solve();
}
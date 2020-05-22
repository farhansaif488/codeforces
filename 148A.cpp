#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll k,l,g,n,d;
    cin>>k>>l>>g>>n>>d;
    vector<ll> v;
    for(ll i=0;i<=d;i++)
    {
        v.push_back(0);
    }
    vector<ll> m;
    m.push_back(k);
    m.push_back(l);
    m.push_back(g);
    m.push_back(n);
    ll cnt=0;
    for(ll j=0;j<4;j++)
    {
        for(ll i=1;i*m[j]<=d;i++)
        {
            v[i*m[j]]=1;
        }
    }
    for(ll i=0;i<v.size();i++)
    {
        if(v[i]==1)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
}


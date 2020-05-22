#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    vector<ll> a,b;
    ll n,p;
    cin>>n>>p;
    for(ll i=0;i<p;i++)
    {
        ll x;
        cin>>x;
        a.push_back(x);
    }
    for(ll i=0;i<p;i++)
    {
        ll x;
        cin>>x;
        b.push_back(x);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    if(a[p-1]==n || b[p-1]==n)
    {
        cout<<"I become the guy."<<endl;
    }
    else{
        cout<<"Oh, my keyboard!"<<endl;
    }
}
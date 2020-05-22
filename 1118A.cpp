#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    
    ll n;
    cin>>n;
    ll init=0;
    ll max =0;
    for(ll i=0;i<n;i++)
    {
        ll x,y;
        cin>>x;
        cin>>y;
        init+=-x+y;
        max=(init>max?init:max);

    }
     cout<<max<<endl;

}
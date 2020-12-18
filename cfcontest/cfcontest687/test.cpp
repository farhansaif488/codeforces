#include <bits/stdc++.h>
using namespace std;


#define ll long long

int main()
{
    vector<int> v,p;

    ll n;
    cin>>n;
    v.push_back(0);
    for(ll i=0;i<n;i++)
    {

        ll x;
        cin>>x;

        v.push_back(x);

    }

    for(ll i = 1;i<=n;i++)
    {
        if(v[i-1]!=v[i])
        {
            cout<<v[i]<<endl;
        }
    }

    for(auto y : p)
    {
        cout<<y<<endl;
    }

} 
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    string x;
    cin>>x;
    cin>>n;
    vector<string> s;
    for(ll i =0;i<n;i++)
    {
        string v;
        cin>>v;
        s.push_back(v);
    }
    string ans = x;
    sort(s.begin(),s.end());
    for(ll j=0;j<s.size();j++)
    {
        int f=1;
        for(ll k=0;k<x.size();k++)
        {
            if(x[k] != s[j][k])
            {
                f=0;
                break;
            }
        }

        if(f){
            ans=s[j];
            break;
        }
    }
    cout<<ans<<endl;
}
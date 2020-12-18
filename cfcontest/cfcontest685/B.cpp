#include <bits/stdc++.h>
using namespace std;


#define ll long long

ll n,q;


void solve()
{
    ll n,q;
    string s;
    cin>>n>>q;

    cin>>s;
    
    for(ll i=0;i<q;i++)
    {
        ll r,l;        
        cin>>l>>r;
        l--;r--;
        char first =(char) s[l];
        char last =(char) s[r];
        ll bad = 1;
        for(ll k=0;k<l && bad == 1 ;k++)
        {
            if(s[k]==first)
            bad = 0;
        }
        for(ll k = r+1;k<n;k++)
        {
            if(s[k]==last)
            {
                bad = 0;
            }
        }
        cout<<(bad ? "NO" : "YES")<<"\n";
        cout<<endl;
    }
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
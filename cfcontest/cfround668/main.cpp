#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n;
    cin>>n;
    vector<ll>ans, v;
    
    if(n%2==0)
    {
        vector<ll> v;
        v.push_back(0);
        for(ll i=1;i<=n;i++)
        {
            ll x;
            cin>>x;
            v.push_back(x);
        }
        for(ll i=1;i<=n-1;i+=2){
            ans.push_back(v[i+1]);
            ans.push_back(v[i]);
        }
    }
    else{
        v.push_back(0);
        ll mid = (n/2)+1;
        ll later = 0;
        ll p;
        for(ll i=1;i<=n;i++)
        {
            cin>>p;
            if(i==mid)
            {
                later = p;
               
            }
            v.push_back(p);
            
        }
        ans.push_back(later);
        //ans.push_back(v[mid+1]);

        for(ll i = n;i>=1;)
        {
            if(i==mid ){
                i--;
                continue;
            }
            
                ans.push_back(v[i-1]);
                ans.push_back(v[i]);
            i-=2;
        }
        
    }
 
    for(ll i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<"\n";
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
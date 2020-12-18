#include <bits/stdc++.h>
using namespace std;

#define ll double

void solve()
{
    //ll pos=0,neg = 0;
    ll n;
    cin>>n;
    ll x;
    vector<ll> v;
    ll sum = 0;
    ll ans = 0,mx  = 0;
    for(ll i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
        sum+=x;
        mx = max(mx,x);
    }
    sum = floor(sum/n);
    cout<<sum<<endl;
    for(ll i=0;i<n;i++)
    {
            if(v[i] > sum && c >1){
            ans +=abs(v[i]-sum); 
            }else{
                ans+=abs()
            }
    }
    cout<<ans<<endl;
    ans = abs(ans - abs(sum-mx));
    //cout<<ans<<endl; 

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
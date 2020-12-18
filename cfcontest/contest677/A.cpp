#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll box = 10;
    string s;

    cin>>s;

    ll sz = s.size();
    ll n = s[0]-'0';
   // cout<<n<<endl;
    if(sz == 2)
    {
        sz+=1;
    }
    else if(sz==3)
    {
        sz+=1+2;
    }
    else if(sz==4)
    {
        sz+=1+2+3;
    }
  
    ll ans = sz + (n-1)*box;
    cout<<ans<<endl;
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
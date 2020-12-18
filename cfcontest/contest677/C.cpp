#include <bits/stdc++.h>
using namespace std;


#define ll long long

void solve()
{
    
    ll n ;
    cin>>n;

    vector<int> v(n);

    int mx = 0;

    for(auto &it: v)
    {
        cin>>it;

        mx = max(mx,it);
    }

    int idx = -1;

    for(int i=0;i<n;++i)
    {
        if(v[i] != mx)continue;
        if(i > 0 && v[i-1] != mx)
        {
            idx = i+1;
        }
        if(i<n-1 && v[i+1] != mx )
        {
            idx = i+1;
        }
    }    
    cout << idx << endl;
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
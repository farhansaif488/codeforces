#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll x;
    cin>>x;

    ll k = 0;
    ll final_val = -1;

    ll w = 0;
  
    while(w<x)
    {
        w+=k++;

    }
    if(w==x)
    {
        k--;
    }
    else if(w-x == 1)
    {
        k=k;
    }
    else{
        k--;
    }

    
        

    cout<<k<<endl;
}

int main()
{
    ll t;
    cin>>t;

    while(t--)
    solve();
}
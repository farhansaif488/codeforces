#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll c = 0,total_c = 0;

    ll x,n;
    cin>>n;
    ll flag = 0;
    for(ll i=0;i<n;i++)
    {

        cin>>x;
        if(x>1)
        {
            flag = 1;
        }
        if(x==1)
        total_c++;
        //v.push_back(x);
        if(x==1 && flag == 0)
        c++;
    }

    if(total_c == n)
    {
        if(n%2==0)
        {
            cout<<"Second\n";
        }
        else{
            cout<<"First\n";
        }
    }
    else{
        if(c%2==0)
        {
            cout<<"First\n";
        }
        else{
            cout<<"Second\n";
        }
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
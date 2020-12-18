#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll x;
    cin>>x;

    if(x==1)
    {
        cout<<0<<endl; 
    }
    else if(x == 2)
    {
        cout<<1<<endl;
    }
    else{
        if(x%2==0)
        {
            cout<<2<<endl;
        }
        else{
            if(x==3){
            cout<<2<<endl;
            
            }else{

            cout<<3<<endl;
            }
        }
    }
}

int main()
{
    ll n;
    cin>>n;
    while(n--)
    {
        solve();
    }
}
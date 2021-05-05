#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll  s,n;
    cin>>s>>n;
    for(ll i=0;i<n;i++)
    {
        if(s%10==0)
        {
            s/=10;
        }else{
            s-=1;
        }
    }
    cout<<s<<endl;
}
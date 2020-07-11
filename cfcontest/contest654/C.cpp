#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    scanf("%lld",&t);
    while(t>0)
    {
        t--;
        ll a,b,n,m,k;
        scanf("%lld%lld%lld%lld",&a,&b,&n,&m);
        if(a>b)
        {
            k=b;a=b;b=k;
        }
        if(a<m)
        {
            cout<<"No\n";
            continue;
        }
        if(a+b<n+m)
        {
            cout<<"No"<<endl;
            continue;
        }
        cout<<"Yes"<<endl;
    }
}
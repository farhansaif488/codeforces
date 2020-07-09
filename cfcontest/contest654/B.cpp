#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n,l=1,r,t,res;
    scanf("%lld",&t);

    while(t>0)
    {
        t--;
        res=0;
        scanf("%lld%lld",&n,&r);
        if(n<=l){cout<<"1\n"<<endl;continue;}
        if(n<=r){r=n-1;res=1;}

        printf("%lld\n",res+((l+r)*(r-l+1))/2);
    }
    return 0;
}
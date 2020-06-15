#include <bits/stdc++.h>
using namespace std;

#define ll double 

int main()
{
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    int x=0,y=0;
    if((a/b)<(c/d))
    {
        x = (b*c-a*d);
        y = b*c;
    }
    else if((a/b)>(c/d))
    {
        x = a*d- b*c;
        y = a*d;
    }
    else{
        cout<<0<<"/"<<1<<endl;
        return 0;
    }

    int p = __gcd(x,y);

    while(x%p==0 && y%p ==0 && p!= 1)
    {
        x=x/p;y=y/p;
    }

    cout<<x<<"/"<<y<<endl;

}
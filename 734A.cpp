#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin>>n;
    ll ac=0,ad=0;
    for(ll i=0;i<n;i++)
    {
        char a;
        cin>>a;
        if(a=='A')ac++;
        if(a=='D')ad++;
    }
    if(ac==ad)
    {
        cout<<"Friendship"<<endl;
    }
    else if(ac>ad)
    {
        cout<<"Anton"<<endl;
    }
    else{
        cout<<"Danik"<<endl;
    }

}
#include <bits/stdc++.h>
using namespace std;

#define ll long long 

int main()
{
    string a,b,s;
    cin>>a>>b>>s;

    ll cs[26]={0},ct[26]={0};
    ll flag = 1;
    for(ll i = 0;i<a.size();i++)
    {
        ++cs[a[i]-'A'];
    }
    for(ll i=0;i<b.size();i++)
    {
        ++cs[b[i]-'A'];
    }

    for(ll i=0;i<s.size();i++)
    {
        ++ct[s[i]-'A'];
    }

    for(ll i=0;i<26;i++)
    {
        if(cs[i]!=ct[i])
        {
            //cout<<"alphabates : "<<(char)('A'+i)<<" "<<cs[i]<<" "<<ct[i]<<"\n";
            flag = 0;
        }
    }

    if(flag==1)
    {
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
}
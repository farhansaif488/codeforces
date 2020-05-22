#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
    ll t;
    cin>>t;
    vector<string> v;
    while(t--)
    {
        
        ll n;
        cin>>n;

        if(n==1)
        {
            v.push_back("-1");
        }
        else if(n==2)
        {
            v.push_back("13");
        }
        else if(n>2)
        {
            string s ="13";
            for(ll l =2;l<n;l++)
            {
                s+="7";
            }
        
            v.push_back(s);    
        }
    }
    for(auto x: v)
    {
        cout<<x<<endl;
    }
}
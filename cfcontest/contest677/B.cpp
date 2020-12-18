#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll len;
    cin>>len;
    vector<char> s;
    for(ll i=0;i<len;i++)
    {
        char c;
        cin>>c;
        s.push_back(c);
    }
    ll first = -1;
    ll last = -1;
    ll zero = 0;
    for(ll i=0;i<len;i++)
    {
        if(s[i]=='1' && first == -1)
        {
            first = i;
            break;
        }
    }
    //cout<<"X"<<endl;
    for(ll i=len-1;i>=first;i--)
    {
        if(s[i]=='1' && last == -1)
        {
            last = i;
            break;
        }
    }
    
    if( (first != -1 && last == -1) || first == last ||(first == -1 && last == -1))
    {
        zero = 0;

    }
    //cout<<first<<" "<<last<<endl;
    if(last != -1)
    for(ll i=first+1;i<=last-1;i++)
    {
        if(s[i]=='0')
        {
            zero++;
        }
    }


    cout<<zero<<endl;
    
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
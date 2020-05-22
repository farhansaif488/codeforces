#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll isup(char x)
{
    if(x>='A' && x<='Z')
    {
        return 1;
    }
    return 0;
}
int main()
{
    string s;
    cin>>s;
    vector<char> v;
    vector<ll> m;
    for(ll i=0;i<s.size();i++)
    {
        v.push_back((char)s[i]);
    }
    
    for(auto b : v)
    {
        m.push_back(isup(b));
    }
    int flag = 1;
    ll ct_0=0,ct_1=0;
    for(ll i=1;i<m.size();i++)
    {
        if(m[i]==1)
        {
            ct_1++;
        }
    }

    if(ct_1+m[0]==s.size())
    {
        for(auto h: v)
        cout<<(char)(tolower(h));    
        
        cout<<endl;
    }
    else if(((m[0]==0)&&ct_1==s.size()-1))
    {
        cout<<(char)toupper(v[0]);
        for(ll i=1;i<v.size();i++)
        {
            cout<<(char)tolower(v[i]);
        }
        cout<<endl;
    }
    else{
        cout<<s<<endl;
    }
  

}
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s2;
    cin>>s2;
    vector<char> s,ans;
    for(ll i=0;i<s2.size();i++)
    {
        s.push_back(char(s2[i]));
    }
    
    for(ll i=3;i<=s.size();i++)
    {
        if(s[i-3]=='W' && s[i-2] == 'U' && s[i-1]=='B')
        {
            s[i-3]=' ';
            s[i-2]=' ';
            s[i-1]=' ';
        }
    }
    
    for(ll i=0;i<s.size();i++)
    {
        
        if(s[i] !=' ')
        {
            if(s[i-1]==' ')
            {
                ans.push_back(' ');
            }
            ans.push_back(s[i]);
        }
        else{
            continue;
        }
    }
    for(ll i=0;i<ans.size();i++)
    {
        cout<<ans[i];
    }
    cout<<endl;
}
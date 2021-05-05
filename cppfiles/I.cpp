#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string a,b;
    cin>>a>>b;
    int f = 0;
    if(a.size() != b.size())
    {
       f=1;
    }
   // cout<<f<<endl;
    if(f!=1)
    for(ll i=1;i<a.size()-1;i++)
    {
        if(a[i] != '0')
        {
            f = 1;
            break;
        }
    }
   // cout<<f<<endl;
    if(f !=1)
    for(ll i=1;i<b.size()-1;i++)
    {
        if(b[i] != '0')
        {
            f = 1;
            break;
        }
    }
   // cout<<f<<endl;
    if(f!=1)
    {
        int x = ((int)(a[0]-'0')) + ((int)(b[0]-'0'));
        if(x>9){
            f = 1;
        }
        x = ((int)(a[a.size()-1]-'0')) + ((int)(b[b.size()-1]-'0'));

        if(x>9)
        {
            f = 1;
        }
    }
   // cout<<f<<endl;
    if(f==1)
    {
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}
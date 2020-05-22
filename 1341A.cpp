#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    vector<string> ans;
    ll t;
    cin>>t;
    while(t--){
    ll n,a,b,c,d;
    vector<ll> v;
    cin>>n>>a>>b>>c>>d;

    ll m = n*(a-b);
    ll k = n*(a+b);
    if((k<c-d && m<c-d) || (k>c+d && m>c+d))
    {
        ans.push_back("NO");
    }
    else{
        ans.push_back("YES");
    }
    }
    for(auto g:ans)
    {
        cout<<g<<endl;
    }
}
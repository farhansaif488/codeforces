#include <bits/stdc++.h>
using namespace  std;

//using namespace std;

#define ll long long

ll dist(ll x1,ll x2,ll y1,ll y2)
{
    ll x = (abs(x1-x2))*(abs(x1-x2));
    ll y = (abs(y1-y2))*(abs(y1-y2));

    ll sum = sqrt(x+y);
    return sum;
}

void solve()
{
    
    ll n;
    cin>>n;
    ll k;
    cin>>k;
    vector<pair<ll,ll>> points;

    for(ll i=0;i<n;i++)
    {
        ll x,y;
        cin>>x>>y;
        points.push_back({x,y});
    }
    ll flag;
    for(ll i=0;i<n;i++)
    {
        flag = 1;
        for(ll j = 0;j<n;j++)
        {
            if(i==j){
                continue;
            }
            ll dist_l = dist(points[i].first,points[j].first,points[i].second,points[j].second);
            //cout<<dist_l<<"\n";
            if(dist_l<k)
            {
                flag = 0;
                break;
            }
        }
        if(flag  = 1)
        {
            break;
        }
    }

    if(flag)
    {
        cout<<1<<"\n";
    }else{
        cout<<-1<<"\n";
    }
     
   
}

int main()
{
    ll t;cin>>t;
    while(t--)
    {
        solve();
    }    
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    ll n;
    cin>>n;
    vector<ll> v;
    for(ll i = 0;i < n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    ll min_ind=0,plus_ind=0,min_cnt=0,plus_cnt=0,zero_cnt=0;
    vector<ll> minus,plus,zero,ansplus,ansmin,anszero;

    for(auto p: v)
    {
        if(p>0)plus.push_back(p);
        else if(p<0)minus.push_back(p);
        else zero.push_back(0);
    }

    if(plus.size()>0){
        for(ll i= 0;i<plus.size();i++)
        {
            ansplus.push_back(plus[i]);
        }
    }

    ansmin.push_back(minus[0]);
    min_ind = 1;
    min_cnt++;
    if(plus.size()==0)
    {
        for(ll i =0;i<2;i++,min_ind++)
        {
            ansplus.push_back(minus[min_ind]);
        }
    }
    zero_cnt = 1;
    
    if(min_cnt!= minus.size())
    {
        for(int i=min_ind;i<=minus.size()-1;i++)
        {
            zero.push_back(minus[i]);
            zero_cnt++;
            min_cnt++;
        }
    }

    cout<<ansmin.size()<<" ";
    for(auto p: ansmin)
    {
        cout<<p<<" ";
    }   
    cout<<endl;

    cout<<ansplus.size()<<" ";
    for(auto p: ansplus)
    {
        cout<<p<<" ";
    }   
    cout<<endl;

    cout<<zero.size()<<" ";
    for(auto p: zero)
    {
        cout<<p<<" ";
    }   
    cout<<endl;
}
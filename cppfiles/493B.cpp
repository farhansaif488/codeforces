#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin>>n;
    vector<ll> pos,neg;
    ll sum =0,save =0;
    ll winner =0;
    for(ll i=0;i<n;i++)
    {
        ll p;
        cin>>p;
        if(p>0)pos.push_back(p);
        else neg.push_back(p);
        sum+=p;
        if(i==n-1)save = p;
    }
    
    if(sum<0)
    {
           cout<<"second"<<endl;
           return 0;
    }
    else if(sum>0){
        cout<<"first"<<endl;
        return 0;
    }
    else if(sum==0)
    {
        if(pos.size()>neg.size())
        {
            cout<<"first"<<endl;
            return 0;
        }else if(neg.size()>pos.size())
        {
            cout<<"second"<<endl;
            return 0;
        }
        else{
            for(ll i=0,j=0;i<pos.size() && j<neg.size();i++,j++)
            {
                if(pos[i]>neg[j])
                {
                    cout<<"first"<<endl;
                    return 0;
                    
                }else if(pos[i]<neg[j])
                {
                    cout<<"second"<<endl;
                    return 0;
                }
            }
        }

    }
   else
    {
        if(save <0)
        {
            cout<<"second"<<endl;
            return 0;
        }
        else{
            cout<<"first"<<endl;
            return 0;
        }
    }
    

 
}
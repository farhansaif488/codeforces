#include <bits/stdc++.h>
using namespace std;

#define ll long long 

int main()
{
    ll t,n,k;
    cin>>t;

    for(ll m =0;m<t;m++)
    {
        cin>>n>>k;
        ll a[n+1],freq[n+1];
        a[0]=a[1]=0;
        memset(freq,0,sizeof(freq));
        for(ll i=1;i<=n;i++)
        {
            cin>>a[i];
        }

        for(ll i=2;i<n;i++)
        {
            if(a[i]>a[i-1] && a[i]>a[i+1])
            {
                freq[i]++;
            }
        }
        
        for(ll i=2;i<=n;i++)
        {
            freq[i]+=freq[i-1];
        }

        ll mx_0 = 0;
        ll mx =0;
        ll mx_i=0;
        ll i = 1;
        while(i+k-1<=n)
        {
        ll p = i+k-1;
        if(freq[p] == freq[p-1])
        {
            ll x = freq[p]-freq[i]+1;
            mx_0 = max(mx,x);
                if(mx_0 != mx)
                {
                    mx_i = i;
                }
            mx = mx_0;
        }
     }
    cout<<mx<<" "<<mx_i<<endl;
    }
}
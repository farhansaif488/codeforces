    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main()
    {
        ll n,k,t;cin>>t;
        vector<pair<ll,ll>> ans;
        while(t--)
        {
            cin>>n>>k;
            vector<ll> v,inx,s;
            v.push_back(-1);
            for(ll i=0;i<n;i++)
            {
                ll x;cin>>x;
                v.push_back(x);
            }
            inx.push_back(-1);
            inx.push_back(0);
            for(ll i=2;i<=n-1;i++)
            {
                if(v[i]>v[i-1] && v[i]>v[i+1])
                {
                    inx.push_back(1);
                }
                else{
                    inx.push_back(0);
                }
            }
            inx.push_back(inx[v.size()-1]);
            ll sum =0;
            s.push_back(-1);
            for(ll i=1;i<=n;i++)
            {
                sum+=inx[i];
                s.push_back(sum);
            }
            
            ll p=0,mx = 0;
            ll mx_1= -1;
            ll mx_p = 0;
            while(1){
            p++;
            ll m = p+k-1;
            if(m>n)break;
            mx_1=max(mx,(s[m]-s[p])+1);
            if(mx != mx_1){mx_p = p;}
            mx = mx_1;
            }
            if(s[mx_p+k-1]!=s[mx_p+k-2]){mx_p++;}
            ans.push_back({mx,mx_p});
            cout<<mx<<" "<<mx_p<<endl;
        }
     
       
    }
#include <bits/stdc++.h>
using namespace std;

int n,x;

int f(int i,vector<int> v,int c,int ans)
{
    if( i==n || c==x)
    {
        
            if(ans%2!=0 && c==x )
            {
                return 1;
            }
            
        
        return 0;
    }
    
   
    
   int  p = f(i+1,v,c,ans);
   int  y = f(i+1,v,++c,ans+v[i]);
    return y|p;
    
}

int main()
{
    int t;cin>>t;
    while(t--)
    {
        vector<int> v;
        cin>>n>>x;
        for(int i=0;i<n;i++)
        {
            int p;cin>>p;
            v.push_back(p);
        }
        int k = f(0,v,0,0);
        if(k==1)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
}
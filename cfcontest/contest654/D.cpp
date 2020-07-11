#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n,k,t,i,j,p,q;

    char res[305][305];

    cin>>t;

    while(t>0)
    {
        t--
        scanf("%lld%lld",&n,&k);
        if(k%n==0)
        {
            cout<<"0"<<endl;
        }
        else{
            cout<<"2"<<endl;
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                res[i][j]='0';
            }
            res[i][n]=0;
        }
        p=0;q=0;
        while(k>0)
        {
            k--;
            res[p][q]='1';
            p++;q++;q%=n;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%s\n",res[i]);
    }
}


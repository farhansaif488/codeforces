#include <bits/stdc++.h>
using namespace std;

int adj[100000];
vector<int> sum;
bool visited[100000];
int cnt=0;

void dfs(int s)
{
    visited[s]=true;
    int x = adj[s];

    if(!visited[x])
    {
        cnt++;
        dfs(x);
    }
    visited[s]=false;
    sum[s]=cnt;
}

int main()
{
    int t,ans;
    cin>>t;
    int i,j;
    for(j = 1;j<=t;j++)
    {
        int n;
        cin>>n;
        for(i=0;i<=n;i++)
        {
            visited[i]=0;
            adj[i]=0;
        }
        int a = n;
        //cout<<"x";
        while(a--)
        {
            int u,v;
            cin>>u>>v;
            adj[u]=v;
        }
        cnt =1;
        sum.clear();
        sum.assign(n+1,-1);
        int mx =0;
        for(i=1;i<=n;i++)
        {
            if(sum[i]==-1){
                dfs(i);
                sum[i]=cnt;
            }
            if(cnt>mx)
            {
                mx = cnt;
                ans =i;
            }
            cnt=1;
        }
        
        cout<<"Case "<<j<<": "<<ans<<endl;
    }
}




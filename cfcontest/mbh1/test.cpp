#include<bits/stdc++.h>

using namespace std;
int adj[100000];
vector<int>sum;
bool visited[100000];
int pre[100000];
map<int,int>mp;
map<int,int>::iterator it;
int cnt=0;


int dfs(int s)
{
    visited[s]=true;
        int x=adj[s];
        if(!visited[x])
        {
            cnt++;
            dfs(x);
        }
    visited[s]=false;
    return sum[s]=cnt;

}

int main()
{
    int n,m,i,j,t,u,v,a,mx=0,ans;
    cin>>t;

    for(j=1; j<=t; j++)
    {
        cin>>n;
        a=n;

        while(a--)
        {
            cin>>u>>v;
            adj[u]=v;
        }
        sum.assign(n+1,-1);
        cnt=1;
        mx=0;
        for(i=1;i<=n;i++){
            if(sum[i]==-1){
               dfs(i);
               sum[i]=cnt;
            }
            if(cnt>mx){
                mx=cnt;
                ans=i;
            }
            cnt=1;
        }
        
        cout<<"Case "<<j<<": "<<ans<<endl;
    }

}
/*
3
3
3 1 
2 2 
3 3 
1
4
1 2
2 1
4 3
3 2
5
1 2
2 1
5 3
3 4
4 5
*/
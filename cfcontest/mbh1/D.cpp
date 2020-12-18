#include <bits/stdc++.h>

using namespace std;

vector<bool> vis;

vector<int> topsort;

void dfs(int u,vector<int> adj[])
{
    vis[u] = true;
    int v;
    for(int i = 0; i < adj[u].size(); ++i) {
        v = adj[u][i];
        if(!vis[v]){
            dfs(v,adj);
            }
    }
    topsort.push_back(u);
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        vis.clear();
        vis.assign(n+1,0);
        topsort.clear();
        topsort.assign(n+1,0);
        vector<int> adj[102];
        
        

        for(int i=0;i<n;i++)
        {
            int u,v;
            cin>>u>>v;
            adj[u].push_back(v);
        }

        for(int i=1;i<=n;i++)
        {
            if(!vis[i])
            {
                dfs(i,adj);
            }
        }
        cout<<topsort[n-1]<<endl;

    }
}
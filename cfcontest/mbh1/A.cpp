#include <bits/stdc++.h>
using namespace std;

queue<int> q;
int vis[1001],level[1001];
int V,e;
void bfs(int s,vector<int> v[])
{
    
    
    for(int i=0;i<=V;i++)
    {
        level[i]=-1;
        vis[i]=0;
    }

    q.push(s);
    level[s]=0;
    while(!q.empty())
    {
       
        int u = q.front();
        q.pop();
        for(int i=0;i<v[u].size();i++)
        {
            if(!vis[v[u][i]])
            {
               
                level[v[u][i]]=level[u]+6;
                vis[v[u][i]]=1;
                q.push(v[u][i]);
            }
        }

    }
}

int main()
{
     int t;
     cin>>t;

    while(t--){
        
        cin>>V>>e;
        vector<int> adj[1000];
        for(int i=1;i<=e;i++)
        {
            int u,v;
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int s;
        cin>>s;
        bfs(s,adj);

        for(int i=1;i<=V;i++)
        {
            if(i!=s)
            {
                cout<<level[i]<<" ";
            }
        }
        cout<<endl;
    }
}
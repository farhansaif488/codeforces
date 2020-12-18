#include <bits/stdc++.h>
using namespace std;

struct Edge{
    int u,w,v;
};

vector<Edge> E;

int dist[5000];

int n=0,m=0,t=0;
int cycle=0;
void bellman_ford(int s)
{
    for(int i=0;i<n;i++)
    {
        dist[i]=1000000;
    }
     
    dist[s]=0;
    int flag = 1;
    cycle = 0;
    dist[0]=0;
    for(int i=0;i<n+1;i++)s
    {
        for(Edge e: E)
        {
            if(dist[e.v]>dist[e.u]+e.w)
            {
                if(i==n)
                {
                    cycle = 1;
                }
                dist[e.v]=dist[e.u]+e.w;
            }
        } 
    }
}
void push_node(int u,int w,int v)
{
    E.push_back({u,w,v});
   // E.push_back({v+1,w,u+1});
}


void build_graph()
{
    E.clear();
    for(int i=1;i<=m;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        push_node(u,w,v);
    }
}



int main()
{
    cin>>t;
    while(t--){
    cin>>n>>m;
    build_graph();
    bellman_ford(0);
    if(cycle == 0)
    {
        cout<<"not possible"<<endl;
    }
    else{
        cout<<"possible"<<endl;
    }
    cycle = 0;
    }
}
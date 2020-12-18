#include <bits/stdc++.h>
using namespace std;

struct Edge{
    int u,w,v;
};

vector<Edge> E;
int n =0,m=0;
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
    int t=0;
    cin>>t;

    while(t--)
    {
        cin>>n>>m;
        build_graph();
    }
    cout<<endl;
    for(Edge x : E)
    {
        cout<<x.u<<" "<<x.v<<" "<<x.w<<endl;
    }
}
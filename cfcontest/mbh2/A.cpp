#include <bits/stdc++.h>
using namespace std;

struct Node{

    int at,cost;
    Node(int _at,int _cost)
    {
        at = _at;
        cost = _cost;
    }
};

bool operator<(Node A,Node B)
{
    return A.cost > B.cost;
}

struct Edge{
    int v,w;
};

vector<Edge> adj[50055];
priority_queue<Node> PQ;

int dist[50055];

int N=0,n=0,m=0,S=0,T=0;


void dijkastra(int s)
{
    for(int i=0;i<=n;i++)
    {
        dist[i]=10000000;
    }
    dist[s]=0;
    PQ.push(Node(s,0));

    while(!PQ.empty())
    {
        Node u = PQ.top();
        PQ.pop();

        if(u.cost != dist[u.at])
        {
            continue;
        }

        for(auto e: adj[u.at])
        {
            if(dist[e.v]>e.w+u.cost){
                dist[e.v] = u.cost + e.w; 
                PQ.push(Node(e.v,dist[e.v]));
            }
        }

    }
}

void push_node(int x,int v,int w)
{
    //cout<<"pushing "<<x<<" "<<v<<" "<<w<<" "<<endl;
    adj[x].push_back({v,w});
    adj[v].push_back({x,w});
}


void build_graph()
{
    
    for(int i=0;i<n;i++)
    {
        adj[i].clear();
    }
    for(int i=0;i<m;i++)
    {
        int x,v,w;
        cin>>x>>v>>w;
        push_node(x,v,w);
    }
}


int main()
{
    cin>>N;
    int i =0;
    while(N--){

    cin>>n>>m>>S>>T;
    build_graph();
    dijkastra(S);
    
    if(dist[T] == 10000000 )
    {
        cout<<"Case #"<<++i<<": unreachable"<<endl;
        continue;
    } 
    cout<<"Case #"<<++i<<": "<<dist[T]<<endl;
    }
}


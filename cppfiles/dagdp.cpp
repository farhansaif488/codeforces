#include <bits/stdc++.h>
using namespace std;

#define inf 9999

vector<int> x[1000];

int p[1000][1000];

int push(int v,int u,int w)
{
    x[v].push_back(u);
    p[v][u]=w;
}

int f(int u,int n)
{
    if(u==n-1)
    {
        return 0;
    }
    if(mem[u]!=-1)
    {
        return mem[u];
    }
    int ans = inf;
    for(int v = 0;v<n;v++)
    {
        if(p[u][v] != inf)
        {
            ans = min(ans,f(v,n)+w[u][v]);
        }
    }
    mem[u] = ans;
    return mem[u];
}

int main()
{
    memset(p,inf,sizeof(p));
    
    for(int i=0;i<5;i++)
    {
        int v,u,w;
        cin>>v>>u>>w;
        push(v,u,w);
    }


}
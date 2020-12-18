#include <bits/stdc++.h>
using namespace std;
int n;
char mp[100][100],used[100][100];
void dfs(int x,int y)
{
    if(x<0 || x>=n || y<0 || y>=n)
    {
        return;
    }
    if(used[x][y] != 0 || mp[x][y] == '0')
    {
        return;
    }
    used[x][y]=1;
    
    for(int i=-1;i<=1;i++)
    {
        for(int j = -1;j<=1;j++)
        {
            dfs(x+i,y+j);
        }
    }
}

int main()
{
    int img = 0;

    while(scanf("%d",&n)==1)
    {
        for(int i=0;i<n;i++)
        {
            cin>>mp[i];
        }
        memset(used,0,sizeof(used));
        int cnt = 0;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(mp[i][j] == '1' && used[i][j] == 0)
                {
                    dfs(i,j);
                    cnt++;
                }
            }
        }
        printf("Image number %d contains %d war eagles.\n",++img,cnt);
    }
    return 0;
}




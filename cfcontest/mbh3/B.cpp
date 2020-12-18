
#include <bits/stdc++.h>
using namespace std;

#define MAX_N 20000
#define MAX_W 1000

#define INF 999999
#define EMPTY_VALUE -1
#define ll long long
int  n = 11;

int mem[MAX_N][MAX_N];

int C[] = {10000,5000,2000,1000,500,200,100,50,20,10,5};

void init()
{
    memset(mem,-1,sizeof(mem));
    
}

int f(int i,int W)
{
   
    if(W<0)
    {
        //cout<<0<<endl;
        return 0;
    }
    if(i==n){
        if(W==0)
        {
            //cout<<1<<endl;
            return 1;
        }
        //cout<<0<<endl;
        return 0;
    }
    if(mem[i][W] != EMPTY_VALUE)
    {
        return mem[i][W];
    }
   

    int res1 = f(i,W-C[i]);
    int res2 = f(i+1,W);
    mem[i][W]=res1+res2;

    return mem[i][W]; 
}


int main()
{
    

    double w;
    init();
    while(cin>>w)
    {
    
    if(w==0.00)
    {
        break;
    }
    
    printf("%6.2lf%17lld\n",w,f(0,(ll)(w*100)));
    }
}
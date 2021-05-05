#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cin>>n;
    v.push_back(-1);
    for(int i=1;i<=n;i++)
    {
        int  k;
        cin>>k;
        v.push_back(k);
    }
    int x,y;
    cin>>x>>y;
    int f =0;   
    int sum = n/2;
    int d = y-x;
    while(d--)
    {
    int cnt_noob=0,cnt_int =0;
    for(int i=1;i<sum;i++)
    {
        cnt_noob+=v[i];
    }
    for(int i=sum;i<=n;i++)
    {
        cnt_int+=v[i];
    }
   /* cout<<"Sum : "<<sum<<endl;
    cout<<"cnt int :"<<cnt_int<<endl;
    cout<<"cnt noob :"<<cnt_noob<<endl;*/
    
        
        if(cnt_int<x)
        {
            sum--;
            continue;
        }else if(cnt_int>y){
            sum++;
            continue;
        }
        if(cnt_noob<x)
        {
            sum++;
            continue;
        }
        else if(cnt_noob >y){
            sum--;
            continue;
        }

    
    else{
        f=1;
        
        break;
    }    
 
    }

    if(f == 1)
    {
        cout<<sum<<endl;
    }
    else{
        cout<<"0"<<endl;
    }
}
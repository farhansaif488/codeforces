#include <bits/stdc++.h>
using  namespace std;

vector<int> id;
vector<int> sol;
class snaps{
    public:
    
    int c_id;
    int p_id;
    int L;
    char C;

    

    snaps()
    {
        c_id = 0;
        p_id = 0;
        L = 0;
        
    }
};

class contestant{

    public:

    int id;
    int t_pen;//total_penulty
    int t_sol;
    contestant()
    {
        id = 0;
        t_pen=0;
        t_sol =0;
    }
};

pair<int,int> search(int id,vector<snaps> v)
{
    int t_s=0,p_time=0;

    for(auto x: v)
    {
        if(x.c_id == id)
        {
             int f=-1;
            for(int i=0;i<sol.size();i++)
            {
                if(x.p_id == sol[i])
                {
                    f=0;
                    break;
                }
            }
            if(f==-1)continue;
            
            if(x.C=='C')
            {
                p_time+=x.L;
                t_s++;    
            }
            if(x.C == 'I')
            {
                p_time+=20;
            }
        }
    }

    pair<int,int> l;
    l.first = t_s;
    l.second = p_time;
    return l;
}

bool cmp(vector<contestant> a,vector<contestant> b)
{
    if(a.t_sol>b.t_sol)
    {
        return 1;
    }else if(a.t_pen > b.t_pen)
    {
        return 1;
    }
    else if(a.id>b.id)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int t;
    cin>>t;
    vector<snaps> v;
    vector<int> id;
    int mx =0;
    for(int i=0;i<t;i++)
    {
        snaps x;
        cin>>x.c_id;
        mx=max(mx,x.c_id);
        id.push_back(x.c_id);
        cin>>x.p_id;
        cin>>x.L;
        cin>>x.C;
        if(x.C=='C')
        {
            sol.push_back(x.p_id);
        }
        v.push_back(x);
    }
    vector<int>b;
    sort(id.begin(),id.end());
    int i;
    for(i=1;i<id.size();i++)
    {
        if(id[i]!=id[i-1])
        {
            b.push_back(id[i-1]);
        }
    }


    b.push_back(id[i-1]);
    vector<contestant> vi;
    i=0;
    for(auto m : b)
    {
        pair<int,int> k;
        contestant t;

        k=search(m,v);
        t.id = m;
        t.t_pen =k.second;
        t.t_sol =k.first;
        vi.push_back(t);
    }

    for(auto n : vi)
    {
        cout<<n.id<<" ";
        cout<<n.t_pen<<" ";
        cout<<n.t_sol<<endl;
    }
}



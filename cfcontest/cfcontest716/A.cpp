#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)


#define ll long double

//0 false
//1 true

ll root(ll x)
{
	return sqrt(x);
}


bool checkRoot(vector<ll> v)
{
	bool flag = 0;
	for(int i=0;i<v.size();i++)
	{

		if(ceil(root(v[i]))==floor(root(v[i])))
		{
			flag = 1;
		}else
		{
			flag=0;
			break;
		}

	}
	return flag;
}

void solve()
{
	int n,flag;
	ll x;

	cin>>n;
	vector<ll> v;

	for(int i=1;i<=n;i++)
	{
		cin>>x;
		v.push_back(x);
	}

	flag = checkRoot(v);

	if(!flag)
	{
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
}
int main()
{
	fastio;

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int t;
	cin>>t;
	while(t--){

		solve();
	}
}

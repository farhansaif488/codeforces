#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)


#define ll long long

//0 false
//1 true


void solve()
{
	vector<ll> v;

	ll n;
	cin>>n;

	for(ll i=1;i<n;i++){
		if(__gcd(i,n)==1){

			v.push_back(i);
		}
	}
	ll res = 1;
	for(auto r = v.begin();r!=v.end();r++){
		res*=(*r);
		res%=n;
	}
	ll len = v.size();
	if(res != 1)
	{
		len--;
	}

	cout<<len<<endl;

	for(ll i=0;i<len;i++){
		cout<<v[i];
		cout<<" ";
	}


}
int main()
{
	fastio;

	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	//int t;
	//cin>>t;
//	while(t--){

		solve();
//	}
}

#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)


#define ll long long
#define ld long double
#define vi vector<ll>
#define vd vector<ld>


void solve()
{
	ll n;
	cin>>n;

	vi even,odd;


	for(ll i=0;i<n;i++){
		ll x;
		cin>>x;
		if(x%2){
			odd.push_back(x);
		}else{
			even.push_back(x);
		}
	}

	for(ll i=0;i<odd.size();i++)
	{
		cout<<odd[i]<<" ";
	}
	for(ll i=0;i<even.size();i++)
	{
		cout<<even[i]<<" ";
	}
	cout<<"\n";
}
int main()
{
	fastio;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int t;
	cin>>t;
	while(t--){

		solve();
	}
}

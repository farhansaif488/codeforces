#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

const ll MOD=1e9+7;

void solve()
{
	ll n,k;
	cin>>n>>k;


	ll ans = 1;
	for(ll i=0;i<k;i++)
	{
		ans = (ans*n)%MOD;
	}

	cout<<ans<<endl;

}
int main()
{

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	ll t;
	cin>>t;
	while(t--){

		solve();
	}
}

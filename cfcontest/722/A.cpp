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
	vi v;

	cin>>n;

	ll mn = 101;
	ll cnt = 0;

	for(ll i=0;i<n;i++){
		ll x;cin>>x;
		if(mn > x){
			mn = x;
			cnt=1;
		}else if(mn == x){
			cnt++;
		}
	}

	cout<<n-cnt<<endl;

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

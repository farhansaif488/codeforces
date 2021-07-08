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
	ll ans = n;
	ll num = 0;
	while(1){
		n--;
		ans=ans&n;
		if(ans==0){
			num = n;
			break;
		}
	}
	cout<<num<<endl;
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

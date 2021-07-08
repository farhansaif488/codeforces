#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)


#define ll long long
#define ld long double
#define vi vector<ll>
#define vd vector<ld>


void solve()
{
	string s;
	cin>>s;

	ll len = s.size();

	ll n = conv(s,len);
	ll p = 0;
	if(s[len-1]==s[len-2]){
		for(ll i=0,j=len;i<len;j--,i++){
			ll a = s[i]-'0';

		}
	}
}
ll conv(string s,ll len){
	ll n = 1;
	for(ll i=0,ll j=len;i<len;i++,j--){
		ll a = 1;
		for(ll k=0;k<j-1;k++){
			a*=10;
		}
		ll num = (s[i]-'0')*a;

		n+=num;
	}
	return n;
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

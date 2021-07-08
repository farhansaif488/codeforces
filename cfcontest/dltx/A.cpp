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
	ll k;
	cin>>k;
	string s;
	cin>>s;
	for(ll j =0;j<k;j++)
	{
		for(ll i=0;i<n;i++)
		{

			if(s[i]=='1')
			{
				continue;
			}
			if(i+1==n && s[i-1]=='1')
			{
				s[i]='1';
			}

			if(i-1<0 && s[i+1]=='1')
			{
				s[i]='1';
			}
			if(i-1>=0){
				if(s[i+1]=='1' && s[i-1]=='1'){
					continue;
				}
			}

		}
	}
	cout<<s<<endl;
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

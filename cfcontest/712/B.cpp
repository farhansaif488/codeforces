#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)


#define ll long long
#define ld long double
#define vi vector<ll>
#define vd vector<ld>


void solve()
{
	ll n,one1=0,zero1=0,tag1 = 0;
	ll one2=0,zero2=0,tag2 = 0;
	string a,b;

	cin>>n>>a>>b;

	for(ll i=0;i<n;i++){
		if(a[0]=='1')
		{
			one1++;
		}
		else{
			zero1++;
		}
		if(zero1==one1){
			tag1++;
		}

		if(b[0]=='1')
		{
			one2++;
		}
		else{
			zero2++;
		}
		if(zero2==one2){
			tag2++;
		}

	}

	if(tag1==tag2){
		cout<<"YES"<<endl;
	}
	else{
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

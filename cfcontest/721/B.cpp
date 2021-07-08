#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)


#define ll long long
#define ld long double
#define vi vector<ll>
#define vd vector<ld>
#define vc vector<char>


void solve()
{
	bool flag = 0;

	ll n;cin>>n;
	ll m=0,k=0;
	for(ll i=0;i<n;i++)
	{
		char c;cin>>c;
		if(c=='0')k++;
		else m++;
	}

	if(k==1){
		cout<<"BOB\n"<<endl;
	}

	if(k%2==0 && flag ==0){
		cout<<"BOB"<<endl;
		flag=1;
	}else if(k%2==0 && flag==1){
		cout<<"DRAW"<<endl;
		flag=0;
	}
	else if(k%2==1 && k!=1){
		cout<<"ALICE"<<endl;
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

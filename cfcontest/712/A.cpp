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
	string s,p,q,P="",Q="";
	int flag = 0;
	cin>>s;

	p = s+"a";
	q = "a"+s;

	P+=p;
	Q+=q;

	reverse(p.begin(),p.end());
	reverse(q.begin(),q.end());

	if(p!=P){
		cout<<"YES\n"<<P<<"\n";
		flag = 2;
	}
	if(q!=Q && flag != 2){
		cout<<"YES\n"<<Q<<"\n";
		flag = 2;
	}
	if(flag != 2){
		cout<<"NO\n";
	}
}


int main()
{
	fastio;

	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int t;
	cin>>t;
	while(t--){

		solve();
	}
}

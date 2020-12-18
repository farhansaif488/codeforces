#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll n,k;
string s,t;



void solve()
{
    cin>>n>>k>>s>>t;
    
    	
	ll cs[26] = {0};
	for (ll i = 0; i < n; i++) ++cs[s[i] - 'a'];
	
	ll ct[26] = {0};
	for (ll i = 0; i < n; i++) ++ct[t[i] - 'a'];
	
	for (ll i = 0; i < 25; i++) { // ['a' -> 'y']
		if (cs[i] < ct[i]) {
			cout << "No\n";
			return;
		}
		
		cs[i] -= ct[i];
		
		if (cs[i] % k != 0) {
			cout << "No\n";
			return;
		}
		
		cs[i + 1] += cs[i];
	}
	
	if (cs[25] != ct[25]) cout << "No\n";
	else cout << "Yes\n";
    }

int main()
{
    ll b;
    cin>>b;
    while(b--)
    {
        solve();
    }
}
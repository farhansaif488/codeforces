#include <bits/stdc++.h>
using namespace std;


int main()
{
	vector<int> v;
	for(int i=0;i<=5;i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}
	sort(v.begin(),v.end(),greater<int>());
	for(auto m : v)
	{
		cout<<m<<" ";
	}
}
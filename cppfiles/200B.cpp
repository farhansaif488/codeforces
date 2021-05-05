#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    vector<double> v;

    cin>>n;

    for(int i=0;i<n;i++)
    {
        double x;cin>>x;
        v.push_back(x);
    }
    double j=0;
    for(auto m:v)j+=;
    j/=n;
    printf("%0.12lf\n",j);
}
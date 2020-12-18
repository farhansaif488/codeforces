#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, x, a[100010], b[100010], sum = 0;
    cin >> n;
    memset(b, 0, sizeof(b));
    for(int i = 0; i < n; i++)
    {
        int y;
        cin >> y;
        b[y]++;   ///stores frequency
    }
    a[0] = 0;
    a[1] = b[1];  ///base case, when there is only one item, then the sum will be value of that item
    for(int i = 2; i <= 100000; i++)
    {
        a[i] = max(a[i-1], a[i-2] + (i * b[i]));    ///for each i, comparing total sum for that i and it's previous i, maximum will be counted
    }
    cout << a[100000];  ///output
    return 0;
}
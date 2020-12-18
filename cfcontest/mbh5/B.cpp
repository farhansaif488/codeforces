/**
 * @file B.cpp
 * @author Farhan Saif (farhansaif@iut-dhaka.edu)
 * @brief 
 *      quicksort application direct , making mid element value
 * @version 0.1
 * @date 2020-12-16
 */

#include<bits/stdc++.h>
 
#define SIZE 2000002
 
static int A[SIZE];
#define ll long long
using namespace std;

/**
 * @brief 
 *      quicksort function 
 *      if n < 2 returns the function 
 *      we use mid (n/2) as the pivot
 * @param a is a pointer , working as the array 
 * @param n size of the array 
 */

void quicksort (int *a, ll n) {
    ll i, j, mid;
    if (n < 2) return;
 
    mid = a[n >> 1];
    //i = 0, j = n - 1; ; i++, j--
    i=0;j=n-1;
    for(i=0,j=n-1;;i++,j--) {
        while (a[i] < mid)
            i++;
        while (a[j]>mid)
            j--;
 
        if (i >= j) break;
        swap(a[i], a[j]);
    }
    quicksort(a, i);
    quicksort(a + i, n - i);
}
 
int main () {
    ll n, i;
    while(scanf("%lld", &n) && n){
        for(i = 0; i < n; ++i)
            scanf("%d", &A[i]);
 
        quicksort(A, n);
 
        for (i = 0; i < n; i++)
            printf("%d%s", A[i], i == n - 1 ? "\n" : " ");
 
    }
}
#include<bits/stdc++.h>

using namespace std;

long long horner(int a[], int n, int x, int k)
{
    if (k==0) return a[k];
    if (k>0) return (x*horner(a,n,x,k-1)+a[n-k]);
}

int main()
{
    int n, x, k;
    cin>>n>>x;
    int a[50];
    for(int i=0;i<=n;i++)
    {
        cin>>a[i];
    }
    k=n;
    cout<<horner(a,n,x,k);

    return 0;
}

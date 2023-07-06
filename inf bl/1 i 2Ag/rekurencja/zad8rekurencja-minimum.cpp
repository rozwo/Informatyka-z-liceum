#include<bits/stdc++.h>

using namespace std;

long long min_n(int a[], int n)
{
    int w;
    if (n==1) return a[n];
    else
    {
        w = min_n(a,n-1);
        if (w<a[n]) return w;
        else return a[n];
    }

}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }

    cout<<min_n(a,n);

    return 0;
}

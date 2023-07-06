#include<bits/stdc++.h>

using namespace std;

long long suma(int a[], int n)
{
    if (n==1) return a[n];
    else return (suma(a,n-1)+a[n]);

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

    cout<<suma(a,n);

    return 0;
}

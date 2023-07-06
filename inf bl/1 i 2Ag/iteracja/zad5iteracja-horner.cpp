#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, x;
    cin>>n>>x;
    int a[50];
    for(int i=0;i<=n;i++)
    {
        cin>>a[i];
    }
    int w=a[0];
    for(int i=1;i<=n;i++)
    {
        w=w*x+a[i];
    }
    cout<<w;

    return 0;
}

#include<bits/stdc++.h>

using namespace std;

long long pot(int x, int n)
{
    int w;
    if (n==0) return 1;
    else
    {
        w=pot(x,n/2);
        if(n%2==0) return (w*w);
        else return (w*w*x);
    }
}

int main()
{
    int x,n;
    cin>>x>>n;
    cout<<pot(x,n);

    return 0;
}

#include<bits/stdc++.h>

using namespace std;

long long pot(int x, int n)
{
    if (n==0) return 1;
    else return x*pot(x,n-1);
}

int main()
{
    int x,n;
    cin>>x>>n;
    cout<<pot(x,n);

    return 0;
}

#include<bits/stdc++.h>

using namespace std;

long long fibo(int n)
{
    if (n==1 || n==0) return 1;
    else return fibo(n-1)+fibo(n-2);
}

int main()
{
    int n;
    cin>>n;

    cout<<fibo(n);

    return 0;
}

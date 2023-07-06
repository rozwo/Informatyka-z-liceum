#include<bits/stdc++.h>

using namespace std;

long long silnia(int n)
{
    if (n==1) return 1;
    else return silnia(n-1)*n;
}

int main()
{
    int n;
    cin>>n;

    cout<<silnia(n);

    return 0;
}

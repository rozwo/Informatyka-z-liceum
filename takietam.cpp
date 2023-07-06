#include <bits/stdc++.h>
using namespace std;

bool pierwsza(long long n)
{
    for(long long i=2; i<n && i<4574143; i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}

int main()
{
    long long w=0;
    for(long long i=2; i<20922789888000; i++)
    {
        if(pierwsza(i))
            w++;
    }
    cout<<w;

    return 0;
}

#include<bits/stdc++.h>

using namespace std;

long long nwd(int a, int b)
{
    if (b==0) return a;
    else return nwd(b,a%b);
}

int main()
{
    int a, b;
    cin>>a;
    cin>>b;
    if(a<b)
    {
        swap(a,b);
    }
    cout<<nwd(a,b);

    return 0;
}

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    cin>>a;
    cin>>b;
    while( a != b )
    {
        if( a < b ) b=b-a;
        else a=a-b;
    }
    cout << a << endl;
    return 0;
}

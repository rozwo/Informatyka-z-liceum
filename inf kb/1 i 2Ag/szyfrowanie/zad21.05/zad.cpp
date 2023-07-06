#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int k=0, n=s.size();

    char t[50][4];
    for(int i=0; i<n/4; i++)
    {
        for(int j=0; j<4; j++)
        {
            t[i][j]=0;
        }
    }

    while(k<n)
    {
        for(int i=0; i<n/4; i++)
        {
            for(int j=0; j<4; j++)
            {
                t[i][j]=s[k];
                k++;
            }
        }
    }

    for(int i=0; i<4; i++)
    {
        for(int j=0; j<n/4; j++)
        {
            cout<<t[j][i];
        }
    }

    return 0;
}

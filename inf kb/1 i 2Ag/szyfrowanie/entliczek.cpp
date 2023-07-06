#include <bits/stdc++.h>

using namespace std;

int main()
{
    int w, k;
    cin>>k;
    string s;
    string n="";
    cin>>s;
    int dl=s.length();
    w=dl/k;
    if(dl%k>0)
    {
        w++;
    }
    int m=0;
    string t[50][50];
    for(int i=0; i<w; i++)
    {
        for(int j=0; j<k; j++)
        {
            t[i][j]=" ";
        }
    }
    while(dl>=m)
    {
        for(int j=0; j<k; j++)
        {
            for(int i=0; i<w; i++)
            {
                t[i][j]=s[m];
                m++;
            }
        }
    }
    for(int i=0; i<w; i++)
    {
        for(int j=0; j<k; j++)
        {
            n=n+t[i][j];
        }
    }
    cout<<n;

    return 0;
}

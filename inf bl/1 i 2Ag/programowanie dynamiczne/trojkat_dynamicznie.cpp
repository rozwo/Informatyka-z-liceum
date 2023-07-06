#include<bits/stdc++.h>

using namespace std;

void wypisz(int n, int k, int t[50][50])
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<k; j++)
        {
            cout.width(4);
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int n, k, t[50][50];

    cout<<"(UWAGA! Liczymy od 0!)"<<endl<<endl<<"Ile wierszy? ";
    cin>>n;
    cout<<"Ile kolumn? ";
    cin>>k;

    for(int j=0; j<=k; j++)
    {
        for(int i=0; i<=n; i++)
        {
            t[i][j]=0;
        }
    }

    for(int i=0; i<=n; i++)
    {
        t[i][0]=1;
    }

    for(int j=1; j<=k; j++)
    {
        t[j][j]=1;
        for(int i=j+1; i<=n; i++)
        {
            t[i][j]=t[i-1][j-1]+t[i-1][j];
        }
    }

    wypisz(n+1,k+1,t);


    return 0;
}


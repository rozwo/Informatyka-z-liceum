#include<bits/stdc++.h>

using namespace std;

void losuj(int n, int k, int t[50][50])
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<k; j++)
        {
            t[i][j]=rand()%10;
        }
    }
}

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
    int n, k, t[50][50], s[50][50];

    cout<<"Ile wierszy? ";
    cin>>n;
    cout<<"Ile kolumn? ";
    cin>>k;

    srand(time(NULL));
    cout<<endl;
    losuj(n,k,t);
    wypisz(n,k,t);
    cout<<endl;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<k; j++)
        {
            s[i][j]=0;
        }
    }

    s[0][0]=t[0][0];
    for(int j=1; j<k; j++)
    {
        s[0][j]=s[0][j-1]+t[0][j];
    }
    for(int i=1; i<n; i++)
    {
        s[i][0]=s[i-1][0]+t[i][0];
    }

    for(int i=1; i<n; i++)
    {
        for(int j=1; j<k; j++)
        {
            if(s[i-1][j]+t[i][j]>s[i][j-1]+t[i][j])
            {
                s[i][j]=s[i-1][j]+t[i][j];
            }
            else
            {
                s[i][j]=s[i][j-1]+t[i][j];
            }
        }
    }

    wypisz(n,k,s);
    cout<<endl;

    cout<<"Najwiekszy "<<s[n-1][k-1];


    return 0;
}


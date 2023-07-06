#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, W, p[50], w[50];

    cout<<"Liczba przedmiotów ";
    cin>>n;
    cout<<endl<<"Tablica wartosci przedmiotow: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>p[i];
    }
    cout<<endl<<"Tablica mas przedmiotow: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>w[i];
    }
    cout<<endl<<"Masa plecaka ";
    cin>>W;

    int P[51][51];

    for(int j=0; j<=W; j++)
    {
        P[0][j]=0;
    }
    for(int i=0; i<=n; i++)
    {
        P[i][0]=0;
    }

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=W; j++)
        {
            if(j>=w[i-1] and P[i-1][j]<P[i][j-w[i-1]]+p[i-1])
            {
                P[i][j]=P[i][j-w[i-1]]+p[i-1];
            }
            else
            {
                P[i][j]=P[i-1][j];
            }
        }
    }

    cout<<endl<<"Najwieksza wartosc plecaka "<<P[n][W];
    cout<<endl<<"Przedmioty zapakowane do plecaka:"<<endl;

    int i, j;
    i=n;
    j=W;
    while (j>0)
    {
        if(P[i][j]==P[i-1][j])
        {
            i=i-1;
        }
        else
        {
            cout<<i<<", ";
            j=j-w[i];
        }
    }
    cout<<endl;


    return 0;
}


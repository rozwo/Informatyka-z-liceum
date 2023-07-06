#include<bits/stdc++.h>

using namespace std;

void losuj(int n, int t[50][50])
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            t[i][j]=rand()%20;
        }
    }
}

void wypisz(int n, int t[50][50])
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout.width(4);
            cout<<t[i][j]<<" ";
        }
        cout<<"\n";
    }
}

void suma(int n, int t1[50][50], int t2[50][50], int t3[50][50])
{

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            t3[i][j]=t1[i][j]+t2[i][j];
        }
    }
}

int main()
{
    int A[50][50], B[50][50], C[50][50];
    int n=5;

    srand(time(NULL));

    losuj(n,A);
    losuj(n,B);
    wypisz(n,A);
    cout<<endl;
    wypisz(n,B);
    cout<<endl;
    suma(n,A,B,C);
    wypisz(n,C);
    cout<<endl;


    return 0;
}

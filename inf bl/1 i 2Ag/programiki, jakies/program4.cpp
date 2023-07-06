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

void przestaw(int k1, int k2, int n, int t[50][50])
{
   for(int i=0; i<n; i++)
   {
       int trup;
       trup=t[i][k1];       //swap(t[i][k1],t[i][k2])
       t[i][k1]=t[i][k2];   //
       t[i][k2]=trup;       //
   }
}

int main()
{
    int t[50][50];
    int n, p, d;
    cout<<"podaj wymiar dla tablicy kwadratowej ";
    cin>>n;
    cout<<endl;

    srand(time(NULL));

    losuj(n,t);
    cout<<endl<<"tablica t: "<<endl;
    wypisz(n,t);
    cout<<endl;
    cout<<"podaj numery dwoch kolumn ";
    cin>>p;
    cout<<", ";
    cin>>d;
    cout<<endl;
    przestaw(p,d,n,t);
    cout<<endl<<"tablica t: "<<endl;
    wypisz(n,t);
    cout<<endl;



    return 0;
}


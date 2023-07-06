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

void niezer(int n, int t[50][50])
{
    int kol=0;
    int mini=n;
    for(int j=0;j<n;j++)
    {
        int ile=0;
        for(int i=0;i<n;i++)
        {
              if(t[i][j]!=0)
                    ile++;
        }
        if(ile<mini)
        {
            mini=ile;
            kol=j;
        }
    }
    cout<<"kolumna o najmniejszej liczbie elementów niezerowych to "<<kol<<endl<<"(kolumny sa numerowane od 0 do n)";
}

int main()
{
    int t[50][50];
    int n;
    cout<<"podaj wymiar dla tablicy kwadratowej ";
    cin>>n;
    cout<<endl;
    srand(time(NULL));

    losuj(n,t);
    wypisz(n,t);
    cout<<endl;
    niezer(n,t);
    cout<<endl;


    return 0;
}


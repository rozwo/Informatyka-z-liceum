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

void policzzeraprzekatna(int n, int t[50][50])
{
    int z=0;
    for(int i=0; i<n; i++)
    {
        int x=t[i][i];
        do
        {
            int m=x%10;
            if (m==0)
                z++;
            x=x/10;
        }while(x!=0);
    }
    cout<<"na przekatnej tej tablicy zero wystapilo: "<<z<<" raz(y)";
}

int main()
{
    int t[50][50];
    int n=5;

    srand(time(NULL));

    losuj(n,t);
    wypisz(n,t);
    cout<<endl;
    policzzeraprzekatna(n,t);
    cout<<endl;


    return 0;
}


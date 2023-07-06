#include<bits/stdc++.h>

using namespace std;

void losuj(int n, int t[50][50])
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            t[i][j]=rand()%2;
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

bool takie_same(int w1, int w2, int n, int t[50][50])
{
    for(int k=0; k<n; k++)
    {
        if(t[w1][k]!=t[w2][k])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int t[50][50];
    int n;
    cout<<"podaj wymiar dla tablicy kwadratowej ";
    cin>>n;
    cout<<endl;
    int czywyst[50], ile[50];

    srand(time(NULL));

    losuj(n,t);
    wypisz(n,t);
    cout<<endl;

    for(int i=0; i<n; i++)
    {
        czywyst[i]=0;
        ile[i]=0;
    }

    for(int i=0; i<n; i++)
    {
        if(czywyst[i]==0)
        {
            czywyst[i]=1;
            ile[i]=1;
            for(int j=i+1; j<n; j++)
            {
                if(takie_same(i,j,n,t)==true)
                {
                    ile[i]++;
                    czywyst[j]=1;
                }
            }
        }
    }
    for(int i=0; i<n;i++)
    {
        if(ile[i]!=0)
        {
            cout<<"wiersz "<<i<<" wystapil "<<ile[i]<<" razy"<<endl;
        }
    }

    return 0;
}



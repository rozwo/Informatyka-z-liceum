#include<bits/stdc++.h>
                        //Róża Wójcicka 2ag - zadanie 14
using namespace std;

void losuj(int n, int t[50][50])
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            t[i][j]=rand()%1000;
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

int suma(int n, int t[50][50])
{
    int s=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            int x=t[i][j];
            if((t[i][j]%10)%2!=0)
            {
                while(x>9)
                {
                    x=x/10;
                }
                if(x%2!=0)
                {
                    s=s+t[i][j];
                }
            }
        }
    }
    return s;
}

int main()
{
    int t[50][50];
    int n;
    cout<<"podaj wymiar dla tablicy kwadratowej: ";
    cin>>n;
    cout<<endl;
    srand(time(NULL));

    losuj(n,t);
    wypisz(n,t);
    cout<<endl;
    cout<<"suma liczb, ktorych pierwsza i ostatnia liczba jest nieparzysta: "<<suma(n,t);
    cout<<endl;


    return 0;
}


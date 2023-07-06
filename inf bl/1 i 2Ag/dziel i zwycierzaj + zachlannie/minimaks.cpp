#include<bits/stdc++.h>

using namespace std;

void losuj(int n, int t[20])
{
    for(int i=0; i<n; i++)
    {
        t[i]=rand()%20;
    }
}

void wypisz(int n, int t[50])
{
    for(int i=0; i<n; i++)
    {
        cout.width(4);
        cout<<t[i]<<" ";
    }
}

void minimaks(int p, int k, int T[100], int &mini, int &maks)
{
    int s, mini1, mini2, maks1, maks2;
    if(k-p==0)
    {
        mini=T[p];
        maks=T[k];
    }
    else //wiecej niz jeden element
    {
        if(k-p==1) //sa 2 elementy
        {
            if(T[p]>T[k])
            {
                mini=T[k];
                maks=T[p];
            }
            else
            {
                mini=T[p];
                maks=T[k];
            }
        }
        else //wiecej niz 2 elementy
        {
            s=(p+k)/2;
            minimaks(p, s, T, mini1, maks1);
            minimaks(s+1, k, T, mini2, maks2);
            if(mini1<mini2)
                mini=mini1;
            else
                mini=mini2;
            if(maks1>maks2)
                maks=maks1;
            else
                maks=maks2;
        }
    }
}

int main()
{
    int T[20], p=0, k=9, mini, maks;

    srand(time(NULL));

    losuj(10,T);
    wypisz(10,T);
    cout<<endl;
    minimaks(p, k, T, mini, maks);
    cout<<"Min: "<<mini<<" Maks: "<<maks;


    return 0;
}


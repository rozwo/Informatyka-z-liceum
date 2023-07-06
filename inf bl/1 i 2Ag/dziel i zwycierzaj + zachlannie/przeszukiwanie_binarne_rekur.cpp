#include<bits/stdc++.h>

using namespace std;

void losuj(int n, int t[])
{
    for(int i=0; i<n; i++)
    {
        t[i]=rand()%20;
    }
}

void wypisz(int n, int t[])
{
    for(int i=0; i<n; i++)
    {
        cout.width(4);
        cout<<t[i]<<" ";
    }
}

void Merge(int p, int s, int k, int T[])
{
    int m, n;
    int i=p;
    int j=s+1;
    int e=0;
    int C[50];
    //etap I
    while((i<=s)&&(j<=k))
    {
        if(T[i]<T[j])
        {
            C[e]=T[i];
            i++;
            e++;
        }
        else
        {
            C[e]=T[j];
            j++;
            e++;
        }
    }
    //etap II
    if(i>s) //skonczyl sie ciag nr 1
    {
        while(j<=k)
        {
            C[e]=T[j];
            j++;
            e++;
        }
    }
    else    //nie ciag nr 1 tylko ciag nr 2
    {
        while(i<=s)
        {
            C[e]=T[i];
            i++;
            e++;
        }
    }
    //etap III przepisywanie gotowej tablicy
    for(int u=p; u<=k; u++)
    {
        T[u]=C[u-p];
    }

}

void MergeSort(int p, int k, int T[])
{
    int s;
    if(k-p!=0)
    {
        s=(p+k)/2;
        MergeSort(p,s,T);
        MergeSort(s+1,k,T);
        Merge(p,s,k,T);

    }
}

int BinSearch(int t[], int p, int k, int e)
{
    int s;
    if(k<p)
    {
        return -1;  //nie ma elementow tablicy
    }
    else
    {
        s = (p+k)/2;
        if (t[s]==e)
        {
            return s;
        }
        else
        {
            if (t[s]>e)
            {
                return BinSearch(t, p, s-1, e);
            }
            else
            {
                return BinSearch (t, s+1, k, e);
            }
        }
    }
    /*
    Uwaga:
    (k<p lub t[s]==e) -> koniec
    (k>=p oraz t[s]!=e) -> wykonuj
    */
}

int main()
{
    int t[50];
    int p=0, k=9, e;

    srand(time(NULL));

    losuj(10,t);
    cout<<"Tablica: "<<endl;
    wypisz(10,t);
    cout<<endl;
    MergeSort(p, k, t);
    cout<<"Posortowana tablica: "<<endl;
    wypisz(10,t);
    cout<<endl;
    cin>>e;
    cout<<BinSearch(t,p,k,e)<<endl;


    return 0;
}


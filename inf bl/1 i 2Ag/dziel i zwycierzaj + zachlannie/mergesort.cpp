#include<bits/stdc++.h>

using namespace std;

void losuj(int n, int T[])
{
    for(int i=0; i<n; i++)
    {
        T[i]=rand()%20;
    }
}

void wypisz(int n, int T[])
{
    for(int i=0; i<n; i++)
    {
        cout.width(4);
        cout<<T[i]<<" ";
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

int main()
{
    int T[50];
    int p=0, k=9;

    srand(time(NULL));

    losuj(10,T);
    cout<<"Tablica: "<<endl;
    wypisz(10,T);
    cout<<endl;
    MergeSort(p, k, T);
    cout<<"Posortowana tablica: "<<endl;
    wypisz(10,T);
    cout<<endl;


    return 0;
}


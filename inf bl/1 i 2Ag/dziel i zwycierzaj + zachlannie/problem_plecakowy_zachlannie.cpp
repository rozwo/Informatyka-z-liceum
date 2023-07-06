#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, W, P, p[50], w[50], przedmioty[50], tmp2;
    double ilorazy[50], tmp;

    cout<<"(UWAGA! W tym programie przedmioty sa numerowane od 0!)"<<endl<<endl;
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
    for(int i=0; i<n; i++)
    {
        ilorazy[i]=1.0*p[i]/w[i];
        przedmioty[i]=i;
    }
    for(int i=0; i<n; i++)
    {
        for(int j=1; j<n-i; j++)
        {
            if(ilorazy[j-1]<ilorazy[j])
            {
                tmp=ilorazy[j-1];
                ilorazy[j-1]=ilorazy[j];
                ilorazy[j]=tmp;

                tmp2=przedmioty[j-1];
                przedmioty[j-1]=przedmioty[j];
                przedmioty[j]=tmp2;
            }
        }
    }
    cout<<endl<<"Przedmioty zapakowane do plecaka:"<<endl<<"(w tej samej kolejnosci, w ktorej zostaly wymienione)"<<endl;
    P=0;
    int i=0;
    while(W>0 and i<n)
    {
        if(W>=w[przedmioty[i]])
        {
            cout<<przedmioty[i]<<", ";
            P=P+p[przedmioty[i]];
            W=W-w[przedmioty[i]];
        }
        else
        {
            i++;
        }
    }
    cout<<endl<<endl<<"Wartosc plecaka po spakowaniu go: "<<endl<<P<<endl;



    return 0;
}


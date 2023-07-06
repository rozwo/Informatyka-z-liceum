#include <bits/stdc++.h>
using namespace std;

ifstream fin;
ofstream fout;

//int najwieksza;

int luka(int n, int x)
{
    if(n>x)
    {
        return n-x;
    }
    else
    {
        return x-n;
    }
}

void zad1()
{
    fin.open("dane4.txt");
    int n, x, maks=0, mini=2000000000;
    fin>>n;
    for(int i=1; i<1000; i++)
    {
        fin>>x;
        if(luka(n,x)>maks)
        {
            maks=luka(n,x);
        }
        if(luka(n,x)<mini)
        {
            mini=luka(n,x);
        }
        n=x;
    }
    //najwieksza=maks;
    fout<<"4.1"<<endl<<"najwieksza "<<maks<<endl<<"najmniejsza "<<mini<<endl;
    fin.close();
}

void zad2()
{
    fin.open("dane4.txt");
    int n, x, maks=1, p, k, a, akt=1, l;
    fin>>n;
    for(int i=1; i<1000; i++)
    {
        fin>>x;
        if(akt==1)
        {
            l=luka(n,x);
            a=n;
            akt++;
        }
        else
        {
            if(l==luka(n,x))
            {
                akt++;
                if(akt>maks)
                {
                    maks=akt;
                    p=a;
                    k=x;
                }
            }
            else
            {
                akt=2;
                l=luka(n,x);
                a=n;
            }
        }
        n=x;
    }
    fout<<endl<<"4.2"<<endl<<"dlugosc "<<maks<<endl<<"poczatek "<<p<<endl<<"koniec "<<k<<endl;
    fin.close();
}

/*void zad3pierwotnie() //nie dziala
{
    fin.open("dane4.txt");
    int t[najwieksza+1]={};
    int n, x, maks=0;
    fout<<endl<<"4.3"<<endl;
    fin>>n;
    for(int i=1; i<1000; i++)
    {
        fin>>x;
        t[luka(n,x)]++;
        n=x;
    }
    for(int i=1; i<=najwieksza; i++)
    {
        if(t[i]>maks)
        {
            maks=t[i];
        }
    }
    fout<<maks<<endl;
    for(int i=1; i<=najwieksza; i++)
    {
        if(t[i]==maks)
        {
            fout<<" "<<i;
        }
    }
    fout<<endl;
    fin.close();
}*/

void zad3()
{
    fin.open("dane4.txt");
    int t[1000]={}, t2[1000][2]={};
    int maks=0;
    fout<<endl<<"4.3"<<endl;
    for(int i=0; i<1000; i++)
    {
        fin>>t[i];
    }
    sort(t,t+1000);
    for(int i=0; i<1000; i++)//szukam maksa w tablicy
    {
        for(int j=0; j<1000; j++)
        {
            t2[i][1]=t[j];

        }
    }
    fout<<maks<<endl;
    for(int i=0; i<1000; i++)//szukam wartosci wystepujacych maks razy
    {

    }
    fout<<endl;
    fin.close();
}

int main()
{
    fout.open("zadanie4.txt");
    zad1();
    zad2();
    zad3();
    fout.close();
    return 0;
}

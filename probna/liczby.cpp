#include <bits/stdc++.h>
using namespace std;

ifstream fin;
ofstream fout;

bool dokl_dwie(int n)
{
    int ile=0;
    while(n>0)
    {
        if(n%10==9)
        {
            ile++;
        }
        n=n/10;
    }
    if(ile==2)
    {
        return true;
    }
    return false;
}

int ile_dziel(int n)
{
    int ile=0;
    for(int i=1; i<n; i++)
    {
        if(n%i==0)
        {
            ile++;
        }
    }
    return ile;
}

int suma_dziel(int n)
{
    int s=0;
    for(int i=1; i<n; i++)
    {
        if(n%i==0)
        {
            s=s+i;
        }
    }
    return s;
}

bool zaprzyjaznione(int n, int x)
{
    if(suma_dziel(n)==x && suma_dziel(x)==n)
    {
        return true;
    }
    return false;
}

bool polpierwsza(int n)
{
    int x=n, ile=0;
    while(x%2==0)
    {
        x=x/2;
        ile++;
    }
    for(int i=3; i<n; i=i+2)
    {
        while(x%i==0)
        {
            x=x/i;
            ile++;
        }
    }
    if(ile==2)
    {
        return true;
    }
    return false;
}

void zad1()
{
    fin.open("liczby.txt");
    int n, ile=0;
    for(int i=0; i<(2*1500); i++)
    {
        fin>>n;
        if(dokl_dwie(n))
        {
            ile++;
        }
    }
    fout<<"4.1"<<endl<<ile<<endl;
    fin.close();
}

void zad2()
{
    fin.open("liczby.txt");
    int n, x, ile=0;
    int minn, minx, mind=0;
    for(int i=0; i<1500; i++)
    {
        fin>>n;
        fin>>x;
        if(zaprzyjaznione(n,x))
        {
            ile++;
            if(mind==0)
            {
                mind=ile_dziel(n)+ile_dziel(x);
                minn=n;
                minx=x;
            }
            if((ile_dziel(n)+ile_dziel(x))<mind)
            {
                minn=n;
                minx=x;
            }
        }
    }
    fout<<endl<<"4.2"<<endl<<ile<<endl<<minn<<" "<<minx<<" "<<mind<<endl;
    fin.close();
}

void zad3()
{
    fin.open("liczby.txt");
    int n, ile=0;
    int mini, maks;
    for(int i=0; i<(1500*2); i++)
    {
        fin>>n;
        if(polpierwsza(n))
        {
            if(ile==0)
            {
                mini=n;
                maks=n;
            }
            ile++;
            if(n<mini)
            {
                mini=n;
            }
            if(n>maks)
            {
                maks=n;
            }
        }
    }
    fout<<endl<<"4.3"<<endl<<ile<<endl<<mini<<" "<<maks;
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

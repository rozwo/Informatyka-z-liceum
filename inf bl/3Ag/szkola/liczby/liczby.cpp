#include <bits/stdc++.h>
using namespace std;

ifstream fin;
ofstream fout;

bool pot_tro(int n)
{
    while(n!=1)
    {
        if(n%3!=0)
        {
            return false;
        }
        n=n/3;
    }
    return true;
}

int silnia(int n)
{
    if(n==0)
        return 1;
    int s=1;
    for(int i=1; i<=n; i++)
    {
        s=s*i;
    }
    return s;
}

int suma_silni_cyfr(int n)
{
    int s=0;
    while(n>0)
    {
        s=s+silnia(n%10);
        n=n/10;
    }
    return s;
}

int nwd(int a, int b)
{
    if(b==0)
        return a;
    else
        return nwd(b,a%b);
}

void zad1()
{
    fin.open("liczby.txt");
    int ile=0;
    for(int i=0; i<500; i++)
    {
        int n;
        fin>>n;
        if(pot_tro(n))
            ile++;
    }
    fout<<"Zadanie 1: "<<ile<<endl;
    fin.close();
}

void zad2()
{
    fin.open("liczby.txt");
    fout<<"Zadanie 2: "<<endl;
    for(int i=0; i<500; i++)
    {
        int n;
        fin>>n;
        if(n==suma_silni_cyfr(n))
        {
            fout<<n<<endl;
        }
    }
    fin.close();
}

void zad3()
{
    fin.open("liczby.txt");
    int t[500];
    for(int i=0; i<500; i++)
    {
        fin>>t[i];
    }
    int maks=0, najd, p, x;
    for(int i=0; i<499; i++)
    {
        int d=t[i], akt=1, j=i+1;
        while(d>1 && j<500)
        {
            x=d;
            d=nwd(d,t[j]);
            akt++;
            j++;
        }
        akt--;
        if(akt>maks)
        {
            maks=akt;
            najd=x;
            p=t[i];
        }
    }
    fout<<"Zadanie 3: "<<endl<<"-pierwsza liczba ciagu "<<p<<endl<<"-dlugosc "<<maks<<endl<<"-nwd "<<najd<<endl;
    fin.close();
}

int main()
{
    fout.open("wyniki4.txt");
    zad1();
    zad2();
    zad3();
    fout.close();

    return 0;
}

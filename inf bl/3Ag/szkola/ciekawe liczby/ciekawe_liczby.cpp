#include <bits/stdc++.h>
using namespace std;

ifstream fin;
ofstream fout;

int odw(int n)
{
    int odw=0;
    while(n>0)
    {
        odw=odw*10+n%10;
        n=n/10;
    }
    return odw;
}

bool warunek(int n)
{
    if(n%2==0)
    {
        return false;
    }
    int licz=0;
    for(int i=3; i<=n; i=i+2)
    {
        if(n%i==0)
        {
            licz++;
            if(licz>3)
            {
                return false;
            }
            while(n%i==0)
            {
                n=n/i;
            }
        }
    }
    return (licz==3);
}

int ilo(int n)
{
    int x=1;
    while(n>0)
    {
        x=x*(n%10);
        n=n/10;
    }
    return x;
}

int moc(int n)
{
    int k=0;
    while(n>9)
    {
        n=ilo(n);
        k++;
    }
    return k;
}

void zad1()
{
    fin.open("liczby.txt");
    int ile=0;

    for(int i=0; i<1000; i++)
    {
        int n;
        fin>>n;
        if(warunek(n)==1)
        {
            ile++;
        }
    }

    fout<<"Zadanie 1: "<<ile<<endl;
    fin.close();
}

void zad2()
{
    fin.open("liczby.txt");
    int ile=0;
    for(int i=0; i<1000; i++)
    {
        int n;
        fin>>n;
        int s=n+odw(n);
        if(s==odw(s))
        {
            ile++;
        }
    }
    fout<<"Zadanie 2: "<<ile<<endl;
    fin.close();
}

void zad3()
{
    fin.open("liczby.txt");
    int t[9]={};
    int n, mini=999999990, maxi=0;
    for(int i=1; i<=1000; i++)
    {
        fin>>n;
        t[moc(n)]++;
        if(moc(n)==1)
        {
            if(n<mini)
            {
                mini=n;
            }
            if(n>maxi)
            {
                maxi=n;
            }
        }
    }
    fout<<"Zadanie 3: "<<endl;
    for(int i=1; i<=8; i++)
    {
        fout<<"O mocy "<<i<<": "<<t[i]<<endl;
    }
    fout<<"Minimalna o mocy 1: "<<mini<<endl;
    fout<<"Maksymalna o mocy 1: "<<maxi<<endl;
    fin.close();
}

int main()
{
    fout.open("wyniki_liczby.txt");

    zad1();
    zad2();
    zad3();

    fout.close();

    return 0;
}

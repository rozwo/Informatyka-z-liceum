#include <bits/stdc++.h>
using namespace std;

ifstream fin;
ofstream fout;

int iledziel(int n)
{
    int ile=0;
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            ile++;
        }
    }
    return ile;
}

int nwd(int n, int m)
{
    if(n<m)
    {
        for(int i=n; i>0; i--)
        {
            if(n%i==0)
            {
                if(m%i==0)
                {
                    return i;
                }
            }
        }
    }
    else
    {
        for(int i=m; i>0; i--)
        {
            if(m%i==0)
            {
                if(n%i==0)
                {
                    return i;
                }
            }
        }
    }
}

void zad1()
{
    fin.open("liczby.txt");
    int n, p=1000, d=1000, ile=0;
    for(int i=0; i<200; i++)
    {
        fin>>n;
        if(n<1000)
        {
            ile++;
            p=d;
            d=n;
        }
    }
    fout<<"60.1"<<endl<<ile<<endl<<p<<" "<<d<<endl;
    fin.close();
}

void zad2()
{
    fin.open("liczby.txt");
    fout<<endl<<"60.2"<<endl;
    int n;
    for(int i=0; i<200; i++)
    {
        fin>>n;
        if(iledziel(n)==18)
        {
            fout<<n;
            for(int j=1; j<=n; j++)
            {
                if(n%j==0)
                {
                    fout<<" "<<j;
                }
            }
            fout<<endl;
        }
    }
    fin.close();
}

void zad3()
{
    fin.open("liczby.txt");
    int t[200]={}, maks, ile=0, wp=0;
    for(int i=0; i<200; i++)
    {
        fin>>t[i];
    }
    for(int i=0; i<200; i++)
    {
        ile=0;
        for(int j=0; j<200; j++)
        {
            if(nwd(t[i],t[j])==1)
            {
                ile++;
            }
        }
        if(ile==199)
        {
            wp++;
            if(wp==1)
            {
                maks=t[i];
            }
            if(maks<t[i])
            {
                maks=t[i];
            }
        }
    }
    fout<<endl<<"60.3"<<endl<<maks<<endl;
    fin.close();
}

int main()
{
    fout.open("wyniki.txt");
    zad1();
    zad2();
    zad3();
    fout.close();
    return 0;
}

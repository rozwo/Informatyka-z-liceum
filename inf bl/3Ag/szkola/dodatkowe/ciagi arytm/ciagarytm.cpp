#include <bits/stdc++.h>
using namespace std;

ifstream fin;
ofstream fout;

bool arytm(int t[], int n)
{
    int r=t[1]-t[0];
    for(int i=2; i<n; i++)
    {
        if(t[i]-t[i-1]!=r)
            return false;
    }
    return true;
}

bool szescian(int n, int t[])
{
    for(int i=1; i<=100; i++)
    {
        if(n==t[i])
            return true;
    }
    return false;
}

int blad(int n, int t[])
{
    int r[n];
    for(int i=1; i<n; i++)
    {
        r[i]=t[i]-t[i-1];
    }
    if(r[1]==r[2])
    {
        for(int i=4; i<n; i++)
        {
            if(r[i]!=r[i-1])
                return t[i];
        }
    }
    if(r[1]!=r[2] && r[2]==r[3])
        return 1;
    if(r[1]!=r[2] && r[2]!=r[3] && r[3]==r[4])
        return 2;
    if(r[1]!=r[2] && r[2]!=r[3] && r[3]!=r[4])
        return 3;
}

void zad1()
{
    fin.open("ciagi.txt");
    int maks=0, ile=0;
    for(int j=0; j<100; j++)
    {
        int n, r=0;
        fin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            fin>>a[i];
        }
        if(arytm(a,n))
        {
            ile++;
            r=a[1]-a[0];
            if(r>maks)
                maks=r;
        }
    }
    fout<<"Liczba ciagow arytm: "<<ile<<endl<<"Maksymalna roznica: "<<maks;
    fin.close();
}

void zad2()
{
    fin.open("ciagi.txt");
    int t[101]={};
    for(int i=1; i<=100; i++)
    {
        t[i]=i*i*i;
    }
    for(int j=0; j<100; j++)
    {
        int n, x, maks=0;
        fin>>n;
        for(int i=0; i<n; i++)
        {
            fin>>x;
            if(szescian(x,t))
            {
                if(x>maks)
                    maks=x;
            }
        }
        if(maks!=0)
            fout<<maks<<endl;
    }
    fin.close();
}

void zad3()
{
    fin.open("bledne.txt");
    int n, x;
    for(int j=0; j<20; j++)
    {
        fin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            fin>>a[i];

        }
        fout<<blad(n,a)<<endl;
    }
    fin.close();
}

int main()
{
    fout.open("wyniki1.txt");
    zad1();
    fout.close();
    fout.open("wyniki2.txt");
    zad2();
    fout.close();
    fout.open("wyniki3.txt");
    zad3();
    fout.close();

    return 0;
}

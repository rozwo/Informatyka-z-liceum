#include <bits/stdc++.h>
using namespace std;

ifstream fin;
ofstream fout;

int osnadzie(int n)
{
    int x=0, k=1;
    for(int i=0; i<6; i++)
    {
        x=x+(n%10)*k;
        n=n/10;
        k=k*8;
    }
    return x;
}

int dzienaos(int n)
{
    int k=8*8*8*8*8*8, x=0;
    for(int i=7; i>0; i--)
    {
        x=x*10;
        while(n>=k)
        {
            n=n-k;
            x++;
        }
        k=k/8;
    }
    return x;
}

int szostki(int n)
{
    int ile=0;
    for(int i=0; i<7; i++)
    {
        if(n%10==6)
        {
            ile++;
        }
        n=n/10;
    }
    return ile;
}

void zad1()
{
    fin.open("liczby1.txt");
    int n, maks, mini;
    for(int i=0; i<1000; i++)
    {
        fin>>n;
        if(i==0)
        {
            maks=n;
            mini=n;
        }
        if(n>maks)
        {
            maks=n;
        }
        if(n<mini)
        {
            mini=n;
        }
    }
    fout<<"Zad 1"<<endl<<"Maks "<<maks<<endl<<"Mini "<<mini<<endl;
    fin.close();
}

void zad2()
{
    fin.open("liczby2.txt");
    int t[1000], m, k, ile=1;
    for(int i=0; i<1000; i++)
    {
        fin>>t[i];
    }
    k=t[0];
    m=t[0];
    int maks=1;
    for(int i=1; i<1000; i++)
    {
        if(t[i-1]<=t[i])
        {
            ile++;
        }
        else
        {
            if(ile>maks)
            {
                maks=ile;
                m=k;
            }
            k=t[i];
            ile=1;
        }
    }
    fout<<endl<<"Zad 2"<<endl<<m<<" "<<maks<<endl;
    fin.close();
}

void zad3()
{
    fin.open("liczby1.txt");
    int t1[1000]={};
    for(int i=0; i<1000; i++)
    {
        fin>>t1[i];
    }
    fin.close();
    fin.open("liczby2.txt");
    int t2[1000]={};
    for(int i=0; i<1000; i++)
    {
        fin>>t2[i];
    }
    fin.close();
    int ilea=0, ileb=0;
    for(int i=0; i<1000; i++)
    {
        if(osnadzie(t1[i])==t2[i])
        {
            ilea++;
        }
        if(osnadzie(t1[i])>t2[i])
        {
            ileb++;
        }
    }
    fout<<endl<<"Zad 3"<<endl<<"a) "<<ilea<<endl<<"b) "<<ileb<<endl;
}

void zad4()
{
    fin.open("liczby2.txt");
    int n, ilea=0, ileb=0;
    for(int i=0; i<1000; i++)
    {
        fin>>n;
        ilea=ilea+szostki(n);
        ileb=ileb+szostki(dzienaos(n));
    }
    fout<<endl<<"Zad 4"<<endl<<ilea<<endl<<ileb<<endl;
    fin.close();
}

int main()
{
    fout.open("wyniki.txt");
    zad1();
    zad2();
    zad3();
    zad4();
    fout.close();

    return 0;
}

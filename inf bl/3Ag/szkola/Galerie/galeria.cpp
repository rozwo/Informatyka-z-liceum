#include <bits/stdc++.h>
using namespace std;

ifstream fin;
ofstream fout;

void zad1()
{
    fin.open("galerie.txt");
    int n=50;
    string t[n]={}, m;
    int s, d, ile=1;
    for(int i=0; i<n; i++)
    {
        fin>>t[i]>>m;
        for(int j=0; j<70; j++)
        {
            fin>>s>>d;
        }
    }
    sort(t,t+n);
    for(int i=1; i<n; i++)
    {
        if(t[i-1]==t[i])
        {
            ile++;
        }
        else
        {
            fout<<t[i-1]<<" "<<ile<<endl;
            ile=1;
        }
    }
    fout<<t[n-1]<<" "<<ile<<endl;
    fin.close();
}

void zad2()
{
    fin.open("galerie.txt");
    fout.open("wyniki4_2a.txt");
    int n=50;
    string k, m;
    int sz, dl, ile=1;
    string mmaks, mmini;
    int maks, mini;
    for(int i=0; i<n; i++)
    {
        int ile=0, s=0;
        fin>>k>>m;
        for(int j=0; j<70; j++)
        {
            fin>>sz>>dl;
            s=s+sz*dl;
            if(sz!=0)
            {
                ile++;
            }
        }
        fout<<m<<" "<<s<<" "<<ile<<endl;
        if(i==0)
        {
            mmaks=m;
            mmini=m;
            maks=s;
            mini=s;
        }
        if(s>maks)
        {
            mmaks=m;
            maks=s;
        }
        if(s<mini)
        {
            mmini=m;
            mini=s;
        }
    }
    fout.close();
    fout.open("wyniki4_2b.txt");
    fout<<mmaks<<" "<<maks<<endl<<mmini<<" "<<mini<<endl;
    fout.close();
    fin.close();
}

int roznych(int t[])
{
    sort(t,t+70);
    int r=1;
    if(t[0]==0)
    {
        r--;
    }
    for(int i=1; i<70; i++)
    {
        if(t[i-1]!=t[i])
        {
            r++;
        }
    }
    return r;
}

void zad3()
{
    fin.open("galerie.txt");
    int n=50;
    string k, m;
    int sz, dl;
    string mmaks, mmini;
    int maks, mini;
    for(int i=0; i<n; i++)
    {
        int t[70]={};
        fin>>k>>m;
        for(int j=0; j<70; j++)
        {
            fin>>sz>>dl;
            t[j]=sz*dl;
        }
        int ile=roznych(t);
        if(i==0)
        {
            mmaks=m;
            mmini=m;
            maks=ile;
            mini=ile;
        }
        if(ile>maks)
        {
            mmaks=m;
            maks=ile;
        }
        if(ile<mini)
        {
            mmini=m;
            mini=ile;
        }
    }
    fout<<mmaks<<" "<<maks<<endl<<mmini<<" "<<mini<<endl;
    fin.close();
}

int main()
{
    fout.open("wyniki4_1.txt");
    zad1();
    fout.close();
    zad2();
    fout.open("wyniki4_3.txt");
    zad3();
    fout.close();

    return 0;
}

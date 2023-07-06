#include <bits/stdc++.h>
using namespace std;

ifstream fin;
ofstream fout;

bool tylko_cyfry(string n)
{
    for(int i=0; i<n.length(); i++)
    {
        if(n[i]<'0' or n[i]>'9')
        {
            return false;
        }
    }
    return true;
}

bool czy_wystepuje_frag(string n)
{
    string s;
    if(n.length()<4)
    {
        return false;
    }
    for(int i=3; i<n.length(); i++)
    {
        s="";
        for(int j=(i-3);j<(i+1);j++)
        {
            s=s+n[j];
        }
        sort(s.begin(),s.end());
        if(s[3]-s[2]==1 && s[2]-s[1]==1 && s[1]-s[0]==1)
        {
            return true;
        }
    }
    return false;
}

bool zaw_cyf(string n)
{
    for(int i=0; i<n.length(); i++)
    {
        if(n[i]>='0' && n[i]<='9')
        {
            return true;
        }
    }
    return false;
}

bool zaw_mlit(string n)
{
    for(int i=0; i<n.length(); i++)
    {
        if(n[i]>='a' && n[i]<='z')
        {
            return true;
        }
    }
    return false;
}

bool zaw_dlit(string n)
{
    for(int i=0; i<n.length(); i++)
    {
        if(n[i]>='A' && n[i]<='Z')
        {
            return true;
        }
    }
    return false;
}

void zad1()
{
    fin.open("hasla.txt");
    string n;
    int ile=0;
    for(int i=0; i<200; i++)
    {
        fin>>n;
        if(tylko_cyfry(n))
            ile++;
    }
    fout<<"Zadanie 1: "<<ile<<endl;
    fin.close();
}

void zad2()
{
    fin.open("hasla.txt");
    fout<<"Zadanie 2:"<<endl;
    string t[200]={};
    for(int i=0; i<200; i++)
    {
        fin>>t[i];
    }
    sort(t,t+200);
    int x=0;
    for(int j=1; j<200; j++)
    {
        if(x==0 && t[j-1]==t[j])
        {
            fout<<t[j]<<endl;
            x=1;
        }
        else
            x=0;
    }
    fin.close();
}

void zad3()
{
    fin.open("hasla.txt");
    int ile=0;
    string n;
    for(int i=0; i<200; i++)
    {
        fin>>n;
        if(czy_wystepuje_frag(n))
            ile++;
    }
    fout<<"Zadanie 3: "<<ile<<endl;
    fin.close();
}

void zad4()
{
    fin.open("hasla.txt");
    string n;
    int ile=0;
    for(int i=0; i<200; i++)
    {
        fin>>n;
        if(zaw_cyf(n) && zaw_mlit(n) && zaw_dlit(n))
            ile++;
    }
    fout<<"Zadanie 4: "<<ile<<endl;
    fin.close();
}


int main()
{
    fout.open("wyniki_hasla.txt");
    zad1();
    zad2();
    zad3();
    zad4();
    fout.close();

    return 0;
}

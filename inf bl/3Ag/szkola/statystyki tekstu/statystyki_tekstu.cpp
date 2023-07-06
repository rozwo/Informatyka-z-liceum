#include <bits/stdc++.h>
using namespace std;
ifstream fin;
ofstream fout;

bool dwie_kol(string n)
{
    for(int i=1; i<n.length(); i++)
    {
        if(n[i-1]==n[i])
        {
            return true;
        }
    }
    return false;
}

void zad1()
{
    fin.open("tekst.txt");
    string n;
    int ile=0;
    for(int i=0; i<1876; i++)
    {
        fin>>n;
        if(dwie_kol(n))
        {
            ile++;
        }
    }
    fout<<"Zadanie 1: "<<ile<<endl;
    fin.close();
}

void zad2()
{
    fin.open("tekst.txt");
    int t[26];
    double s=0;
    for(int i=0; i<26; i++)
    {
        t[i]=0;
    }
    string n;
    for(int i=0; i<1876; i++)
    {
        fin>>n;
        for(int j=0; j<n.length(); j++)
        {
            t[n[j]-'A']++;
        }
    }
    for(int i=0; i<26; i++)
    {
        s=s+t[i];
    }
    fout<<endl<<"Zadanie 2:"<<endl;
    for(int i=0; i<26; i++)
    {
        fout<<char(i+'A')<<": "<<t[i]<<" ("<<setprecision(3)<<100*t[i]/s<<"%)"<<endl;
    }
    fin.close();
}

void zad3()
{
    fin.open("tekst.txt");
    string n, m;
    int maks=0, iles=0;
    for(int i=0; i<1876; i++)
    {
        int ile=0;
        fin>>n;
        for(int j=0; j<n.length(); j++)
        {
            if(n[j]!='A' and n[j]!='E' and n[j]!='I' and n[j]!='O' and n[j]!='U' and n[j]!='Y')
            {
                ile++;
            }
            else
            {
                if(ile>maks)
                {
                    maks=ile;
                    m=n;
                    iles=1;
                }
                if(ile==maks)
                {
                    iles++;
                }
                ile=0;
            }
        }
        if(ile>maks)
        {
            maks=ile;
            m=n;
            iles=1;
        }
        if(ile==maks)
        {
            iles++;
        }
    }
    fout<<endl<<"Zadanie 3: "<<maks<<", "<<iles<<", "<<m;
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

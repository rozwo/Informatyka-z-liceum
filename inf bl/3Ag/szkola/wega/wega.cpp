#include <bits/stdc++.h>
using namespace std;

ifstream fin;
ofstream fout;

int ile_roz_lit(string n)
{
    int ile=0, t[26];
    for(int i=0; i<26; i++)
    {
       t[i]=0;
    }
    for(int i=0; i<n.length(); i++)
    {
       t[n[i]-'A']++;
    }
    for(int i=0; i<26; i++)
    {
       if(t[i]!=0)
       {
           ile++;
       }
    }
    return ile;
}

bool co_najwy10(string n)
{
    for(int i=0; i<n.length(); i++)
    {
        for(int j=i+1; j<n.length(); j++)
        {
            if(n[i]>n[j])
            {
                if((n[i]-n[j])>10)
                {
                    return false;
                }
            }
            if(n[j]>n[i])
            {
                if((n[j]-n[i])>10)
                {
                    return false;
                }
            }
        }
    }
    return true;
}

void zad1()
{
    fin.open("sygnaly.txt");
    string n, p="";
    for(int i=1; i<=1000; i++)
    {
       fin>>n;
       if(i%40==0)
       {
           p=p+n[9];
       }
    }
    fout<<"Zadanie 1:"<<endl<<p<<endl;
    fin.close();
}

void zad2()
{
    fin.open("sygnaly.txt");
    string n, naj;
    int maks=0;
    for(int i=0; i<1000; i++)
    {
       fin>>n;
       if(ile_roz_lit(n)>maks)
       {
           maks=ile_roz_lit(n);
           naj=n;
       }
    }
    fout<<"Zadanie 2:"<<endl<<naj<<" "<<maks<<endl;
    fin.close();
}

void zad3()
{
    fin.open("sygnaly.txt");
    string n;
    fout<<"Zadanie 3:"<<endl;
    for(int i=0; i<1000; i++)
    {
       fin>>n;
       if(co_najwy10(n)==1)
       {
           fout<<n<<endl;
       }
    }
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

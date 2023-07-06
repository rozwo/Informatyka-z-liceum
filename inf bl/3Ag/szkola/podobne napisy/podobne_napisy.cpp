#include <bits/stdc++.h>
using namespace std;
ifstream fin;
ofstream fout;

void zad1()
{
    fin.open("napisy.txt");
    string n,s,m,k;
    int ile=0;
    for(int i=0; i<200; i++)
    {
        fin>>n>>s;
        if(n.length()*3<=s.length())
        {
            ile++;
            if(ile==1)
            {
                m=n;
                k=s;
            }
        }
        if(s.length()*3<=n.length())
        {
            ile++;
            if(ile==1)
            {
                m=n;
                k=s;
            }
        }
    }
    fout<<"Zadanie 1: "<<ile<<", "<<m<<" "<<k<<endl;
    fin.close();
}

void zad2()
{
    fin.open("napisy.txt");
    string n;
    for(int i=0; i<200; i++)
    {

    }
    fout<<"Zadanie 2: ";
    fin.close();
}

void zad3()
{
    fin.open("napisy.txt");
    string n;
    for(int i=0; i<200; i++)
    {

    }
    fout<<"Zadanie 3: ";
    fin.close();
}

int main()
{
    fout.open("wyniki.txt");
    zad1();
   // zad2();
   // zad3();
    fout.close();
    return 0;
}

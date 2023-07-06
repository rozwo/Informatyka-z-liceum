#include <bits/stdc++.h>
using namespace std;

ifstream fin;
ofstream fout;

bool jednolita(string s)
{
    for(int i=1; i<s.length(); i++)
    {
        if(s[0]!=s[i])
        {
            return false;
        }
    }
    return true;
}

bool anagramy(string n, string s)
{
    if(n.length()!=s.length())
    {
        return false;
    }
    sort(n.begin(), n.end());
    sort(s.begin(), s.end());
    if(n!=s)
    {
        return false;
    }
    return true;
}

void zad1()
{
    fin.open("dane_napisy.txt");
    string n, s;
    int ile=0;
    for(int i=0; i<1000; i++)
    {
        fin>>n>>s;
        if(jednolita(n))
        {
            if(anagramy(n,s))
            {
                ile++;
            }
        }
    }
    fout<<"Zad 1"<<endl<<ile<<endl;
    fin.close();
}

void zad2()
{
    fin.open("dane_napisy.txt");
    string n, s;
    int ile=0;
    for(int i=0; i<1000; i++)
    {
        fin>>n>>s;
        if(anagramy(n,s))
        {
            ile++;
        }
    }
    fout<<endl<<"Zad 2"<<endl<<ile<<endl;
    fin.close();
}

void zad3()
{
    fin.open("dane_napisy.txt");
    string t[2000];
    for(int i=1; i<2000; i=i+2)
    {
        fin>>t[i-1]>>t[i];
    }
    int maks=0, k;
    for(int i=0; i<2000; i++)
    {
        k=0;
        for(int j=0; j<2000; j++)
        {
            if(anagramy(t[i],t[j]))
            {
                k++;
            }
        }
        if(k>maks)
        {
            maks=k;
        }
    }
    fout<<endl<<"Zad 3"<<endl<<maks<<endl;
    fin.close();
}

int main()
{
    fout.open("wyniki_anagramy.txt");
    zad1();
    zad2();
    zad3();
    fout.close();
    return 0;
}

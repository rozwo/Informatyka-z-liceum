#include <bits/stdc++.h>

using namespace std;

ifstream fin;
ofstream fout;

void zad_a()
{
    fin.open("napisy.txt");

    int ile=0;
    string n;
    for (int i=1; i<=1000; i++)
    {
        fin>>n;
        if(n.length()%2==0)
            ile++;
    }
    fout<<"zad_a: "<<ile<<endl;

    fin.close();
}

bool tyle_samo (string n)
{
    int ile0=0;
    int ile1=0;
    for (int i=0; i<n.length(); i++)
    {
        if (n[i]=='0')
            ile0++;
        else
            ile1++;
    }
    if (ile0==ile1)
        return true;
    else
        return false;
}

void zad_b()
{
    fin.open("napisy.txt");

    int ile=0;
    string n;
    for (int i=1; i<=1000; i++)
    {
        fin>>n;
        if(tyle_samo(n)==true)
            ile++;
    }
    fout<<"zad_b: "<<ile<<endl;

    fin.close();
}

bool same_zera (string n)
{
    for (int i=0; i<n.length(); i++)
    {
        if (n[i]=='1')
            return false;
    }
    return true;
}

bool same_jedynki(string n)
{
    for (int i=0; i<n.length(); i++)
    {
        if (n[i]=='0')
            return false;
    }
    return true;
}

void zad_c()
{
    fin.open("napisy.txt");

    int ile0=0;
    int ile1=0;
    string n;
    for (int i=1; i<=1000; i++)
    {
        fin>>n;
        if(same_zera(n)==true)
            ile0++;
        if (same_jedynki(n)==true)
            ile1++;
    }
    fout<<"zad_c zera: "<<ile0<<endl;
    fout<<"zad_c jedynki: "<<ile1<<endl;


    fin.close();
}

void zad_d()
{
    fin.open("napisy.txt");

    int t[17]={0};
    string n;
    int d;
    for (int i=1; i<=1000; i++)
    {
        fin>>n;
        d=n.length();
        t[d]++;
    }

    fin.close();
}

int main()
{
    fout.open("zadanie4.txt");

    zad_a();
    zad_b();
    zad_c();
    zad_d();

    fout.close();
    return 0;
}




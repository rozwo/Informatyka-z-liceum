#include <bits/stdc++.h>

using namespace std;

ifstream fin;
ofstream fout;

void zad1()
{
    fin.open("liczby.txt");
    int n;
    int maks=0;
    for(int i=0; i<1000; i++)
    {
        fin>>n;
        if(n%2==0 and n>maks)
        {
            maks=n;
        }
    }
    fout<<"Zadanie 1: ";
    fout<<maks<<endl;
    fin.close();
}

bool palindrom(string s)
{
    int d=s.length();
    for(int i=0; i<d/2; i++)
    {
        if(s[i]!=s[d-1-i])
        {
            return false;
        }
    }
    return true;
}

int zad2()
{
    fin.open("liczby.txt");
    string liczba;
    fout<<"Zadanie 2: "<<endl;
    for(int i=0; i<1000; i++)
    {
        fin>>liczba;
        if(palindrom(liczba))
        {
            fout<<liczba<<endl;
        }
    }
    fout<<endl;
    fin.close();
}

int suma_cyfr(int n)
{
    int suma=0;
    while(n>0)
    {
        suma=suma+n%10;
        n=n/10;
    }
    return suma;
}

int zad3()
{
    fin.open("liczby.txt");
    int n, sc;
    int suma=0;
    fout<<"Zadanie 3: ";
    for(int i=0; i<1000; i++)
    {
        fin>>n;
        sc=suma_cyfr(n);
        if(sc>30)
        {
            fout<<n<<endl;
        }
        suma=suma+sc;
    }
    fout<<"Suma cyfr rowna: "<<suma<<endl;
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

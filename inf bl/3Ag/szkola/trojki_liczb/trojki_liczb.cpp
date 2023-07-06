#include <bits/stdc++.h>
using namespace std;

ifstream fin;
ofstream fout;

int nwd(int a, int b)
{
    if(b==0)
        return a;
    else
        return nwd(b,a%b);
}

int sumacyfr(int n)
{
    int s=0;
    while(n!=0)
    {
        s=s+n%10;
        n=n/10;
    }
    return s;
}

void zad1()
{
    fin.open("liczby.txt");
    int ile=0;
    for(int i=0; i<1000; i++)
    {
        int n1, n2, n3;
        fin>>n1;
        fin>>n2;
        fin>>n3;
        if(n1<n2 && n2<n3)
        {
            ile++;
        }
    }
    fout<<"Zadanie 1: "<<ile<<endl;
    fin.close();
}

void zad2()
{
    fin.open("liczby.txt");
    int s=0;
    for(int i=0; i<1000; i++)
    {
        int n1, n2, n3;
        fin>>n1;
        fin>>n2;
        fin>>n3;
        s=s+nwd(nwd(n1,n2),n3);
    }
    fout<<"Zadanie 2: "<<s<<endl;
    fin.close();
}

void zad3()
{
    fin.open("liczby.txt");
    int maks=0, ile=0, ilemaks=0;
    for(int i=0; i<1000; i++)
    {
        int n1, n2, n3;
        fin>>n1>>n2>>n3;
        int s=sumacyfr(n1)+sumacyfr(n2)+sumacyfr(n3);
        if(s==35)
        {
            ile++;
        }
        if(s==maks)
        {
            ilemaks++;
        }
        if(s>maks)
        {
            maks=s;
            ilemaks=1;
        }
    }
    fout<<"Zadanie 3:"<<endl<<"- suma cyfr 35: "<<ile<<endl<<"- maks suma: "<<maks<<", wystapila "<<ilemaks<<" razy.";
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

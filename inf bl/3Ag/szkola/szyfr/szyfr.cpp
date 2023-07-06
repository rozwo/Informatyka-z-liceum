#include <bits/stdc++.h>
using namespace std;

ifstream fin;
ofstream fout;

string szyfruj(string n, int t[], int x)
{
    for(int i=0; i<50; i++)
    {
        swap(n[i],n[t[i%x]-1]);
    }
    return n;
}

string odszyfruj(string n, int t[], int x)
{
    for(int i=49; i>=0; i--)
    {
        swap(n[i],n[t[i%x]-1]);
    }
    return n;
}

void zad1()
{
    fin.open("szyfr1.txt");
    int k[50]={}, x=50;
    string n1, n2, n3, n4, n5, n6;
    fin>>n1>>n2>>n3>>n4>>n5>>n6;
    for(int i=0; i<50; i++)
    {
        fin>>k[i];
    }
    fout<<szyfruj(n1,k,x)<<endl;
    fout<<szyfruj(n2,k,x)<<endl;
    fout<<szyfruj(n3,k,x)<<endl;
    fout<<szyfruj(n4,k,x)<<endl;
    fout<<szyfruj(n5,k,x)<<endl;
    fout<<szyfruj(n6,k,x)<<endl;
    fin.close();
}

void zad2()
{
    fin.open("szyfr2.txt");
    int k[15]={}, x=15;
    string n;
    fin>>n;
    for(int i=0; i<15; i++)
    {
        fin>>k[i];
    }
    fout<<szyfruj(n,k,x)<<endl;
    fin.close();
}

void zad3()
{
    fin.open("szyfr3.txt");
    int k[]={6,2,4,1,5,3};
    string n;
    fin>>n;
    fout<<odszyfruj(n,k,6);
    fin.close();
}

int main()
{
    fout.open("wyniki_szyfr1.txt");
    zad1();
    fout.close();
    fout.open("wyniki_szyfr2.txt");
    zad2();
    fout.close();
    fout.open("wyniki_szyfr3.txt");
    zad3();
    fout.close();

    return 0;
}

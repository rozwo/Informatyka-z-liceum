#include <bits/stdc++.h>
using namespace std;

ifstream fin;
ofstream fout;

string zaszyf(string n, int k)
{
    string w="";
    k=k%26;
    for(int i=0; i<n.length(); i++)
    {
        w=w+char(int(n[i]+k-'A')%26+'A');
    }
    return w;
}

string odszyf(string n, int k)
{
    string w="";
    k=k%26;
    for(int i=0; i<n.length(); i++)
    {
        w=w+char(int(n[i]-k+'A')%26+'A');
    }
    return w;
}

bool czy_szfr(string n, string s)
{
    int k=(s[0]-n[0]+26)%26;
    if(zaszyf(n,k)==s)
        return true;
    else
        return false;
}

void zad1()
{
    fin.open("dane_6_1.txt");
    string n;
    int k=107;
    for(int i=1; i<=100; i++)
    {
        fin>>n;
        fout<<zaszyf(n,k)<<endl;
    }
    fin.close();
}

void zad2()
{
    fin.open("dane_6_2.txt");
    string n;
    int k;
    for(int i=1; i<=700; i++)
    {
        fin>>n;
        fin>>k;
        fout<<odszyf(n,k)<<endl;
    }
    fin.close();
}

void zad3()
{
    fin.open("dane_6_3.txt");
    string n,s;
    for(int i=1; i<=3000; i++)
    {
        fin>>n;
        fin>>s;
        if(czy_szfr(n,s)==0)
            fout<<n<<endl;
    }
    fin.close();
}

int main()
{
    fout.open("wyniki_6_1.txt");
    zad1();
    fout.close();
    fout.open("wyniki_6_2.txt");
    zad2();
    fout.close();
    fout.open("wyniki_6_3.txt");
    zad3();
    fout.close();

    return 0;
}

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

void zada()
{
    fin.open("pary_liczb.txt");
    int ile=0;
    for(int i=0; i<1000; i++)
    {
        int a, b;
        fin>>a>>b;
        if(a%b==0 || b%a==0)
            ile++;
    }
    fout<<"a) "<<ile<<endl;
    fin.close();
}

void zadb()
{
    fin.open("pary_liczb.txt");
    int ile=0;
    for(int i=0; i<1000; i++)
    {
        int a, b;
        fin>>a>>b;
        if(nwd(a,b)==1)
            ile++;
    }
    fout<<"b) "<<ile<<endl;
    fin.close();
}

void zadc()
{
    fin.open("pary_liczb.txt");
    int ile=0;
    for(int i=0; i<1000; i++)
    {
        int a, b;
        fin>>a>>b;
        if(sumacyfr(a)==sumacyfr(b))
            ile++;
    }
    fout<<"c) "<<ile<<endl;
    fin.close();
}

int main()
{
    fout.open("zadanie5.txt");
    zada();
    zadb();
    zadc();
    fout.close();

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

ifstream fin;
ofstream fout;

bool czy_pierw(int n)
{
    if(n==1)
    {
        return false;
    }
    if(n==2)
    {
        return true;
    }
    if(n%2==0)
    {
        return false;
    }
    for(int i=3; i<n/2; i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

string binar(int n)
{
    string s="", x="0", y="1";
    while(n>0)
    {
        if(n%2==0)
        {
            s=x+s;
        }
        if(n%2==1)
        {
            s=y+s;
        }
        n=n/2;
    }
    return s;
}

bool palindr(string n)
{
    for(int i=0; i<n.length()/2; i++)
    {
        if(n[i]!=n[n.length()-1-i])
        {
            return false;
        }
    }
    return true;
}

int ile_zer(string n)
{
    int ile=0;
    for(int i=n.length()-1; i>=0; i--)
    {
        if(n[i]=='1')
        {
            return ile;
        }
        if(n[i]=='0')
        {
            ile++;
        }
    }
}

bool prawiepalindr(string n)
{
    int z=ile_zer(n);
    for(int i=0; i<z; i++)
    {
        string x="0";
        n=x+n;
    }
    return palindr(n);
}

int ile_par(int t[5000][10])
{
    int ile=0;
    for(int i=0; i<5000; i++)
    {
        for(int j=i+1; j<5000; j++)
        {
            int l=0;
            for(int k=0; k<10; k++)
            {
                if(t[i][k]!=t[j][k])
                {
                    l=1;
                }
            }
            if(l==0)
            {
                ile++;
            }
        }
    }
    return ile;
}

void zad1()
{
    fin.open("dane.txt");
    int n, mini=100001, maks=0, ile=0;
    for(int i=0; i<5000; i++)
    {
        fin>>n;
        if(czy_pierw(n))
        {
            ile++;
            if(n>maks)
            {
                maks=n;
            }
            if(n<mini)
            {
                mini=n;
            }
        }
    }
    fout<<"W pliku liczb pierwszych jest "<<ile<<endl<<"Najwieksza z nich to "<<maks<<endl<<"A najmniejsza z nich to "<<mini<<endl;
    fin.close();
}

void zad2()
{
    fin.open("dane.txt");
    int n, ile=0;
    for(int i=0; i<5000; i++)
    {
        fin>>n;
        string x=binar(n);
        if(n%2==0)
        {
            if(prawiepalindr(x))
            {
                ile++;
            }
        }
        if(n%2==1)
        {
            if(palindr(x))
            {
                ile++;
            }
        }
    }
    fout<<"W pliku liczb palindromicznych i prawiepalindromicznych jest "<<ile<<endl;
    fin.close();
}

void zad3()
{
    fin.open("dane.txt");
    int n, t[5000][10]={};
    for(int i=0; i<5000; i++)
    {
        fin>>n;
        while(n>0)
        {
            if(t[i][n%10]==0)
            {
                t[i][n%10]++;
            }
            n=n/10;
        }
    }
    fout<<"Mo¿na stworzyæ "<<ile_par(t)<<" par."<<endl;
    fin.close();
}

int main()
{
    fout.open("wyniki4_1.txt");
    zad1();
    fout.close();
    fout.open("wyniki4_2.txt");
    zad2();
    fout.close();
    fout.open("wyniki4_3.txt");
    zad3();
    fout.close();

    return 0;
}

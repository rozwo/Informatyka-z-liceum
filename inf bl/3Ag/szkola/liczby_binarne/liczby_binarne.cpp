#include <bits/stdc++.h>
using namespace std;

ifstream fin;
ofstream fout;

bool zernizjed(string n)
{
    int z=0, j=0;
    for(int i=0; i<n.length(); i++)
    {
        if(n[i]=='0')
        {
            z++;
        }
        if(n[i]=='1')
        {
            j++;
        }
    }
    if(z>j)
        return true;
    else
        return false;
}

bool przez_dwa(string n)
{
    if(n[n.length()-1]=='0')
        return true;
    else
        return false;
}

bool przez_osiem(string n)
{
    if(n[n.length()-2]=='0' && n[n.length()-3]=='0')
        return true;
    else
        return false;
}

void zad1()
{
    fin.open("liczby.txt");
    fout<<"Zadanie 4.1: ";
    int ile=0;
    for(int i=1; i<=1000; i++)
    {
        string n;
        fin>>n;
        if(zernizjed(n)==1)
            ile++;
    }
    fout<<ile<<endl;
    fin.close();
}

void zad2()
{
    fin.open("liczby.txt");
    int d=0, o=0;
    for(int i=1; i<=1000; i++)
    {
        string n;
        fin>>n;
        if(przez_dwa(n)==1)
        {
            d++;
            if(przez_osiem(n)==1)
                o++;
        }
    }
    fout<<"Zadanie 4.2:"<<endl<<"-podziel przez 2: "<<d<<endl<<"-podziel przez 8: "<<o<<endl;
    fin.close();
}

void zad3()
{
    fin.open("liczby.txt");
    fout<<"Zadanie 4.3: "<<endl;
    string n;
    fin>>n;
    string maks=n, mini=n;
    int pozmaks=1, pozmini=1;
    for(int i=2; i<=1000; i++)
    {
        fin>>n;
        if(n.length()>maks.length())
        {
            maks=n;
            pozmaks=i;
        }
        else
        {
            if(n.length()==maks.length())
            {
                if(n>maks)
                {
                    maks=n;
                    pozmaks=i;
                }
            }
        }
        if(n.length()<mini.length())
        {
            mini=n;
            pozmini=i;
        }
        else
        {
            if(n.length()==mini.length())
            {
                if(n<mini)
                {
                    mini=n;
                    pozmini=i;
                }
            }
        }
    }
    fout<<"minimalna: "<<mini<<endl<<"i jej pozycja "<<pozmini<<endl;
    fout<<"maksymalna: "<<maks<<endl<<"i jej pozycja "<<pozmaks<<endl;
    fin.close();
}

int main()
{
    fout.open("wynik4.txt");

    zad1();
    zad2();
    zad3();

    fout.close();

    return 0;
}

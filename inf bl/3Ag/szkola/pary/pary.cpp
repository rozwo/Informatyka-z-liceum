#include <bits/stdc++.h>
using namespace std;

ifstream fin;
ofstream fout;

bool pierwsza(int n)
{
    if(n<2)
    {
        return false;
    }
    if(n==2)
    {
        return true;
    }
    if(n==3)
    {
        return true;
    }
    if(n%2==0)
    {
        return false;
    }
    for(int i=3; i<n; i=i+2)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

void suma_nieparz(int n)
{
    int a=0,b=0;
    for(int i=3; i<=(n/2); i=i+2)
    {
        if(pierwsza(i)==1 && pierwsza(n-i)==1)
        {
            a=i;
            b=n-i;
            i=n;
        }
    }
    fout<<a<<" "<<b<<endl;
}

void zad1()
{
    fin.open("pary.txt");
    fout<<"4.1"<<endl;
    int n;
    string s;
    for(int i=0; i<100; i++)
    {
        fin>>n;
        fin>>s;
        if(n%2==0 && n>4)
        {
            fout<<n<<" ";
            suma_nieparz(n);
        }
    }
    fin.close();
}

void zad2()
{
    fin.open("pary.txt");
    fout<<endl<<"4.2"<<endl;
    int n, akt, maks;
    string s;
    char a, m;
    for(int i=0; i<100; i++)
    {
        fin>>n>>s;
        a=m=s[0];
        akt=maks=1;
        for(int j=1; j<s.length(); j++)
        {
            if(s[j-1]==s[j])
            {
                akt++;
                if(akt>maks)
                {
                    maks=akt;
                    m=a;
                }
            }
            else
            {
                akt=1;
                a=s[j];
            }
        }
        for(int i=0; i<maks; i++)
        {
            fout<<m;
        }
        fout<<" "<<maks;
        fout<<endl;
    }
    fin.close();
}

void zad3()
{
    fin.open("pary.txt");
    int n, liczba=101;
    string s, slowo="zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";
    for(int i=0; i<100; i++)
    {
        fin>>n>>s;
        if(n==s.length())
        {
            if((n<liczba)or(n==liczba && s<slowo))
            {
                liczba=n;
                slowo=s;
            }
        }
    }
    fout<<endl<<"4.3"<<endl<<liczba<<" "<<slowo<<endl;
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

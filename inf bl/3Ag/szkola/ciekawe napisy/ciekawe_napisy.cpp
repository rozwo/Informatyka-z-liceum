#include <bits/stdc++.h>
using namespace std;

ifstream fin;
ofstream fout;

int suma(string n)
{
    int x=0, s=0;
    while(n.length()>x)
        {
            s=s+n[x];
            x++;
        }
    return s;
}

bool pierwsza(int s)
{
    if(s%2==0)
        return false;
    for(int i=3; i<=sqrt(s); i=i+2)
    {
        if(s%i==0)
            return false;
    }
    return true;
}

bool rosnace(string n)
{
    for(int i=1; i<=n.length()-1; i++)
    {
        if(n[i-1]>=n[i])
            return false;
    }
    return true;
}

void zada()
{
    fin.open("napis.txt");
    string n;
    int p=0;
    for(int i=0; i<1000; i++)
    {
        fin>>n;
        if(pierwsza(suma(n))==1)
            p++;
    }
    fout<<"Zadanie a: "<<p<<endl;
    fin.close();
}

void zadb()
{
    fin.open("napis.txt");
    fout<<"Zadanie b: "<<endl;
    string n;
    for(int i=0; i<1000; i++)
    {
        fin>>n;
        if(rosnace(n)==1)
            fout<<n<<endl;
    }
    fin.close();
}

void zadc()
{
    fin.open("napis.txt");
    fout<<"Zadanie c: "<<endl;
    string t[1000];
    string n;
    for(int i=0; i<1000; i++)
    {
        fin>>n;
        t[i]=n;
    }
    sort(t,t+1000);
    for(int i=1; i<1000; i++)
    {
        if(t[i-1]==t[i])
        {
            fout<<t[i]<<endl;
            while(t[i]==t[i+1] and i<1000)
            {
                i++;
            }
        }
    }
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

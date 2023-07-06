#include <bits/stdc++.h>

using namespace std;

int zad1()
{
    ifstream fin;
    fin.open("instrukcje.txt");
    string s;
    char znak;
    int d=0;
	for(int i=0; i<2000; i++)
    {
        fin>>s>>znak;
        if(s=="DOPISZ")
        {
            d++;
        }
        if(s=="USUN")
        {
            d--;
        }
    }
    return d;
    fin.close();
}

string zad2(int &maks)
{
    ifstream fin;
    fin.open("instrukcje.txt");
    string s;
    string a="", m="";
    int akt=1, i=0;
    for(int i=0; i<2000; i++)
    {
        fin>>s;
        i++;
        if(i%2!=0)
        {
            if(s==a)
            {
                akt++;
            }
            else
            {
                akt=1;
                a=s;
            }
            if(akt>maks)
            {
                maks=akt;
                m=a;
            }
        }
    }
    return m;
    fin.close();
}

char zad3(int &maks)
{
    ifstream fin;
    fin.open("instrukcje.txt");

    string s;
    char z;
    int i=0, t[26]={0};
    for(int i=0; i<2000; i++)
    {
        fin>>s>>z;
        if(s=="DOPISZ")
        {
            t[z-'A']++;
        }
    }
    int m=0;
    maks=t[0];
    for(int j=1; j<26; j++)
    {
        if(t[j]>maks)
        {
            maks=t[j];
            m=j;
        }
    }
    return char(m+'A');
    fin.close();
}

string zad4()
{
    ifstream fin;
    fin.open("instrukcje.txt");

    string s;
    char z;
    string n="";
    for(int i=0; i<2000; i++)
    {
        fin>>s>>z;
        if(s=="DOPISZ")
        {
            n=n+z;
        }
        if(s=="USUN")
        {
            n=n.substr(0,n.length()-1);
        }
        if(s=="ZMIEN")
        {
            n[n.length()-1]=z;
        }
        if(s=="PRZESUN")
        {
            int j=0;
            while(j<n.length() and n[j]!=z)
            {
                j++;
            }
            if(j<n.length())
            {
                if(z=='Z')
                {
                    n[j]='A';
                }
                else
                {
                    n[j]++;
                }
            }
        }
    }
    return n;
    fin.close();
}

int main()
{
    int maks1=1, maks2=0;
    cout<<"Zadanie 1 "<<zad1()<<endl;
    cout<<"Zadanie 2 "<<zad2(maks1)<<" "<<maks1<<endl;
    cout<<"Zadanie 3 "<<zad3(maks2)<<" "<<maks2<<endl;
    cout<<"Zadanie 4 "<<zad4()<<endl;

    return 0;
}

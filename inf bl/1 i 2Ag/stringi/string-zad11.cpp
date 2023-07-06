#include <bits/stdc++.h>

using namespace std;

string zad11(string s, string t)
{
    string wynik;
    int m, w, x;
    string d, k;
    if(s.length()>t.length())
    {
        w=s.length();
        m=t.length();
        d=s;
        k=t;
    }
    else
    {
        w=t.length();
        m=s.length();
        d=t;
        k=s;
    }
    wynik=d;
    int y=0;
    for(int i=m-1; i>=0; i--)
    {
        x=(d[i+w-m]-'0')+(k[i]-'0')+y;

        if(x<=9)
        {
            wynik[i+w-m]=x;
            y=0;
        }
        else
        {
            wynik[i+w-m]=x%10;
            y=x/10;
        }
    }
    if(y>0)
    {
        for(int i=w-m-1; i>=0; i--)
        {
            x=wynik[i]+y;

            if(x<=9)
            {
                wynik[i]=x;
                y=0;
            }
            else
            {
                wynik[i]=x%10;
                y=x/10;
            }
        }
    }

    return wynik;
}

int main()
{
    string s, t;
    cout<<"Zadanie 11:"<<endl<<"Podaj 1. liczbe: ";
    cin>>s;
    cout<<endl<<"Podaj 2. liczbe: ";
    cin>>t;
    cout<<"Suma tych liczb to: "<<zad11(s,t)<<endl;

    return 0;
}

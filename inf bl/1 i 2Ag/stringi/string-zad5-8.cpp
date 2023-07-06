#include <bits/stdc++.h>

using namespace std;

bool zad05(string s)
{
    int dl=s.length();
    for(int i=1;i<dl;i++)
    {
        if(s[i-1]>=s[i])
        {
            return false;
        }
    }

    return true;
}

bool zad06(string s)
{
    int dl=s.length();
    for(int i=0; i<dl/2; i++)
    {
        if(s[i]!=s[(dl-1)-i])
        {
            return false;
        }
    }

    return true;
}

string zad07(string s)
{
    string w="";
    int dl=s.length();
    for(int i=1;i<dl;i=i+2)
    {
        w=w+s[i]+s[i-1];
    }
    if(dl%2!=0)
    {
        w=w+s[dl-1];
    }

    return w;
}

string zad08(string s)
{
    string w="";
    int dl=s.length();
    for(int i=0;i<3;i++)
    {
        for(int j=i;j<dl;j=j+3)
        {
            w=w+s[j];
        }
    }

    return w;
}

int main()
{
    string s;
    string n;
    cout<<"Podaj napis (liczbe): ";
    cin>>n;
    cout<<"Zadanie 5 (l): "<<zad05(n)<<endl;
    cout<<"Podaj napis (slowo): ";
    cin>>s;
    cout<<"Zadanie 6 (s): "<<zad06(s)<<endl;
    cout<<"Zadanie 7 (s): "<<zad07(s)<<endl;
    cout<<"Zadanie 8 (s): "<<zad08(s)<<endl;

    return 0;
}

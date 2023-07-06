#include <bits/stdc++.h>

using namespace std;

//Funkcja liczy, ile razy znak wystepuje w tekscie
int zad01(string s, char z)
{
    int ile=0;
    for (int i=0; i<s.length() ; i++)
        if (s[i]==z) ile++;
    return ile;
}

string zad02(string s)
{
    string tmp="";
    for (int i=0; i<s.length(); i++)
        if (s[i]==' ')
            tmp=tmp+"_";
        else
            tmp=tmp+s[i];
    return tmp;
}

//zad 4
string dec2bin(int dec)
{
    string bin="";
    while (dec>0)
    {
        if (dec%2==0)
            bin='0'+bin;
        else
            bin='1'+bin;
        dec=dec/2;
    }
    return bin;
}
//cos nowego, p \in [2,10], calkowite
string dec2p(int dec, int p)
{
    string w="";
    while (dec>0)
    {
        int r=dec%p;
        w = char(r+48)+w;
        dec=dec/p;
    }
    return w;
}

int main()
{
    string s;
    char z;
    /*
    cout<<"Zadanie 1: "<<endl;
    cout<<"Podaj napis: ";
    cin>>s;
    cout<<"Podaj znak: ";
    cin>>z;
    cout<<"Znak "<<z<<" wystapil "<<zad01(s,z)<<" razy."<<endl;

    cout<<"Zadanie 2: "<<endl;
    cout<<"Podaj napis: ";
    getline(cin,s);
    cout<<"Nowy napis: "<<zad02(s)<<endl;

*/
    //cout<<dec2p(9, 5);
    return 0;
}

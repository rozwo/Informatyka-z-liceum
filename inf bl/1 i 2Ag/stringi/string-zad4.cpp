#include <bits/stdc++.h>

using namespace std;

//Funkcja zmienia liczbe w systemie dziesietnym na napis, ktory jest jej zapisem binarnym
string zad04(int dec)
{
    string bin="";
    while (dec>0)
    {
        if(dec%2==0)
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
    int x;
    cout<<"Zadanie 4:"<<endl<<"Podaj liczbe: ";
    cin>>x;
    cout<<"Napis: "<<zad04(x)<<endl;

    return 0;
}

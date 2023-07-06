#include <bits/stdc++.h>

using namespace std;

//Funkcja zmienia napis, ktory jest liczba binarna, na liczbe dziesietna
int zad03v1(string bin)
{
    int pot=1;
    int dec=0;
    int dl=bin.length();
    for(int i=dl-1;i>=0;i--)
    {
        dec=dec+(bin[i]-48)*pot;
        pot=pot*2;
    }
    return dec;
}

int zad03v2(string bin)
{
    int pot=1;
    int dec=0;
    int dl=bin.length();
    for(int i=dl-1;i>=0;i--)
    {
        if(bin[i]=='1')
        {
            dec=dec+pot;
        }
        pot=pot*2;
    }
    return dec;
}

int zad03v3(string bin)
{
    int dec=bin[0]-48;
    int dl=bin.length();
    for(int i=1;i<dl;i++)
    {
        dec=dec*2+(bin[i]-48);
    }
    return dec;
}

int main()
{
    string s;
    cout<<"Zadanie 3:"<<endl<<"Podaj napis: ";
    cin>>s;
    cout<<"Liczba dec to: "<<zad03v1(s)<<endl;
    cout<<"Liczba dec to: "<<zad03v2(s)<<endl;
    cout<<"Liczba dec to: "<<zad03v3(s)<<endl;

    return 0;
}

#include <bits/stdc++.h>

using namespace std;

//Funkcja liczy, ile razy znak wystepuje w tekscie
int zad01(string s, char z)
{
    int ile=0;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]==z) ile++;  //if(s.at(i)==z) ile++;
    }
    return ile;

}

int main()
{
    string s;
    char z;
    cout<<"Zadanie 1:"<<endl<<"Podaj napis: ";
    cin>>s;
    cout<<"Podaj znak: ";
    cin>>z;
    cout<<"Znak "<<z<<" wystapil "<<zad01(s,z)<<" razy."<<endl;

    return 0;
}

#include <bits/stdc++.h>

using namespace std;

//Funkcja zmienia kazda spacje na znak podkreslenia
string zad02(string s)
{
    string tmp="";
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]==' ')
        {
            tmp=tmp+"_";
        }
        else
        {
            tmp=tmp+s[i];
        }
    }
    return tmp;

}

int main()
{
    string s;
    cout<<"Zadanie 2:"<<endl<<"Podaj napis: ";
    //cin wczytuje tylko az do spacji tab lub endl... wiec nie pasuje
    getline(cin, s);       //to wczytuje az do endl
    cout<<"Nowy napis: "<<zad02(s)<<endl;

    return 0;
}

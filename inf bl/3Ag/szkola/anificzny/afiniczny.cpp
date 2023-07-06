#include <bits/stdc++.h>

using namespace std;

ifstream fin;
ofstream fout;

string szyfr (string s, int A, int B)
{
    string w="";

    for (int i=0; i<s.length(); i++)
    {
        w=w+char(int((((s[i]-'a')*A+B)%26)+'a'));
    }

    return w;
}

void zadanie1 ()
{
    fin.open("tekst.txt");

    string s;

    for (int i=1; i<=805; i++)
    {
        fin>>s;
        int dl=s.length();
        if (s[dl-1]=='d' and s[0]=='d')
            fout<<s<<endl;
    }

    fin.close();
}

void zadanie2 ()
{
    fin.open("tekst.txt");

    string s;

    for (int i=1; i<=805; i++)
    {
        fin>>s;
        int dl=s.length();
        if (dl>=10)
        {
            fout<<szyfr(s,5,2)<<endl;
        }
    }

    fin.close();

}

void zadanie3 ()
{
    fin.open("probka.txt");

    string s,z;
    for (int i=0; i<5; i++)
    {
        fin>>s>>z;
        int a, b;
        for(int j=0; j<26; j++)
        {
            for(int x=0; x<26; x++)
            {
                if(szyfr(s,j,x)==z)
                {
                    a=j;
                    b=x;
                }
            }
        }
        fout<<"("<<a<<","<<b<<")"<<endl;
    }

    fin.close();
}


int main()
{
    fout.open("wynik.txt");

    fout<<"Zadanie 1: "<<endl;
    zadanie1();
    fout<<endl<<"Zadanie 2: "<<endl;
    zadanie2();
     fout<<endl<<"Zadanie 3: "<<endl;
    zadanie3();

    fout.close();

    return 0;
}

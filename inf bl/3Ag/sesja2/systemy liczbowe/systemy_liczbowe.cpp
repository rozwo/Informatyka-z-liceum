#include <bits/stdc++.h>
using namespace std;

ifstream fin;
ofstream fout;

bool czyzera(string n)
{
    for(int i=0; i<n.length(); i++)
    {
        if(n[i]=='0')
        {
            return true;
        }
    }
    return false;
}

void zad1()
{
    fin.open("liczby.txt");
    string n;
    int ile=0;
    for(int i=0; i<999; i++)
    {
        fin>>n;
        if(n[n.length()-1]=='8')
        {
            ile++;
        }
    }
    fout<<ile;
    fin.close();
}

void zad2()
{
    fin.open("liczby.txt");
    string n;
    int ile=0;
    for(int i=0; i<999; i++)
    {
        fin>>n;
        if(n[n.length()-1]=='4')
        {
            if(czyzera(n)==0)
            {
                ile++;
            }
        }
    }
    fout<<ile;
    fin.close();
}

void zad3()
{
    fin.open("liczby.txt");
    string n;
    int ile=0;
    for(int i=0; i<999; i++)
    {
        fin>>n;
        if(n[n.length()-1]=='2')
        {
            if(n[n.length()-2]=='0')
            {
                ile++;
            }
        }
    }
    fout<<ile;
    fin.close();
}

void zad4()
{
    fin.open("liczby.txt");

    fin.close();
}

void zad5()
{
    fin.open("liczby.txt");

    fin.close();
}

int main()
{
    fout.open("wyniki_6_1.txt");
    zad1();
    fout.close();
    fout.open("wyniki_6_2.txt");
    zad2();
    fout.close();
    fout.open("wyniki_6_3.txt");
    zad3();
    fout.close();
    fout.open("wyniki_6_4.txt");

    fout.close();
    fout.open("wyniki_6_5.txt");

    fout.close();

    return 0;
}

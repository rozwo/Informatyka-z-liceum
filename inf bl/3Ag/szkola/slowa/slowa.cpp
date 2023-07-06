#include <bits/stdc++.h>
using namespace std;

ifstream fin;
ofstream fout;

bool zawiera(string n, string s)
{
    if(n.length()>s.length())
    {
        return false;
    }
    for(int i=0; i<=(s.length()-n.length()); i++)
    {
        string tmp="";
        tmp=s.substr(i,n.length());
        if(n==tmp)
        {
            return true;
        }
    }
    return false;
}

bool anagram(string n, string s)
{
    if(n.length()!=s.length())
    {
        return false;
    }
    int t1[26]={}, t2[26]={};
    for(int i=0; i<n.length(); i++)
    {
        t1[n[i]-'A']++;
        t2[s[i]-'A']++;
    }
    for(int i=0; i<26; i++)
    {
        if(t1[i]!=t2[i])
        {
            return false;
        }
    }
    return true;
}

void zad1()
{
    fin.open("slowa.txt");
    string n, s;
    int ile=0;
    for(int i=0; i<1000; i++)
    {
        fin>>n>>s;
        if(n[n.length()-1]=='A')
        {
            ile++;
        }
        if(s[s.length()-1]=='A')
        {
            ile++;
        }
    }
    fout<<"Zadanie 1: "<<ile<<endl;
    fin.close();
}

void zad2()
{
    fin.open("slowa.txt");
    string n, s;
    int ile=0;
    for(int i=0; i<1000; i++)
    {
        fin>>n>>s;
        if(zawiera(n,s)==1)
        {
            ile++;
        }
    }
    fout<<"Zadanie 2: "<<ile<<endl;
    fin.close();
}

void zad3()
{
    fin.open("slowa.txt");
    fout<<"Zadanie 3:"<<endl;
    int ile=0;
    string n, s;
    for(int i=0; i<1000; i++)
    {
        fin>>n>>s;
        if(anagram(n,s)==1)
        {
            ile++;
            fout<<n<<" "<<s<<endl;
        }
    }
    fout<<"liczba wierszy: "<<ile<<endl;
    fin.close();
}

int main()
{
    fout.open("wyniki6.txt");
    zad1();
    zad2();
    zad3();
    fout.close();
    return 0;
}

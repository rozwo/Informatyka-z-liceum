#include <bits/stdc++.h>
using namespace std;

ifstream fin;
ofstream fout;

bool wk(string n)
{
    int w=0, k=0;
    for(int i=0; i<n.length(); i++)
    {
        if(n[i]=='w')
        {
            w++;
        }
        if(n[i]=='k')
        {
            k++;
        }
    }
    if(w==k)
    {
        return true;
    }
    return false;
}

int ileliter(string n)
{
    string s="wakacje";
    int ile=0;
    while(n.length()>0)
    {

    }
    return ile;
}

void zad1()
{
    fin.open("slowa.txt");
    string n;
    for(int i=0; i<50; i++)
    {
        fin>>n;
        if(wk(n))
        {
            fout<<n<<endl;
        }
    }
    fin.close();
}

void zad2()
{
    fin.open("przyklad.txt");
    string n;
    int t[6]={0};//w k c j e a/2
    for(int i=0; i<50; i++)
    {
        fin>>n;
       // n = "wakacjeachwakacje";
      //  for (int i=0; i<6; i++)
          //  t[i]=0;
        int t[6]={0};
        for(int j=0; j<n.length(); j++)
        {
            if(n[j]=='w')
            {
                t[0]++;
            }
            if(n[j]=='k')
            {
                t[1]++;
            }
            if(n[j]=='c')
            {
                t[2]++;
            }
            if(n[j]=='j')
            {
                t[3]++;
            }
            if(n[j]=='e')
            {
                t[4]++;
            }
            if(n[j]=='a')
            {
                t[5]++;
            }
        }
        t[5]=t[5]/2;
        sort(t,t+6);
        fout<<t[0]<<" ";
    }
    fin.close();
}

void zad3()
{
    fin.open("przyklad.txt");
    string n;
    for(int i=0; i<50; i++)
    {
        fin>>n;
        fout<<ileliter(n)<<" ";
    }
    fin.close();
}

int main()
{
    fout.open("wyniki4_1.txt");
    zad1();
    fout.close();
    fout.open("wyniki4_2.txt");
    zad2();
    fout.close();
    fout.open("wyniki4_3.txt");
    //zad3();
    fout.close();

    return 0;
}

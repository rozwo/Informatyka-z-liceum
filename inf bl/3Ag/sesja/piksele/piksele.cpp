#include <bits/stdc++.h>

using namespace std;

ifstream fin;
ofstream fout;

bool czy_wiersz_ok(int t[])
{
    for(int i=0; i<160; i++)
    {
        if(t[i]!=t[319-i])
            return false;
    }
    return true;
}

int ile_kontrastuje(int t[202][322])
{
    int ile=0;
    for(int i=1; i<201; i++)
    {
        for(int j=1; j<321; j++)
        {
            if(abs(t[i-1][j]-t[i][j])>128 or abs(t[i+1][j]-t[i][j])>128 or abs(t[i][j-1]-t[i][j])>128 or abs(t[i][j+1]-t[i][j])>128)
            {
                ile++;
            }
        }
    }
    return ile;
}

void zad1()
{
    fin.open("dane.txt");
    int n, c, j;
    fin>>n;
    c=n;
    j=n;
    for(int i=1; i<(320*200); i++)
    {
        fin>>n;
        if(n<c)
        {
            c=n;
        }
        if(n>j)
        {
            j=n;
        }
    }
    fout<<"Zadanie 1:"<<endl<<"najjasniejszy "<<j<<endl<<"najciemniejszy "<<c<<endl;
    fin.close();
}

void zad2()
{
    fin.open("dane.txt");
    int n, t[320], ile=0;
    for(int i=0; i<200; i++)
    {
        for(int j=0; j<320; j++)
        {
            fin>>t[j];
        }
        if(czy_wiersz_ok(t)==0)
        {
            ile++;
        }
    }
    fout<<"Zadanie 2: "<<ile<<endl;
    fin.close();
}

void zad3()
{
    fin.open("dane.txt");
    int t[202][322];
    for(int i=0; i<322; i++)
    {
        t[0][i]=128;
        t[201][i]=128;
    }
    for(int i=0; i<202; i++)
    {
        t[i][0]=128;
        t[i][321]=128;
    }
    for(int i=1; i<201; i++)
    {
        for(int j=1; j<321; j++)
        {
            fin>>t[i][j];
        }
    }
    fout<<"Zadanie 3: "<<ile_kontrastuje(t)<<endl;

    fin.close();
}

void zad4()
{
    fin.open("dane.txt");
    int t[200][320];
    for(int i=0; i<200; i++)
    {
        for(int j=0; j<320; j++)
        {
            fin>>t[i][j];
        }
    }
    int maks=1;
    for(int j=0; j<320; j++)
    {
        int d=1;
        for(int i=1; i<200; i++)
        {
            if(t[i-1][j]==t[i][j])
            {
                d++;
                if(d>maks)
                {
                    maks=d;
                }
            }
            if(t[i-1][j]!=t[i][j])
            {
                d=1;
            }
        }
    }
    fout<<"Zadanie 4: "<<maks<<endl;
    fin.close();
}

int main()
{
    fout.open("wyniki6.txt");
    zad1();
    zad2();
    zad3();
    zad4();
    fout.close();

    return 0;
}

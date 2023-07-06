#include <bits/stdc++.h>

using namespace std;

int main()
{
    ifstream fin;

    fin.open("instrukcje.txt");

    string s;
    char z;
    int i=0, t[26]={0};
    for(int i=0; i<2000; i++)
    {
        fin>>s>>z;
        if(s=="DOPISZ")
        {
            t[z-'A']++;
        }
    }
    int maks=t[0], m=0;
    for(int j=1; j<26; j++)
    {
        if(t[j]>maks)
        {
            maks=t[j];
            m=j;
        }
    }
    cout<<char(m+'A')<<" "<<maks<<endl;

    fin.close();

    return 0;
}

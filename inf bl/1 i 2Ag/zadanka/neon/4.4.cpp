#include <bits/stdc++.h>

using namespace std;

int main()
{
    ifstream fin;
    fin.open("instrukcje.txt");

    string s;
    char z;
    string n="";
    for(int i=0; i<20; i++)
    {
        fin>>s>>z;
        if(s=="DOPISZ")
        {
            n=n+z;
        }
        if(s=="USUN")
        {
            n=n.substr(0,n.length()-1);
        }
        if(s=="ZMIEN")
        {
            n[n.length()-1]=z;
        }
        if(s=="PRZESUN")
        {
            int j=0;
            while(j<n.length() and n[j]!=z)
            {
                j++;
            }
            if(j<n.length())
            {
                if(z=='Z')
                {
                    n[j]='A';
                }
                else
                {
                    n[j]++;
                }
            }
        }
    }

    cout<<n;

    fin.close();

    return 0;
}

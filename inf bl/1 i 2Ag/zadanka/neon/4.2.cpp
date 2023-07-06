#include <bits/stdc++.h>

using namespace std;

int main()
{
    ifstream fin;
    fin.open("instrukcje.txt");

    string s;
    string a="", m="";
    int akt=1, maks=1, i=0;
    while(!fin.eof())
    {
        fin>>s;
        i++;
        if(i%2!=0)
        {
            if(s==a)
            {
                akt++;
            }
            else
            {
                akt=1;
                a=s;
            }
            if(akt>maks)
            {
                maks=akt;
                m=a;
            }
        }
    }

    cout<<m<<" "<<maks<<endl;

    fin.close();

    return 0;
}

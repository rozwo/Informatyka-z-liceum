#include <bits/stdc++.h>

using namespace std;

int main()
{
    ifstream fin;

    fin.open("instrukcje.txt");

    int d=0;
    string s;
    char znak;
	for(int i=0; i<2000; i++)
    {
        fin>>s>>znak;
        if(s=="DOPISZ")
        {
            d++;
        }
        if(s=="USUN")
        {
            d--;
        }
    }
    cout<<d;

    fin.close();

    return 0;
}

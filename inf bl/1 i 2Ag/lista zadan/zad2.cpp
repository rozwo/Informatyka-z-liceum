#include <bits/stdc++.h>

using namespace std;

int main()
{
    ifstream fin;
    fin.open("bajka.txt");

    string wiersz;
    while(!fin.eof())
    {
        getline(fin,wiersz,' ');
        cout<<wiersz;
    }

    fin.close();


    return 0;
}

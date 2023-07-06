#include <bits/stdc++.h>

using namespace std;

int main()
{
    ofstream fout;
    fout.open("xxx.txt");

    int liczba, suma=0;
    string wiersz;
    getline(fout,wiersz);
    cout<<wiersz<<endl;
    while(!fout.eof())
    {
        getline(fout,wiersz);
        cout<<wiersz;
        for(int i=0; i<3; i++)
        {
            fout<<liczba;
            suma=suma+liczba;
        }
        cout<<" "<<suma<<endl;
    }

    fout.close();

    return 0;
}

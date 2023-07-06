#include <bits/stdc++.h>

using namespace std;

int main()
{
    ifstream fin;

    string nazwa;
    cin>>nazwa;
    fin.open(nazwa.c_str());
    int liczba;
    int suma=0;
    while(!fin.eof())
    {
        fin>>liczba;
        suma=suma+liczba;
    }
    cout<<"Suma wynosi: "<<suma<<endl;

    fin.close();

    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ifstream fin;

    string nazwa;
    cin>>nazwa;
    fin.open(nazwa.c_str());
    int liczba, a, b;
    bool n=true;
    fin>>liczba;
    a=liczba;
    while(!fin.eof())
    {
        fin>>liczba;
        b=liczba;
        if(a*b>0)
        {
            n=false;
        }
        a=b;
    }
    cout<<"Czy liczby dodatnie i ujemne są umieszczone na przemian? "<<n<<endl;

    fin.close();

    return 0;
}

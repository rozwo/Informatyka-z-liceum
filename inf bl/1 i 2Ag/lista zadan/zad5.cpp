#include <bits/stdc++.h>

using namespace std;
// cos jest nie tak bo ostatni element sprawdza dwa razy...
int main()
{
    ifstream fin;

    string nazwa;
    cin>>nazwa;
    fin.open(nazwa.c_str());
    int liczba;
    int p=0, np=0;
    while(!fin.eof())
    {
        fin>>liczba;
        if(liczba%2==0)
        {
            p++;
        }
        else
        {
            np++;
        }
    }
    cout<<"Liczb parzystych w pliku jest "<<p<<endl<<"Liczb nieparzystych w pliku jest "<<np<<endl;

    fin.close();

    return 0;
}

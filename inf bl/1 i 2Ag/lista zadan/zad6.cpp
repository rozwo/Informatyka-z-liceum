#include <bits/stdc++.h>

using namespace std;

int main()
{
    ifstream fin;

    string nazwa;
    cin>>nazwa;
    fin.open(nazwa.c_str());
    int liczba;
    bool w=true;
    while(!fin.eof())
    {
        fin>>liczba;
        if(liczba>=100)
        {
            w=false;
        }
    }
    cout<<"Czy wszystkie liczby w pliku sa mniejsze od 100? "<<w<<endl<<"(1<-tak, 0<-nie)"<<endl;

    fin.close();

    return 0;
}

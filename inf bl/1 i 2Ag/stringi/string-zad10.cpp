#include <bits/stdc++.h>

using namespace std;

bool zad10(string s)
{
    int p=0, n=0;
    for(int i=1; i<=11; i=i+2)
    {
        n=n+(s[i]-'0');
    }
    for(int i=0; i<=10; i=i+2)
    {
        p=p+(s[i]-'0');
    }
    if((p+n*3+(s[12]-'0'))%10==0)
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    string s;
    cout<<"Zadanie 10:"<<endl<<"Podaj liczbe: ";
    cin>>s;
    cout<<"Czy liczba ma poprawne cyfre kontrolna? (t=1, n=0) Odp.: "<<zad10(s)<<endl;

    return 0;
}

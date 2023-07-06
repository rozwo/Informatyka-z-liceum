#include <bits/stdc++.h>

using namespace std;

bool zad09(string s)
{
    int p=0, n=0;
    for(int i=s.length()-1; i>=0; i=i-2)
    {
        n=n+(s[i]-'0');
    }
    for(int i=s.length()-2; i>=0; i=i-2)
    {
        p=p+(s[i]-'0');
    }
    if((p-n)%11==0)
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
    cout<<"Zadanie 9:"<<endl<<"Podaj liczbe: ";
    cin>>s;
    cout<<"Czy ta liczba jest podzielna przez 11? (t=1, n=0) Odp.: "<<zad09(s)<<endl;

    return 0;
}

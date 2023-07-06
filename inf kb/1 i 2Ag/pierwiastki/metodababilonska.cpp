#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, p;
    cout<<"Podaj liczbe: ";
    cin>>x;
    p=x/2;
    while((p*p>x)||((p+1)*(p+1)<=x))
    {
        p=(p+(x/p))/2;
    }

    cout<<endl<<"Pierwiastek całkowity podanej liczby: "<<p<<endl;
    cout<<endl<<"("<<p*p<<"<="<<x<<" i "<<(p+1)*(p+1)<<">"<<x<<")"<<endl;


    double q=x/2;
    while((q*q>x)||((q+1)*(q+1)<=x))
    {
        q=(q+(x/q))/2;
    }

    cout<<endl<<"Pierwiastek podanej liczby: "<<q<<endl;
    cout<<endl<<"("<<q*q<<"<="<<x<<" i "<<(q+1)*(q+1)<<">"<<x<<")"<<endl;

    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int s;
    cout<<"Podaj liczbe: ";
    cin>>s;
    double a, b, x, e;
    a=0;
    b=s;
    for(int i=0;i<20;i++)
    {
        x=(a+b)/2;
        e=fabs(x*x-s);
        if(x*x-s<0)
        {
            a=x;
        }
        if(x*x-s>0)
        {
            b=x;
        }
    }
    cout<<endl<<"Pierwiastek: "<<x<<endl;
    cout<<endl<<"("<<x*x<<"="<<s<<"+/-"<<e<<")"<<endl;

    return 0;
}

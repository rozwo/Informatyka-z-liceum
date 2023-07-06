#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cout<<"Podaj napis: ";
    cin>>s;
    int k;
    cout<<endl<<"Podaj klucz: ";
    cin>>k;
    int n=s.length();
    int w=n/k;
    if(n%k!=0)
    {
        w++;
    }
    cout<<endl<<"Zaszyfrowany napis: ";
    for(int i=0; i<w; i++)
    {
        int j=i;
        while(j<n)
        {
            cout<<s[j];
            j+=w;
        }
    }

    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cout<<"Podaj zaszyfrowany napis: ";
    cin>>s;
    int k;
    cout<<endl<<"Podaj klucz: ";
    cin>>k;
    int n=s.length();
    cout<<endl<<"Rozkodowany napis: ";
    for(int i=0; i<k; i++)
    {
        int j=i;
        while(j<n)
        {
            cout<<s[j];
            if(n%k)//cos jeszcze
            {
                j+=k;
            }
        }
    }

    return 0;
}

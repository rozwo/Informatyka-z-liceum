#include<bits/stdc++.h>

using namespace std;

void wypisz(int n, int t[])
{
    for(int i=0; i<n; i++)
    {
        cout.width(4);
        cout<<t[i]<<" ";
    }
}

int main()
{
    int N[50];
    int j, r, n, i;
    cout<<"Najwiekszy nominal ";
    cin>>n;
    i=0;
    int k=1;
    while(n>0)
    {
        N[i]=n;
        if(n%10==0)
        {
            while(n%10==0)
            {
                n=n/10;
                k++;
            }
        }
        n=n/2;
        while(k>0)
        {
            n=n*10;
        }
        i++;
    }
    wypisz(i,N);
    cout<<endl<<"Reszta ";
    cin>>r;
    j=0;
    cout<<endl<<"Reszta "<<endl;
    while(r>0)
    {
        while(r-N[j]>=0)
        {
            cout<<N[j]<<" ";
            r=r-N[j];
        }
        j++;
    }


    return 0;
}


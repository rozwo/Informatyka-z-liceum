#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N[50];
    int j, r, n;
    cout<<"Ile nominalow ";
    cin>>n;
    for(int i=n-1; i>=0; i--)
    {
        cin>>N[i];
    }
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


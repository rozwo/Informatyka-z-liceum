#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N[8]={200,100,50,20,10,5,2,1};
    int i, r;
    cout<<endl<<"Reszta ";
    cin>>r;
    i=0;
    cout<<endl<<"Reszta "<<endl;
    while(r>0)
    {
        while(r-N[i]>=0)
        {
            cout<<N[i]<<" ";
            r=r-N[i];
        }
        i++;
    }


    return 0;
}


#include<bits/stdc++.h>

using namespace std;

void binar(int x)
{
    int t[8]={128,64,32,16,8,4,2,1};
    for(int i=0; i<8; i++)
    {
        if(x>=t[i])
        {
            cout<<1;
            x=x-t[i];
        }
        else
        {
            cout<<0;
        }
    }
}

int main()
{
    //wypisywanie wszystkich
 /*   for(int i=0; i<=255; i++)
    {
        cout<<i<<". ";
        binar(i);
        cout<<endl;
    }
*/
    int n;
    cin>>n;
    binar(n);


    return 0;
}


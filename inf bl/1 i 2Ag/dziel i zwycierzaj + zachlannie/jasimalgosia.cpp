#include<bits/stdc++.h>

using namespace std;

int szukam(int t[], int p, int k)
{
    int s;
    s = (p+k)/2;
    if (t[s-1]%2!=0 and t[s]%2==0)
    {
        return t[s];
    }
    else
    {
        if (t[s]%2==0)
        {
            return szukam(t, p, s-1);
        }
        else
        {
            return szukam(t, s+1, k);
        }
    }
}

int main()
{
    int t[50];
    int p=0, n;
    cout<<"n ";
    cin>>n;
    cout<<endl;

    for(int i=0; i<n; i++)
    {
        cin>>t[i];
    }

    cout<<endl;
    cout<<szukam(t,p,n-1)<<endl;


    return 0;
}


#include <bits/stdc++.h>

using namespace std;

int main()
{
    ofstream fout;
    fout.open("zad3.txt");

    int liczba;
    int n, k, w_min, w_max;
    cout<<"Podaj n ";
    cin>>n;
    cout<<"Podaj k ";
    cin>>k;
    cout<<"Podaj w_min ";
    cin>>w_min;
    cout<<"Podaj w_max ";
    cin>>w_max;

    srand(time(NULL));

    for(int i=0; i<n; i++)
    {
        if(((n-i)-k)>=0)
        {
            for(int j=0; j<k-1; j++)
            {
                liczba=(rand()%(w_max-w_min+1))+w_min;
                fout<<liczba<<" ";
            }
            liczba=(rand()%(w_max-w_min+1))+w_min;
            fout<<liczba<<endl;
            i=i+k-1;
        }
        else
        {
            for(int j=0; j<n-i-1; j++)
            {
                liczba=(rand()%(w_max-w_min+1))+w_min;
                fout<<liczba<<" ";
            }
            liczba=(rand()%(w_max-w_min+1))+w_min;
            fout<<liczba;
            i=n-1;
        }
    }

    fout.close();

    return 0;
}

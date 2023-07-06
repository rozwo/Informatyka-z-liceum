#include <bits/stdc++.h>

using namespace std;

int main()
{
    ifstream fin;
    fin.open("liczby.txt");

    ofstream fout;
    fout.open("wynik.txt");

    int n, s, x, licznik=0;
    for(int i=0; i<1000; i++)
    {
        s=0;
        fin>>n;
        x=n;
        if(n%2==1)
        {
            while(x>0)
            {
                s=s+x%10;
            }
            if(s==20)
            {
                licznik++;
                fout<<n<<endl;
            }
        }
    }
    fout<<licznik;

    fin.close();
    fout.close();

    return 0;
}

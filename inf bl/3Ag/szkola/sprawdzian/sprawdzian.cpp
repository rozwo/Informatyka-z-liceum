#include <bits./stdc++.h>

using namespace std;

int main()
{
    ifstream fin;
    ofstream fout;

    fin.open("tekst.txt");
    fout.open("wyniki.txt");

    string n;

    while(!fin.eof())
    {
        fin>>n;
        int x=n.length();
        int sam=0;
        for(int j=0; j<x; j++)
        {
            if(n[j]=='a' || n[j]=='e' || n[j]=='i' || n[j]=='o' || n[j]=='u' || n[j]=='y')
            {
                sam++;
            }
        }
        if(x%2==0 && sam%2==0)
        {
            fout<<n<<" ";
        }
    }

    fin.close();
    fout.close();

    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ifstream fin;

    fin.open("wyrazy.txt");;

	int t[21]={0};
    string slowo;
    
    while(!fin.eof())
    {
		fin>>slowo;
        if(slowo.length()>20)
        {
        	t[0]++;
		}
		else
		{
			t[slowo.length()]++;
		}
    }

    fin.close();
    cout<<"Wyrazow wiekszych niz 20 jest "<<t[0]<<endl;
    for(int i=1; i<=20; i++)
    {
    	cout<<"Wyrazow o dlugosci "<<i<<" jest "<<t[i]<<endl;
	}

    return 0;
}

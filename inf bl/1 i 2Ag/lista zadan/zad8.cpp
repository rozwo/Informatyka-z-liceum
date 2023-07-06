#include <bits/stdc++.h>

using namespace std;

int main()
{
    ifstream fin;
    ofstream fout;

    string nazwa;
    cin>>nazwa;
    fin.open(nazwa.c_str());
	fout.open("wynik8.txt");

	int licznik=0;
    string slowo;
    while(!fin.eof())
    {
		fin>>slowo;
        if(slowo.length()<3)
        {
        	slowo="pomidor";
		}
		fout<<slowo;
		//fout<<" ";
		licznik++;
		if(licznik==10)
		{
			fout<<"/n";
			licznik=0;
		}
    }

    fin.close();
    fout.close();


    return 0;
}

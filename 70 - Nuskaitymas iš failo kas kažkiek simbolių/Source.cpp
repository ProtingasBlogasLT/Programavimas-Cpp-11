#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	string zodziai[10];
	int skaiciai[10];
	char nuskaitymui[6];
	int kiek = 0;

	ifstream fin("failas.txt");

	while (!fin.eof())
	{
		fin.get(nuskaitymui, 6);
		zodziai[kiek] = nuskaitymui;
		fin >> skaiciai[kiek];
		fin >> ws; // white space
		kiek++;
	}

	fin.close();

	for (int i = 0; i < kiek; i++)
	{
		cout << zodziai[i] << " "
			<< skaiciai[i] << endl;
	}

	return 0;
}

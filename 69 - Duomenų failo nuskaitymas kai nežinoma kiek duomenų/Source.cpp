#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	string vardai[10];
	int amziai[10];
	int kiekis = 0;

	ifstream fin("failas.txt");

	// fin - nuskaitinëjimo stream
	// .eof() - end of file, gràþina bool
	// ! reiðkia kad invertuoja
	while (!fin.eof())
	{
		fin >> vardai[kiekis] >> amziai[kiekis];
		kiekis++;
	}

	fin.close();

	for (int i = 0; i < kiekis; i++)
	{
		cout << vardai[i] << " (" << amziai[i] << "), ";
	}
	cout << endl;

	return 0;
}

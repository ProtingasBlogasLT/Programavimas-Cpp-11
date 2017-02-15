#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	// pirmas failas

	ifstream fin("failas.txt");

	int kiekis;
	fin >> kiekis;

	string vardai[10];
	for (int i = 0; i < kiekis; i++)
	{
		fin >> vardai[i];
	}

	fin.close();

	for (int i = 0; i < kiekis; i++)
	{
		cout << vardai[i] << endl;
	}

	// antras failas

	fin.open("failas2.txt");

	int kiekis2;
	fin >> kiekis2;

	int skaiciai[10][5] = { 0 };
	int kiekisEiluteje;

	for (int i = 0; i < kiekis2; i++)
	{
		fin >> kiekisEiluteje;
		for (int j = 0; j < kiekisEiluteje; j++)
		{
			fin >> skaiciai[i][j];
		}
	}

	fin.close();

	for (int i = 0; i < kiekis2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << skaiciai[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}

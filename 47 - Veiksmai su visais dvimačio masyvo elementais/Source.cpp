#include <iostream>
using namespace std;

int main()
{
	int dvim[5][5] = {
		{5, 8, -6, 3, 4},
		{8, 0, 3, -4, 3},
		{4, -2, 0, 1, 7},
		{8, 7, 3, -8, -5}
	};

	int eiluciu = 5,
		stulpeliu = 5;

	// suma

	int suma = 0;

	for (int i = 0; i < eiluciu; i++)
	{
		for (int j = 0; j < stulpeliu; j++)
		{
			suma += dvim[i][j];
		}
	}

	cout << "suma: " << suma << endl;

	// vidurkis

	int kiek_nariu = eiluciu * stulpeliu;
	double vidurkis = double(suma) / kiek_nariu;

	cout << "vidurkis: " << vidurkis << endl;

	// teigiamu/neigiamu skaiciu kiekis

	int teigiamu = 0,
		neigiamu = 0;

	for (int i = 0; i < eiluciu; i++)
	{
		for (int j = 0; j < stulpeliu; j++)
		{
			if (dvim[i][j] > 0)
			{
				teigiamu++;
			}
			else if (dvim[i][j] < 0)
			{
				neigiamu++;
			}
		}
	}

	cout << "teigiamu: " << teigiamu << endl;
	cout << "neigiamu: " << neigiamu << endl;

	// min/max paieska

	// ieskau tik min skaiciaus

	int min = dvim[0][0];
	int eil_indeksas = 0, stulp_indeksas = 0;

	for (int i = 0; i < eiluciu; i++)
	{
		for (int j = 0; j < stulpeliu; j++)
		{
			if (dvim[i][j] < min)
			{
				min = dvim[i][j];
				eil_indeksas = i;
				stulp_indeksas = j;
			}
		}
	}

	cout << "min skaicius: " << min << endl;
	cout << "min skaiciaus eil: " << eil_indeksas + 1 << endl;
	cout << "min skaiciaus stulp: " << stulp_indeksas + 1 << endl;

	return 0;
}
#include <iostream>
using namespace std;

int main()
{
	int pazymiai[20] = { 9, 8, 3, 4, 5, 8, 7 };
	int kiek = 7;

	int suma = 0;

	for (int i = 0; i < kiek; i++)
	{
		suma += pazymiai[i];
	}

	cout << "suma: " << suma << endl;

	double vidurkis = (double)suma / kiek;

	cout << "vidurkis: " << vidurkis << endl;

	int lyginiu_suma = 0;

	for (int i = 0; i < kiek; i++)
	{
		if (pazymiai[i] % 2 == 0)
		{
			lyginiu_suma += pazymiai[i];
		}
	}

	cout << "lyginiu suma: " << lyginiu_suma << endl;

	return 0;
}
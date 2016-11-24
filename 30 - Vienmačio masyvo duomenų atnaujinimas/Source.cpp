#include <iostream>
using namespace std;

int main()
{
	int pazymiai[10] = { 7, 4, 3, 8, 9 };
	int kiek = 5;

	for (int i = 0; i < kiek; i++)
	{
		cout << pazymiai[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < kiek; i++)
	{
		if (pazymiai[i] < 5)
		{
			pazymiai[i] = 0;
		}
	}

	for (int i = 0; i < kiek; i++)
	{
		cout << pazymiai[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < kiek; i++)
	{
		if (pazymiai[i] == 0)
		{
			cout << "ivesikite pazymi: ";
			cin >> pazymiai[i];
		}
	}

	for (int i = 0; i < kiek; i++)
	{
		cout << pazymiai[i] << " ";
	}
	cout << endl;

	char veiksmas;

	for (int i = 0; i < kiek; i++)
	{
		cout << "skaicius yra: " << pazymiai[i] << endl;
		cout << "ar norite pakeisti? t/n: ";
		cin >> veiksmas;
		if (veiksmas == 't')
		{
			cout << "iveskite nauja reiksme: ";
			cin >> pazymiai[i];
		}
	}

	for (int i = 0; i < kiek; i++)
	{
		cout << pazymiai[i] << " ";
	}
	cout << endl;

	pazymiai[0] = 10;
	cout << pazymiai[0] << endl;

	for (int i = 0; i < kiek; i++)
	{
		pazymiai[i] = 0;
	}

	for (int i = 0; i < kiek; i++)
	{
		cout << pazymiai[i] << " ";
	}
	cout << endl;

	return 0;
}
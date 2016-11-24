#include <iostream>
using namespace std;

int main()
{
	int skaicius[10] = { 1, 5, 8, 3 };

	int kiek;
	cout << "kiek skaiciu suvesti: ";
	cin >> kiek;

	for (int i = 0; i < kiek; i++)
	{
		cout << i + 1 << " skaicius: ";
		cin >> skaicius[i];
	}

	for (int i = 0; i < kiek; i++)
	{
		cout << skaicius[i] << " ";
	}

	cout << endl;

	int masyvas[5];
	cout << "iveskite masyvas[3]: ";
	cin >> masyvas[3];
	cout << masyvas[3] << endl;

	masyvas[0] = 14;
	masyvas[1] = 23;

	int a;
	a = 14;

	return 0;
}
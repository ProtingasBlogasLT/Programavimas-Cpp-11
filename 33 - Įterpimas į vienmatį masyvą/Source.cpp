#include <iostream>
using namespace std;

int main()
{
	int skaiciai[10] = { 14, 5, 6, 7, 6 };
	int kiek = 5;

	for (int i = 0; i < kiek; i++)
	{
		cout << skaiciai[i] << " ";
	}
	cout << endl;

	int kur_iterpti, ka_iterpti;

	cout << "uz kurio skaiciaus iterpti (1-" << kiek << "): ";
	cin >> kur_iterpti;

	cout << "ka iterpti: ";
	cin >> ka_iterpti;

	kiek++;

	for (int i = kiek; i > kur_iterpti; i--)
	{
		skaiciai[i] = skaiciai[i - 1];
	}

	skaiciai[kur_iterpti] = ka_iterpti;

	for (int i = 0; i < kiek; i++)
	{
		cout << skaiciai[i] << " ";
	}
	cout << endl;

	return 0;
}
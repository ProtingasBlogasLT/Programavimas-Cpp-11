#include <iostream>
using namespace std;

int main()
{
	int a[50] = { 1, 4, 5, 8, 3, 4 };
	int kiek = 6;

	for (int i = 0; i < kiek; i++)
	{
		cout << a[i] << endl;
	}
	cout << endl;

	cout << "iveskite dar viena skaiciu: ";
	int laikinasis;
	cin >> laikinasis;
	a[kiek] = laikinasis;
	kiek++;

	for (int i = 0; i < kiek; i++)
	{
		cout << a[i] << endl;
	}
	cout << endl;

	cout << "pirmo skaiciaus nauja reiksme: ";
	cin >> laikinasis;
	a[0] = laikinasis;

	for (int i = 0; i < kiek; i++)
	{
		cout << a[i] << endl;
	}
	cout << endl;

	return 0;
}
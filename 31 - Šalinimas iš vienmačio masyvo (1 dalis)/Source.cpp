#include <iostream>
using namespace std;

int main()
{
	int skaiciai[10] = { 14, 8, 7, 3, 2, 87 };
	int kiek = 6;

	for (int i = 0; i < kiek; i++)
	{
		cout << skaiciai[i] << " ";
	}
	cout << endl;

	cout << "kuri skaiciu salinti (1-" << kiek << "): ";
	int salinti;
	cin >> salinti;
	salinti--;

	for (int i = salinti; i < kiek - 1; i++)
	{
		skaiciai[i] = skaiciai[i + 1];
	}
	kiek--;

	for (int i = 0; i < kiek; i++)
	{
		cout << skaiciai[i] << " ";
	}
	cout << endl;

	return 0;
}
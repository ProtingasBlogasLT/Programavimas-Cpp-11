#include <iostream>
using namespace std;

int main()
{
	int skaiciai[10] = { 14, 8, 6, 7, 98 };
	int kiek = 5;

	for (int i = 0; i < kiek; i++)
	{
		cout << skaiciai[i] << " ";
	}
	cout << endl;

	cout << "salinti visus skaicius mazesnius uz: ";
	int salinti;
	cin >> salinti;

	for (int i = 0; i < kiek; i++)
	{
		if (skaiciai[i] < salinti)
		{
			for (int j = i; j < kiek - 1; j++)
			{
				skaiciai[j] = skaiciai[j + 1];
			}
			i--;
			kiek--;
		}
	}

	for (int i = 0; i < kiek; i++)
	{
		cout << skaiciai[i] << " ";
	}
	cout << endl;

	return 0;
}
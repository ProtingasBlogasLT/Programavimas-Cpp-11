#include <iostream>
using namespace std;

int main()
{
	int skaiciai[] = { 14, 5, 6, 1, 31 };
	int kiek = 5;

	int maziausias = skaiciai[0];
	int indeksas = 0;

	for (int i = 1; i < kiek; i++)
	{
		if (skaiciai[i] < maziausias)
		{
			maziausias = skaiciai[i];
			indeksas = i;
		}
	}

	cout << maziausias << endl;

	return 0;
}
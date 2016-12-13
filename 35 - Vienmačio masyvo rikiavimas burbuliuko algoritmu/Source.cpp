#include <iostream>
using namespace std;

int main()
{
	int skaiciai[] = { 14, 5, 6, 1, 31 };
	int kiek = 5;

	for (int i = 0; i < kiek; i++)
	{
		cout << skaiciai[i] << " ";
	}
	cout << endl;

	bool rikiuoti = true;
	while (rikiuoti)
	{
		rikiuoti = false;

		for (int i = 0; i < kiek - 1; i++)
		{
			if (skaiciai[i] > skaiciai[i + 1])
			{
				swap(skaiciai[i], skaiciai[i + 1]);
				rikiuoti = true;
			}
		}
	}

	for (int i = 0; i < kiek; i++)
	{
		cout << skaiciai[i] << " ";
	}
	cout << endl;

	return 0;
}
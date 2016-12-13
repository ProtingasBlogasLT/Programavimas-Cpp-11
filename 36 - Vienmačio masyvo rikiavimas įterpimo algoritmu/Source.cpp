#include <iostream>
using namespace std;

int main()
{
	int skaiciai[] = { 14, 5, 1, 12, 31 };
	int kiek = 5;

	for (int i = 0; i < kiek; i++)
	{
		cout << skaiciai[i] << " ";
	}
	cout << endl;

	int j;
	for (int i = 1; i < kiek; i++)
	{
		j = i;
		while (j > 0 && skaiciai[j] < skaiciai[j - 1])
		{
			swap(skaiciai[j], skaiciai[j - 1]);
			j--;
		}
	}

	for (int i = 0; i < kiek; i++)
	{
		cout << skaiciai[i] << " ";
	}
	cout << endl;

	return 0;
}
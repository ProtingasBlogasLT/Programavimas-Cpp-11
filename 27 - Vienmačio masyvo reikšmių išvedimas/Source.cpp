#include <iostream>
using namespace std;

int main()
{
	int skaiciai[10] = { 1, 8, 7, 6, 5, 3, 2 };
	int kiek = 7;

	for (int i = 0; i < kiek; i++)
	{
		cout << skaiciai[i] << endl;
	}

	for (int i = 0; i < kiek; i++)
	{
		cout << "[ " << skaiciai[i] << " ] ";
	}
	cout << endl;

	for (int i = 0; i < kiek; i += 3)
	{
		cout << skaiciai[i] << endl;
	}

	cout << endl;
	cout << skaiciai[2] << endl;
	cout << skaiciai[kiek - 1] << endl;

	for (int i = 0; i < sizeof(skaiciai)/sizeof(int); i++)
	{
		cout << skaiciai[i] << " ";
	}
	cout << endl;

	return 0;
}
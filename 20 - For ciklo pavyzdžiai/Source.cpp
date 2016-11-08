#include <iostream>
#include <string>
using namespace std;

int main()
{
	// 1 pavyzdys

	int suma = 0;

	// [1-100]
	for (int i = 1; i <= 100; i++)
	{
		suma += i;
	}

	cout << "[0-100] skaičių suma: " << suma << endl;

	// 2 pavyzdys

	int a = 10;
	string tekstas = "tekstas, kuris bus isvedamas daug kartu";
	
	for (int i = 0; i < a; i++)
	{
		cout << i + 1 << tekstas << endl;
	}

	// 3 pavyzdys

	int suma2 = 0;

	for (int i = 1; i <= 100; i++)
	{
		if (i % 4 == 0)
		{
			suma2 += i;
		}
	}

	cout << "Suma skaiciu kurie dalinasi is 4: " << suma2 << endl;

	// 4 pavyzdys

	for (int i = 0; i < 15; i++)
	{
		if (i % 2 == 0 && i != 0)
		{
			cout << i << endl;
		}
	}

	return 0;
}
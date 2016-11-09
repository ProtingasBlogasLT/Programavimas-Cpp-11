#include <iostream>
using namespace std;

int main()
{
	// 1 pvz

	cout << "for ciklas" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << i << " ";
	}
	cout << endl;

	cout << "while ciklas" << endl;
	int i = 0;
	while (i < 5)
	{
		cout << i << " ";
		i++;
	}
	cout << endl;
	
	// 2 pvz

	cout << "iveskite skaiciu kuris patenka tarp [0-100]: ";
	int skaicius;
	cin >> skaicius;

	while (skaicius < 0 || skaicius > 100)
	{
		cout << "ivyko kaida" << endl;
		cout << "iveskite per nauja" << endl;
		cin >> skaicius;
	}

	cout << "ivestas skaicius: " << skaicius << endl;

	// 3 pvz

	int suma = 0;
	int einamasSkaicius = 0;

	while (suma <= 100 && suma + einamasSkaicius + 1 <= 100)
	{
		suma += einamasSkaicius;
		einamasSkaicius++;
	}

	cout << "gauta suma: " << suma << endl;
	cout << "einamas skaicius: " << einamasSkaicius << endl;

	return 0;
}
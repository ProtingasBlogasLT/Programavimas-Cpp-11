#include <iostream>
using namespace std;

int main()
{
	int skaicius;

	do
	{
		cout << "pasirinkite skaiciu esanti tarp [0-100]: ";
		cin >> skaicius;

	} while (skaicius < 0 || skaicius > 100);

	cout << "ivestas skaicius: " << skaicius << endl;

	return 0;
}
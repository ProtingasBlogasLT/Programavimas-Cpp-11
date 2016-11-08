#include <iostream>
using namespace std;

int main()
{
	int a = 2;

	if (a == 1)
	{
		//..
	}
	else if (a == 2)
	{
		//..
	}
	else
	{
		//..
	}

	switch (a)
	{
	case 1:
		cout << 1 << endl;
		break;
	case 2:
		cout << 2 << endl;
		break;
	default:
		cout << "ivyko klaida" << endl;
	}

	cout << "pasirinkite:" << endl;
	cout << "1 - laptopas" << endl;
	cout << "2 - stacionarus" << endl;
	int pasirinkimas;
	cin >> pasirinkimas;

	switch (pasirinkimas)
	{
	case 1: cout << "laptopas" << endl; break;
	case 2: cout << "stacionarus" << endl; break;
	default: cout << "blogas pasirinkimas" << endl;
	}

	cin >> pasirinkimas;

	if (pasirinkimas == 1)
	{
		cout << "laptopas" << endl;
	}
	if (pasirinkimas == 2)
	{
		cout << "stacionarus" << endl;
	}
	else
	{
		cout << "blogas pasirinkimas" << endl;
	}

	return 0;
}
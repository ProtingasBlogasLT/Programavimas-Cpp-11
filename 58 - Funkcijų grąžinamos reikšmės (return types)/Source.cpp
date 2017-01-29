#include <iostream>
#include <string>
using namespace std;

int suma(int a, int b)
{
	return a + b;
}

string formatavimas(string vardas, string pavarde)
{
	string suformatuotas = vardas + " " + pavarde;
	return suformatuotas;
}

double dalmuo(int a, int b)
{
	return double(a) / b;
}

// true jei a daugiau uz b
// false jei a maziau uz b
bool palyginimas(int a, int b)
{
	if (a > b)
	{
		return true;
	}
	return false;
}

int main()
{
	cout << suma(10, 20) << endl;
	cout << formatavimas("ieva", "bepavardene") << endl;
	cout << dalmuo(11, 3) << endl;

	cout << palyginimas(50, 20) << endl;
	cout << palyginimas(11, 20) << endl;

	if (palyginimas(50, 20))
	{
		cout << "salyga 50 > 20 yra teisinga" << endl;
	}
	else
	{
		cout << "salyga nera teisinga" << endl;
	}

	return 0;
}

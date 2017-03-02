#include <iostream>
#include <string>
using namespace std;

struct Knyga
{
	string autorius;
	string Pavadinimas;
	int PuslapiuSkaicius;
	double Kaina;

	Knyga()
	{
		autorius = "";
		Pavadinimas = "";
		PuslapiuSkaicius = 0;
		Kaina = 0.0;
	}

	Knyga(string autorius, string pavadinimas)
	{
		this->autorius = autorius; // jeigu vienodi pavadinimai
		Pavadinimas = pavadinimas;
		PuslapiuSkaicius = 0;
		Kaina = 0;
	}

	Knyga(string autorius, string pavadinimas, int puslapiusk, double kaina)
	{
		this->autorius = autorius; // jeigu vienodi pavadinimai
		Pavadinimas = pavadinimas;
		PuslapiuSkaicius = puslapiusk;
		Kaina = kaina;
	}

	void Isvedimas()
	{
		cout << "Knygos " << Pavadinimas << " autorius yra " << autorius << endl;
		cout << "Puslapiu knygoje: " << PuslapiuSkaicius << endl;
		cout << "Knygos kaina: " << Kaina << " euru" << endl;
		cout << endl;
	}
};

int main()
{
	Knyga k1("pomidoras", "laukas", 200, 14.99);
	k1.Isvedimas();

	Knyga k2("kitas", "kita knyga", 150, 9.99);
	k2.Isvedimas();

	Knyga k3;
	k3.Isvedimas();

	Knyga k4("asjh", "sjfh");
	k4.Isvedimas();

	return 0;
}

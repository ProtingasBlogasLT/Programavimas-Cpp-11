#include <iostream>
#include "Motociklas.h"
using namespace std;

int main()
{
	Motociklas pirmas("Honda", "Grom", 125, "streetbike", 100);
	Motociklas antras("Yamaha", "R1", 1000, "superbike", 320);

	pirmas.Isvedimas();
	antras.Isvedimas();

	if (pirmas.MaxGreitis > antras.MaxGreitis)
	{
		cout << "Pirmas motociklas yra greitesnis" << endl;
		cout << "Jo greitis: " << pirmas.MaxGreitis << " km" << endl;
	}
	else if (pirmas.MaxGreitis < antras.MaxGreitis)
	{
		cout << "Antras motociklas yra greitesnis" << endl;
		cout << "Jo greitis: " << antras.MaxGreitis << " km" << endl;
	}
	else
	{
		cout << "Motociklai yra vienodai greiti." << endl;
		cout << "Greitis: " << pirmas.MaxGreitis << endl;
	}

	cout << endl;

	if (pirmas.ArAsGalingesnis(antras.DarbinisTuris))
	{
		cout << "Pirmo motociklo darbinis turis yra didesnis" << endl;
	}
	else
	{
		cout << "Antro motociklo darbinis turis yra didesnis" << endl;
	}

	return 0;
}

#include <iostream>
#include <string>
using namespace std;

struct Motociklas
{
	// DUOMENYS
	
	string Gamintojas;
	string Modelis;
	int DarbinisTuris; // cc
	string Tipas;
	int MaxGreitis;

	// SPECIALUS METODAS - KONSTRUKTORIUS

	Motociklas(string Gamintojas, string modelis,
		int darbinisTuris, string tipas, int maxgreitis)
	{
		this->Gamintojas = Gamintojas;
		Modelis = modelis;
		DarbinisTuris = darbinisTuris;
		Tipas = tipas;
		MaxGreitis = maxgreitis;
	}

	// METODAI / FUNKCIJOS

	void Isvedimas()
	{
		cout << Gamintojas << " " << Modelis << endl;
		cout << "Darbinis turis: " << DarbinisTuris << " cc" << endl;
		cout << "Motociklo tipas: " << Tipas << endl;
		cout << "Jo maksimalus greitis: " << MaxGreitis << " km" << endl << endl;
	}

	bool ArAsGalingesnis(int darbinisTuris)
	{
		return DarbinisTuris > darbinisTuris ? true : false;
	}
};

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

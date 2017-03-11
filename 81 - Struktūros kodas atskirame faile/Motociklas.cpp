#include "Motociklas.h"

Motociklas::Motociklas(string Gamintojas, string modelis,
	int darbinisTuris, string tipas, int maxgreitis)
{
	this->Gamintojas = Gamintojas;
	Modelis = modelis;
	DarbinisTuris = darbinisTuris;
	Tipas = tipas;
	MaxGreitis = maxgreitis;
}

void Motociklas::Isvedimas()
{
	cout << Gamintojas << " " << Modelis << endl;
	cout << "Darbinis turis: " << DarbinisTuris << " cc" << endl;
	cout << "Motociklo tipas: " << Tipas << endl;
	cout << "Jo maksimalus greitis: " << MaxGreitis << " km" << endl << endl;
}

bool Motociklas::ArAsGalingesnis(int darbinisTuris)
{
	return DarbinisTuris > darbinisTuris ? true : false;
}
#include <iostream>
#include <string>
using namespace std;

class Pavadinimas
{
	// kintamieji
	// metodai
};

class Televizorius
{
public:
	string Gamintojas;
	double Istrizaine;

	Televizorius(string gamintojas, double istrizaine)
	{
		Gamintojas = gamintojas;
		//this->gamintojas = gamintojas;
		Istrizaine = istrizaine;
	}

	void Isvedimas()
	{
		cout << Gamintojas << " " << Istrizaine << endl;
	}
};

int main()
{
	Televizorius televizorius("Philips", 32);
	televizorius.Isvedimas();
	cout << televizorius.Gamintojas << endl;

	return 0;
}
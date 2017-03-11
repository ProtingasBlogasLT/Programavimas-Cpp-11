#include <iostream>
#include <string>
using namespace std;

struct Monitorius
{
	// DUOMENYS

	string Gamintojas;
	string Modelis;
	double Istrizaine;
	int RezPlotis;
	int RezAukstis;

	// SPECIALUS METODAS - KONSTRUKTORIUS

	Monitorius(string Gamintojas, string modelis,
		double istrizaine, int rezplotis,
		int rezaukstis)
	{
		this->Gamintojas = Gamintojas; // jeigu pavadinimai sutampa
		Modelis = modelis;
		Istrizaine = istrizaine;
		RezPlotis = rezplotis;
		RezAukstis = rezaukstis;
	}

	Monitorius()
	{
	}

	// METODAI / FUNKCIJOS

	void Isvedimas()
	{
		cout << Gamintojas << " " << Modelis << endl;
		cout << "Istrizaine: " << Istrizaine << "\"" << endl;
		cout << "Rezoliucija: " << RezPlotis <<
			" x " << RezAukstis << endl << endl;
	}

	void Ivedimas()
	{
		cout << "Iveskite gamintoja: " << endl;
		getline(cin, Gamintojas);
		cout << "Iveskite modeli: " << endl;
		getline(cin, Modelis);
		cout << "Iveskite istrizaine: ";
		cin >> Istrizaine;
		cout << "Iveskite rezoliucija (plotis ir aukstis per tarpa): ";
		cin >> RezPlotis >> RezAukstis;
		cout << endl;
	}

	void IsvestiModeli()
	{
		cout << Gamintojas << " pagamino monitoriu pavadinimu "
			<< Modelis << endl << endl;
	}
};

int main()
{
	Monitorius pirmas("Philips", "Lor 500", 21.5, 1920, 1080);
	pirmas.Isvedimas();
	Monitorius antras;
	antras.Ivedimas();
	antras.Isvedimas();
	pirmas.IsvestiModeli();
	antras.IsvestiModeli();
	return 0;
}

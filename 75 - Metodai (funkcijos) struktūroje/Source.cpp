#include <iostream>
#include <string>
using namespace std;

struct Knyga
{
	string Pavadinimas;
	string Autorius;
	string Zanras;
	int Metai;
	int Puslapiai;
	double Savikaina;
	double Kaina;

	void Ivedimas()
	{
		cout << "Iveskite knygos pavadinima: ";
		cin >> Pavadinimas;
		cout << "Iveskite autoriu: ";
		cin >> Autorius;
		cout << "Iveskite zanra: ";
		cin >> Zanras;
		cout << "Iveskite leidimo metus: ";
		cin >> Metai;
		cout << "Iveskite puslapiu skaiciu: ";
		cin >> Puslapiai;
		cout << "Iveskite savikaina: ";
		cin >> Savikaina;
		cout << "Iveskite kaina eurais: ";
		cin >> Kaina;
		cout << endl;
	}

	void Isvedimas()
	{
		cout << "Pavadinimas: " << Pavadinimas << endl;
		cout << "Sia knyga parase: " << Autorius << endl;
		cout << "Jos zanras: " << Zanras << endl;
		cout << "Leidimo metai: " << Metai << endl;
		cout << "Puslapiø skaièius: " << Puslapiai << endl;
		cout << "Savikaina: " << Savikaina << endl;
		cout << "Kaina: " << Kaina << "eur" << endl;
		cout << endl;
	}

	double Pelnas(int knyguSkaicius)
	{
		double vienosKnygosPelnas = Kaina - Savikaina;
		double visuKnyguPelnas = vienosKnygosPelnas * knyguSkaicius;
		return visuKnyguPelnas;
	}
};

int main()
{
	Knyga knyga1;
	Knyga knyga2;
	Knyga knyga3;

	cout << "PIRMA KNYGA" << endl;
	knyga1.Ivedimas();
	cout << "ANTRA KNYGA" << endl;
	knyga2.Ivedimas();
	cout << "TRECIA KNYGA" << endl;
	knyga3.Ivedimas();

	knyga1.Isvedimas();
	knyga2.Isvedimas();
	knyga3.Isvedimas();

	int vienosRusiesKnygu = 10;

	double pirmosRusies = knyga1.Pelnas(vienosRusiesKnygu);
	double antrosRusies = knyga2.Pelnas(vienosRusiesKnygu);
	double treciosRusies = knyga3.Pelnas(vienosRusiesKnygu);

	cout << "TRIJU RUSIU KNYGU, PARDUODANT PO 10 KNYGU KIEKVIENOS RUSIES, PELNAI BUS: " << endl;
	cout << "Pirmos: " << pirmosRusies << " eur" << endl;
	cout << "Antros: " << antrosRusies << " eur" << endl;
	cout << "Trecios: " << treciosRusies << " eur"<< endl;

	return 0;
}

#include <iostream>
#include <string>
using namespace std;

struct Automobilis
{
	string Marke;
	string Modelis;
	int Rida;
	int GamybosMetai;
	double DarbinisTuris;
	string Spalva;

	Automobilis(string marke, string modelis, int rida,
		int gamybosMetai, double darbinisTuris, string spalva)
	{
		Marke = marke;
		Modelis = modelis;
		Rida = rida;
		GamybosMetai = gamybosMetai;
		DarbinisTuris = darbinisTuris;
		Spalva = spalva;
	}

	void Isvedimas()
	{
		cout << "Automobilis: " << Marke << " " << Modelis;
		cout << " (" << GamybosMetai << " m.)" << endl;
		cout << "Nuvaziavo: " << Rida << endl;
		cout << "Automobilio darbinis turis: " << DarbinisTuris << endl;
		cout << "Jo spalva: " << Spalva << endl;
	}

	double KmPerMetus()
	{
		int kiekMetuAutomobiliui = 2017 - GamybosMetai;
		return (double)Rida / kiekMetuAutomobiliui;
	}
};

int main()
{
	Automobilis aut("afds", "sgdsg", 20000, 2010, 1.6, "melyna");
	aut.Isvedimas();
	cout << "Km per metus: " << aut.KmPerMetus() << endl;

	return 0;
}

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

struct Darbuotojas
{
	string VardasPavarde;
	int Amzius;
	double Alga;
	double Etatas;

	Darbuotojas() {}

	Darbuotojas(string vardasPavarde, int amzius,
		double alga, double etatas)
	{
		VardasPavarde = vardasPavarde;
		Amzius = amzius;
		Alga = alga;
		Etatas = etatas;
	}

	void Isvedimas()
	{
		cout << VardasPavarde << " " << Amzius << " "
			<< Alga << " " << Etatas << endl;
	}
};

void Nuskaitymas(string failas, Darbuotojas mas[], int & kiekis)
{
	string VardasPavarde;
	int Amzius;
	double Alga;
	double Etatas;

	ifstream fin(failas);

	fin >> kiekis >> ws;

	for (int i = 0; i < kiekis; i++)
	{
		getline(fin, VardasPavarde, ';');
		fin >> Amzius >> Alga >> Etatas >> ws;
		Darbuotojas laikinas(VardasPavarde, Amzius, Alga, Etatas);
		mas[i] = laikinas;
		//mas[i] = Darbuotojas(VardasPavarde, Amzius, Alga, Etatas);
	}

	fin.close();
}

void Isvedimas(string failas, string komentaras, Darbuotojas dar[], int kiek)
{
	/*ofstream fout;
	fout.open(failas);*/

	//ofstream fout("rezultatai.txt");

	ofstream fout(failas);

	//string linija(51, '-');
	string linija = "+-------------------+--------+-----------+--------+";

	fout << komentaras << endl;
	fout << linija << endl;
	fout << "| Vardas Pavardë    | Amþius | Alga, eur | Etatas |" << endl;
	fout << linija << endl;
	for (int i = 0; i < kiek; i++)
	{
		fout << "| " << setw(17) << left << dar[i].VardasPavarde
			<< " | " << setw(6) << right << dar[i].Amzius
			<< " | " << setw(9) << dar[i].Alga
			<< " | " << setw(6) << dar[i].Etatas
			<< " |" << endl;
	}
	fout << linija << endl;

	fout.close();
}

int main()
{
	Darbuotojas darbuotojai[10];
	int kiekis = 0;
	Nuskaitymas("Duomenys.txt", darbuotojai, kiekis);
	Isvedimas("Rezultatai.txt", "Pradiniai duomenys", darbuotojai, kiekis);
	system("start Rezultatai.txt");
	return 0;
}
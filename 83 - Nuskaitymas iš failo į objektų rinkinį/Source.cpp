#include <iostream>
#include <string>
#include <fstream>
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

int main()
{
	Darbuotojas darbuotojai[10];
	int kiekis = 0;
	Nuskaitymas("Duomenys.txt", darbuotojai, kiekis);

	for (int i = 0; i < kiekis; i++)
	{
		darbuotojai[i].Isvedimas();
	}

	return 0;
}

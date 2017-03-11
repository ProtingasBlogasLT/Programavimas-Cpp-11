#include <iostream>
#include <string>
using namespace std;

struct Studentas
{
	string VardasPavarde;
	int Amzius;
	double Vidurkis;
	int Kursas;

	Studentas(string vardasPavarde, int amzius, double vidurkis,
		int kursas)
	{
		VardasPavarde = vardasPavarde;
		Amzius = amzius;
		Vidurkis = vidurkis;
		Kursas = kursas;
	}

	void Isvedimas()
	{
		cout << "Studentas " << VardasPavarde
			<< " mokosi " << Kursas << " kurse. "
			<< "Jo vidurkis yra " << Vidurkis << endl;
	}
};

double VidurkioVidurkis(Studentas grupe[], int kiek)
{
	double suma = 0;

	for (int i = 0; i < kiek; i++)
	{
		suma += grupe[i].Vidurkis;
	}

	return suma / kiek;
}

int main()
{
	Studentas grupe[3] = {
		Studentas("Tosn Jsgf", 22, 8.5, 4),
		Studentas("Jsdlds jasbf", 21, 7.1, 2),
		Studentas("Othsn SKrt", 18, 6.8, 1)
	};

	for (int i = 0; i < 3; i++)
	{
		grupe[i].Isvedimas();
	}

	cout << "Grupes vidurkiu vidurkis: "
		<< VidurkioVidurkis(grupe, 3) << endl;

	return 0;
}

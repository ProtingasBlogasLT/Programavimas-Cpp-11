#include <iostream>
#include <string>
using namespace std;

struct Knyga
{
	string Autorius;
	string Zanras;
	int Metai;
	int Puslapiai;
	double Kaina;
};

int main()
{
	// tipas pavadinimas;

	int skaicius;
	string tekstas;

	Knyga knygosObjektas;
	skaicius = 5;
	knygosObjektas.Autorius = "asfsdg";
	knygosObjektas.Zanras = "sdggh";
	knygosObjektas.Metai = 2004;
	knygosObjektas.Kaina = 24.99;
	knygosObjektas.Puslapiai = 500;

	cout << "Autorius: " << knygosObjektas.Autorius << endl;
	cout << "Þanras: " << knygosObjektas.Zanras << endl;
	cout << "Metai: " << knygosObjektas.Metai << endl;
	cout << "Puslapiø skaièius: " << knygosObjektas.Puslapiai << endl;
	cout << "Kaina: " << knygosObjektas.Kaina << "eur" << endl;

	// vietoj tokio kodo:

	string Autorius1;
	string Zanras1;
	int Metai1;
	int Puslapiai1;
	double Kaina1;

	string Autorius2;
	string Zanras2;
	int Metai2;
	int Puslapiai2;
	double Kaina2;

	string Autorius3;
	string Zanras3;
	int Metai3;
	int Puslapiai3;
	double Kaina3;

	// galima toká kodà:

	Knyga knyga1;
	Knyga knyga2;
	Knyga knyga3;

	return 0;
}

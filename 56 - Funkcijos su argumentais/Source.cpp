#include <iostream>
#include <string>
using namespace std;

void pasisveikinimas(string vardas)
{
	cout << "labas, " << vardas << endl;
}

int suma(int a, int b)
{
	int ats = a + b;
	return ats; // return a + b;
}

void isvestiMasyva(int mas[], int kiek)
{
	for (int i = 0; i < kiek; i++)
	{
		cout << "[ " << mas[i] << " ] ";
	}
	cout << endl;
}

int main()
{
	cout << "iveskite varda: ";
	string vardas;
	cin >> vardas;
	pasisveikinimas(vardas);
	pasisveikinimas("ieva");
	pasisveikinimas("tomas");
	pasisveikinimas("gintare");

	cout << "iveskite du skaicius: ";
	int skaicius1, skaicius2;
	cin >> skaicius1 >> skaicius2;
	cout << suma(skaicius1, skaicius2) << endl;
	cout << suma(14, 52) << endl;

	int mas1[] = { 1,4,6,3,7,6 };
	int kiek1 = 6;
	int mas2[] = { 5,4,7,5,4,7,5,1 };
	int kiek2 = 8;

	isvestiMasyva(mas1, kiek1);
	isvestiMasyva(mas2, kiek2);

	return 0;
}
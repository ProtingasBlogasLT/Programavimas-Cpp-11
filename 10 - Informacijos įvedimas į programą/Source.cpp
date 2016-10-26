#include <iostream>
using namespace std;

int main()
{
	// lietuviškos raidės konsolėje
	setlocale(LC_ALL, "Lithuania");

	int a, b;
	cout << "įveskite skaičių a: ";
	cin >> a; // įvedimas į kintamąjį
	cout << "įveskite skaičių b: ";
	cin >> b;
	cout << a << " " << b << endl;

	int c, d;
	cout << "įveskite du skaičius: ";
	cin >> c >> d; // atsirinks per tarpus ir naujas eilutes
	cout << c << " " << d << endl;

	float sk;
	cout << "iveskite skaiciu per kableli (reikia rasyti taska): ";
	cin >> sk;
	cout << sk << endl;

	return 0;
}
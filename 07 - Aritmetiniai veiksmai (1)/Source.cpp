#include <iostream>
using namespace std;

int main()
{
	int a = 10,
		b = 9;

	int suma = a + b; // 19
	int skirtumas = a - b; // 1
	int daugyba = a * b; // 90
	int dalyba = a / b; // 1

	double dalyba2 = a / b; // 1
	double dalyba3 = double(a) / b; // 1,1111111111111
	double dalyba4 = (double)a / b; // 1,1111111111111

	int neliekana = 3 / 13; // 0
	int liekana = 3 % 13; // 230...

	int f = 10;
	f = f + 10; // tas pats kaip ir f += 10;
	f -= 10;
	f *= 10;
	f /= 10;

	int indeksas = 0;
	indeksas++; // 1
	indeksas++; // 2
	indeksas--; // 1
	indeksas += 1; // 2

	++indeksas; // 2
	indeksas; // 3

	/* kai ++ arba -- gale, tuomet padaro veiksmą
	ir tik tada keičia kintamojo reikšmę
	
	kai ++ arba -- priekyje, tuomet pakeičia
	kintamojo reikšmę ir tada atlieka veiksmą
	su tuo kintamuoju */

	return 0;
}
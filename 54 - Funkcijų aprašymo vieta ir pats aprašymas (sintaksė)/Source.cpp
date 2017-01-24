#include <iostream>
using namespace std;

// tipas - void, int, double, string... bet koks kintamojo/objekto tipas
// pavadinimas - raidës, skaièiai, apatiniai brûkðneliai
// () - argumentai/parametrai
// {} - funkcijai priklausantis kodas
void funkcija()
{
	cout << "labas" << endl;
}

void funcija2(); // funckijos prototipas

int main() // pagrindinë programos funkcija
{
	funkcija();
	funkcija();

	return 0;
}

void funcija2()
{
	
}
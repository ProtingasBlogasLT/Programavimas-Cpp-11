#include <iostream>
using namespace std;

void pasisveikinimas()
{
	cout << "labas" << endl;
	cout << "programa pradeda darba" << endl;
	cout << "programa atliko: " << endl;
	cout << "to ir to univer stud: " << endl;
}

int skaicius()
{
	int a = 5;
	int b = 10;
	return a + b;
}

int suma()
{
	int a, b;
	cout << "iveskite du skaicius: ";
	cin >> a >> b;
	return a + b;
}

void atsisveikinimas()
{
	cout << "programa baige darba" << endl;
}

int main()
{
	pasisveikinimas();

	int a = skaicius();
	cout << a << endl;

	cout << skaicius() << endl;

	cout << "sumos atsakymas = " << suma() << endl;

	atsisveikinimas();

	return 0;
}
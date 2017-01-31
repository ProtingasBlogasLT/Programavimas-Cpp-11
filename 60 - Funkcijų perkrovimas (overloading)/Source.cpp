#include <iostream>
using namespace std;

int suma(int a, int b)
{
	return a + b;
}

int suma(int a, int b, int c)
{
	return a + b + c;
}

int suma(int mas[], int kiek)
{
	int suma = 0;

	for (int i = 0; i < kiek; i++)
	{
		suma += mas[i];
	}

	return suma;
}

int dalmuo(int a, int b)
{
	return a / b;
}

double dalmuo(double a, double b)
{
	return a / b;
}

int main()
{
	cout << suma(10, 20) << endl;
	cout << suma(30, 80) << endl;

	cout << suma(40, 50, 30) << endl;
	cout << suma(90, 40, 20) << endl;

	int skaiciai[] = { 1, 5, 7, 3, 5, 1 };
	int kiek = 6;

	cout << suma(skaiciai, kiek) << endl;

	cout << dalmuo(11, 3) << endl;
	cout << dalmuo(11.0, 3.0) << endl;

	return 0;
}

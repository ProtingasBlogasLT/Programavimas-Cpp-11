#include <iostream>
using namespace std;

template <typename T>
T mazesnis(T a, T b)
{
	if (a < b)
	{
		return a;
	}
	return b;

	// return (a<b)?a:b;
}

template <typename T>
double vidurkis(T masyvas[], int kiek)
{
	T suma = 0;

	for (int i = 0; i < kiek; i++)
	{
		suma += masyvas[i];
	}

	return double(suma) / kiek;
}

int main()
{
	cout << mazesnis(4, 6) << endl;
	cout << mazesnis(8.24, 6.4) << endl;
	cout << mazesnis('g', 't') << endl;
	cout << mazesnis("labas", "krabas") << endl;

	int masyvasInt[] = { 8, 4, 8, 4, 5 };
	int kiekInt = 5;
	double masyvasDouble[] = { 4.74, 85.4, 55.4 };
	int kiekDouble = 3;

	cout << vidurkis(masyvasInt, kiekInt) << endl;
	cout << vidurkis(masyvasDouble, kiekDouble) << endl;

	return 0;
}

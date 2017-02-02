#include <iostream>
using namespace std;

// template <class T> - taip pat gali bûti

template <typename TIPAS>
TIPAS suma(TIPAS a, TIPAS b)
{
	return a + b;
}

template <typename T>
T suma(T masyvas[], int kiek)
{
	T suma = 0;

	for (int i = 0; i < kiek; i++)
	{
		suma += masyvas[i];
	}

	return suma;
}

int main()
{
	cout << suma(14, 5) << endl;
	cout << suma(14.05454, 5.47487) << endl;
	cout << suma(1424445145, 545455) << endl;

	int masyvasInt[] = { 5, 8, 4, 8 };
	int kiekInt = 4;
	double masyvasDouble[] = { 54.545, 84.855, 8.44, 5.45, 84.5 };
	int kiekDouble = 5;

	cout << suma(masyvasInt, kiekInt) << endl;
	cout << suma(masyvasDouble, kiekDouble) << endl;

	cout << suma(double(5), 5.84) << endl;
	cout << suma<int>(5, 5.84) << endl;

	return 0;
}

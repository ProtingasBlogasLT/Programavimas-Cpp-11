#include <iostream>
using namespace std;

template <typename A, typename B>
double suma(A pirmas, B antras)
{
	return pirmas + antras;
}

template <typename A, typename B>
double suma(A pirmas, A antras, B trecias)
{
	return pirmas + antras + trecias;
}

template <typename A, typename B>
A palyginimas(A pirmas, B antras)
{
	return (pirmas < antras) ? pirmas : antras;
}

int main()
{
	cout << suma(5, 8.5) << endl;
	cout << suma(long(989784), 4.987) << endl;
	cout << suma(98.784, 4.987) << endl;
	cout << suma(short(1), 55555) << endl;
	cout << endl;

	cout << palyginimas(7.4, 8) << endl;
	cout << palyginimas(7, 8.2) << endl;
	cout << palyginimas(9, 2.1) << endl;
	cout << palyginimas(9.8, 2) << endl;
	cout << endl;

	cout << suma(4, 8, 9.4) << endl;
	cout << suma(95.41, 24.7, 14) << endl;

	return 0;
}

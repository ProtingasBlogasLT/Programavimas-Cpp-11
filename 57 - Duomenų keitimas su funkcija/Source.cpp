#include <iostream>
using namespace std;

void keisti(int & a)
{
	a = 30;
}

void ivedimas(int & a, int & b)
{
	cout << "iveskite du skaicius: ";
	cin >> a >> b;
}

int suma(int a, int b)
{
	return a + b;
}

int main()
{
	int a = 20, b;
	cout << a << endl;
	keisti(a);
	cout << a << endl;

	ivedimas(a, b);
	cout << suma(a, b) << endl;
	ivedimas(a, b);
	cout << suma(a, b) << endl;
	ivedimas(a, b);
	cout << suma(a, b) << endl;

	return 0;
}
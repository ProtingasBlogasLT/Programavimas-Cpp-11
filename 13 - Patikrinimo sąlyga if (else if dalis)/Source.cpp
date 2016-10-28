#include <iostream>
using namespace std;

int main()
{
	int a = 20;

	if (a > 50)
	{
		cout << "a > 5" << endl;
	}
	else if (a > 100)
	{
		cout << "a > 10" << endl;
	}
	else if (a == 20)
	{
		cout << "a = 20" << endl;
	}

	int b = 10,
		c = 20;

	if (b > c)
	{
		cout << b << endl;
	}
	else if (b < c)
	{
		cout << c << endl;
	}

	int d = 2;

	if (d == 1)
	{
		cout << 1 << endl;
	}
	else if (d == 2)
	{
		cout << 2 << endl;
	}
	else if (d == 3)
	{
		cout << 3 << endl;
	}

	int skaicius = 7;

	if (skaicius == 5)
		cout << "zodinis apibudinimas" << endl;

	return 0;
}
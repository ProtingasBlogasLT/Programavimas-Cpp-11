#include <iostream>
using namespace std;

int main()
{
	int a = 5,
		b = -3;

	if (a > 0)
	{
		if (a < 100)
		{
			cout << "viskas tvarkoj" << endl;
		}
	}

	/*
	 * IR - &&
	 * ARBA - ||
	 */

	if (a > 0 && a < 100)
	{
		cout << "viskas tvarkoje" << endl;
	}

	if (a == 2 || a == 5)
	{
		cout << "skaicius yra 2 arba 5" << endl;
	}

	if ((b > 0 && b < 100) || b == -3)
	{
		cout << "salyga teisinga" << endl;
	}

	return 0;
}
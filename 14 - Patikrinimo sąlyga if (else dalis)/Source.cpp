#include <iostream>
using namespace std;

int main()
{
	int a = 30,
		b = 30;

	if (a > b)
	{
		cout << "didesnis skaicius yra " << a << endl;
	}
	else if (a < b)
	{
		cout << "didesnis skaicius yra " << b << endl;
	}
	else
	{
		cout << "skaiciai yra lygus " << a << endl;
	}

	int c = 5;

	if (c == 2)
	{
		cout << 2 << endl;
	}
	else if (c == 4)
	{
		cout << 4 << endl;
	}
	else if (c == 6)
	{
		cout << 6 << endl;
	}
	else
	{
		cout << "skaicius nerastas" << endl;
	}

	return 0;
}
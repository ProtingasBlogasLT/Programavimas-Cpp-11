#include <iostream>
using namespace std;

int main()
{
	int a = 5, b = 3;

	if (a > b)
	{
		cout << "daugiau" << endl;
	}
	else
	{
		cout << "mažiau" << endl;
	}

	cout << (a > b ? "daugiau" : "mažiau") << endl;

	/*if (a > b)
	{
		b = a;
	}*/

	cout << a << " " << b << endl;
	b = (a > b ? a : b);
	cout << a << " " << b << endl;

	return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main()
{
	/*
	 * > daugiau
	 * < mažiau
	 * >= daugiau arba lygu
	 * <= mažiau arba lygu
	 * == lygu
	 * != nelygu
	 * 
	 */

	if (15 > 10)
	{
		cout << "15 > 10" << endl;
	}

	int a = 23, b = 17;

	if (a > b)
	{
		cout << "a daugiau uz b" << endl;
	}

	if (a > 30)
	{
		cout << "a daugiau uz 10" << endl;
	}

	string zodis1 = "zodis",
		zodis2 = "zodis",
		zodis3 = "zodis3";

	if (zodis1 == zodis2)
	{
		cout << "zodziai vienodi" << endl;
	}

	if (zodis2 < zodis3)
	{
		cout << zodis2 << endl;
	}

	if ("abc" < "def")
	{
		cout << "abc" << endl;
	}

	if ("abc" > "def")
	{
		cout << "def" << endl;
	}

	return 0;
}
#include <iostream>
using namespace std;

int main()
{
	for (int i = 0; i < 10; i++)
	{
		cout << "i: " << i << endl;

		for (int j = 0; j < 10; j++)
		{
			cout << "j: " << j << " ";
		}

		cout << endl;
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << i << j << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << i << ": ";
		for (int j = 0; j < 5; j++)
		{
			cout << i * j << " ";
		}
		cout << endl;
	}

	return 0;
}
#include <iostream>
using namespace std;

int main()
{
	int vienmatis[5] = { 14, 5, 70, 5, 3 };
	int dvimatis[3][3] = { {14, 5, 6}, {8, 5, 3}, {6, 87, 2} };

	for (int i = 0; i < 5; i++)
	{
		cout << vienmatis[i] << " ";
	}
	cout << endl << endl;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << dvimatis[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	return 0;
}
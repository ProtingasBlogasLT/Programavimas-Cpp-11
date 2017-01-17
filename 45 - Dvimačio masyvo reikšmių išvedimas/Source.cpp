#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int dvim[10][10] = {
		{14, 5, 6, 3, 9},
		{5, 9, 7, 2, 4},
		{8, 65, 2, 0, 1}
	};

	int eiluciu = 3,
		stulpeliu = 5;

	for (int i = 0; i < eiluciu; i++)
	{
		for (int j = 0; j < stulpeliu; j++)
		{
			cout << dvim[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	for (int i = 0; i < eiluciu; i++)
	{
		for (int j = 0; j < stulpeliu; j++)
		{
			cout << setw(5) << left << dvim[i][j];
		}
		cout << endl;
	}
	cout << endl;

	for (int i = 0; i < stulpeliu; i++)
	{
		cout << dvim[0][i] << " ";
	}
	cout << endl;

	cout << "1 eil 5 skaicius: " << dvim[0][4] << endl;
	cout << "2 eil 3 skaicius: " << dvim[1][2] << endl;
	cout << "2 eil 1 skaicius: " << dvim[1][0] << endl;
	cout << endl;

	cout << "virsaus kaires kampas: " << dvim[0][0] << endl;
	cout << "virsaus desines kampas: " << dvim[0][stulpeliu-1] << endl;
	cout << "apacios kaires kampas: " << dvim[eiluciu-1][0] << endl;
	cout << "apacios desines kampas: " << dvim[eiluciu-1][stulpeliu-1] << endl;
	cout << endl;

	return 0;
}
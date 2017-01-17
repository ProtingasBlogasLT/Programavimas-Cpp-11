#include <iostream>
using namespace std;

int main()
{
	int dv1[10][10] = {
		{14, 5, 6, 8},
		{5, 8, 9, 3}
	};

	int dv2[10][10];
	dv2[0][0] = 14;
	dv2[0][1] = 5;
	dv2[0][2] = 3;
	dv2[1][0] = 88;
	dv2[1][1] = 12;
	dv2[1][2] = 0;

	int dv3[10][10];
	int eilutes, stulpeliai;
	cout << "eiluciu skaicius (1-10): ";
	cin >> eilutes;
	cout << "stulpeliu skaicius (1-10): ";
	cin >> stulpeliai;
	
	for (int i = 0; i < eilutes; i++)
	{
		for (int j = 0; j < stulpeliai; j++)
		{
			cout << i + 1 << " eil. " << j + 1 << " stulp.: ";
			cin >> dv3[i][j];
		}
	}

	for (int i = 0; i < eilutes; i++)
	{
		for (int j = 0; j < stulpeliai; j++)
		{
			cout << dv3[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	return 0;
}
#include <iostream>
using namespace std;

int suma(int a, int b)
{
	return a + b;
}

void atrinkti(int masyvas[], int kiek, int & teigiamu, int & neigiamu)
{
	teigiamu = 0;
	neigiamu = 0;

	for (int i = 0; i < kiek; i++)
	{
		if (masyvas[i] > 0)
		{
			teigiamu++;
		}
		else if (masyvas[i] < 0)
		{
			neigiamu++;
		}
	}
}

int main()
{
	int mas[] = { 5,-4,5,8,-4,-6,-5,4,-8 };
	int kiek = 9;
	int teigiamu, neigiamu;
	atrinkti(mas, kiek, teigiamu, neigiamu);
	cout << "teigiamu: " << teigiamu << endl;
	cout << "neigiamu: " << neigiamu << endl;

	return 0;
}

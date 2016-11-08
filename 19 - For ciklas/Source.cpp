#include <iostream>
using namespace std;

int main()
{
	cout << "pirmas ciklas" << endl;
	// for (nuo ko pradeda; salyga; iteracija kievieno ciklo vykdymo metu)
	for (int i = 0; i < 10; i++)
	{
		cout << i << " " << i + 1 << endl;
	}

	cout << "antras ciklas" << endl;
	int i;
	for (i = 1; i <= 10; i++)
	{
		cout << i << endl;
	}

	cout << "trecias ciklas" << endl;
	for (int i = 0; i < 50; i+=5)
	{
		cout << i << endl;
	}

	cout << "ketvirtas ciklas" << endl;
	for (int i = 10; i > 0; i--)
	{
		cout << i << endl;
	}

	return 0;
}
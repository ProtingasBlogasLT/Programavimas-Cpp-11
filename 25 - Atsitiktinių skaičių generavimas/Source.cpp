#include <iostream>
#include <ctime> // time.h
using namespace std;

int main()
{
	int skaicius, skaicius2;
	int min = 2,
		max = 5 - min;
	srand(time(NULL));

	for (int i = 0; i < 10; i++)
	{
		skaicius = rand() % 50; // [0-50)
		skaicius2 = rand() % max + min; // [2+5)
		cout << skaicius << " " << skaicius2 << endl;
	}

	return 0;
}
#include <iostream>
#include <string>
using namespace std;

void funkcija(int a, int b = 0, int c = 0)
{
	cout << a << " " << b << " " << c << endl;
}

void funkcija2(string vardas = "", string pavarde = "")
{
	cout << vardas << " " << pavarde << endl;
}

int main()
{
	funkcija(5, 2, 3);
	funkcija(4, 3);
	funkcija(8);
	funkcija2();
	funkcija2("ieva");
	funkcija2("asf", "asfgfsd");

	return 0;
}

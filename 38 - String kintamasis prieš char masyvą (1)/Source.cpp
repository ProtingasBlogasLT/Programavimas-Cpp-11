#include <iostream>
#include <string>
using namespace std;

int main()
{
	// DUOMENYS

	char charas[50] = { 'y', 'o', 'p', 'b', 'h' };
	char charas2[50] = "dfbhj";
	string str = "sjbdgh";

	// IVEDIMAS

	char charas3[50];
	string str2,
		str3;

	charas3[0] = 'h';
	charas3[1] = 'r';
	for (int i = 2; i < 3; i++)
	{
		cout << "iveskite raide: ";
		cin >> charas3[i];
	}

	str2 = "sjdbgdh";

	cout << "iveskite zodi:";
	cin >> str3;

	return 0;
}
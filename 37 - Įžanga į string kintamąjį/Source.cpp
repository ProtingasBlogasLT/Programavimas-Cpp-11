#include <iostream>
#include <string>
using namespace std;

int main()
{
	string simboliai = "sdg4d5 4df5 235@#$ %^&*)";
	cout << simboliai << endl;

	string vardas, pavarde;
	cout << "iveskite varda ir pavarde: ";
	cin >> vardas >> pavarde;
	cout << vardas << endl;
	cout << pavarde << endl;

	string sakinys;
	cout << "iveskite norima sakini: ";
	//cin >> ws; // white space // pirmas budas
	cin.ignore(); // antras budas
	getline(cin, sakinys);
	cout << sakinys << endl;

	return 0;
}
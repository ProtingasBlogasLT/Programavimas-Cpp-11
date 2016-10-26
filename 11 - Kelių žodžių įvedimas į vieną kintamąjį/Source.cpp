#include <iostream>
#include <string>
using namespace std;

int main()
{
	string vardas_pavarde;
	cout << "iveskite varda ir pavarde: ";
	getline(cin, vardas_pavarde);
	cout << vardas_pavarde << endl;
	/*
	jeigu neveiks antras ivedimas, ismeginti:
	cin.ignore();
	cin.clear();
	*/
	string sakinys;
	cout << "iveskite sakini: ";
	getline(cin, sakinys);
	cout << sakinys << endl;

	return 0;
}
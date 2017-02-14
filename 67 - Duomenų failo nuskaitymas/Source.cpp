#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	string a;
	int b, c;
	double d, e;
	string f;

	ifstream fin; // objektas, galite ásivaizduoti kaip mandresná kintamàjá
	fin.open("failas.txt"); // atidaromas failas skaitymui
	//ifstream fin("failas.txt"); // sukuriamas objektas ir atidaromas failas per vienà eilutæ
	
	fin >> a >> b >> c;
	fin >> d >> e;
	fin >> ws; // white space
	getline(fin, f);

	fin.close(); // uþdaromas failas

	cout << a << " " << b << " " << c << endl;
	cout << d << " " << e << endl;
	cout << f << endl;

	return 0;
}

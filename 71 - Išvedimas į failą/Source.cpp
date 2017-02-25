#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	//ofstream fout;
	//fout.open("failas.txt");

	int skaiciai[] = { 5, 4, 5, 4, 7, 5, 8 };

	ofstream fout("failas.txt");

	fout << "mano tekstas á failà" << endl;
	fout << "dar viena eilute" << endl;

	for (int i = 0; i < 7; i++)
	{
		fout << "[" << skaiciai[i] << "] ";
	}
	fout << endl;

	fout.close();

	fout.open("failas.txt", ios::app);

	fout << "failo papildymas" << endl;

	fout.close();

	system("start failas.txt");

	return 0;
}

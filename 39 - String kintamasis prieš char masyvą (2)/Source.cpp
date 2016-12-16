#include <iostream>
#include <string>
using namespace std;

int main()
{
	// ISVEDIMAS

	char ch[50] = "sdhdg";
	int chkiek = 5;
	string str = "jsdbdg";

	cout << ch << endl;
	cout << str << endl;

	for (int i = 0; i < chkiek; i++)
	{
		cout << "[" << ch[i] << "]";
	}
	cout << endl;

	for (int i = 0; i < str.size(); i++)
	{
		cout << "[" << str[i] << "]";
	}
	cout << endl;

	// KONKRECIOS RAIDES PASIEKIMAS

	cout << ch[0] << endl;
	cout << ch[chkiek - 1] << endl;
	cout << str[0] << endl;
	cout << str.at(0) << endl;
	cout << str[str.size() - 1] << endl;
	cout << str.at(str.size() - 1) << endl;

	return 0;
}
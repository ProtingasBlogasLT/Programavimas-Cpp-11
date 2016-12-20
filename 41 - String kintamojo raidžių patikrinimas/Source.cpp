#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
	string str = "Ght 44 asjSrg jds";

	for (int i = 0; i < str.size(); i++)
	{
		if (isupper(str[i]))
		{
			cout << str[i] << " yra didzioji raide" << endl;
		}

		if (islower(str[i]))
		{
			cout << str[i] << " yra mazoji raide" << endl;
		}

		if (isblank(str[i]))
		{
			cout << str[i] << " yra tarpas" << endl;
		}

		if (isdigit(str[i]))
		{
			cout << str[i] << " yra skaicius" << endl;
		}
	}

	return 0;
}
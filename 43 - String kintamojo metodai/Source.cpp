#include <iostream>
#include <string>
using namespace std;

int main()
{
	// google: c++ string
	// cplusplus.com/reference/string/string


	string str = "jasjafnk";

	cout << str << endl;
	cout << "str dydis: " << str.size() << endl;
	cout << "max str dydis: " << str.max_size() << endl;

	if (str.empty())
	{
		cout << "tuscias" << endl;
	}
	else
	{
		cout << "ne tuscias" << endl;
	}

	// pirmas budas isvalyti
	//str = "";

	// antras budas isvalyti
	str.clear();

	cout << "naujas str dydis: " << str.size() << endl;

	if (str.empty())
	{
		cout << "tuscias" << endl;
	}
	else
	{
		cout << "ne tuscias" << endl;
	}

	str += "aaaaa";
	str.append("bbbbbb");

	cout << str << endl;

	cout << "penkta raide: " << str[5] << endl;
	cout << "penkta raide: " << str.at(5) << endl;

	cout << "pirma raide: " << str.front() << endl;
	cout << "paskutine raide: " << str.back() << endl;

	str.push_back('+');
	cout << str << endl;

	return 0;
}
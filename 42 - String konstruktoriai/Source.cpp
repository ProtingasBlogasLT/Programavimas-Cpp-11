#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1 = "ajfdsbg";
	cout << "s1: " << s1 << endl;
	string s2("jsdj");
	cout << "s2: " << s2 << endl;
	string s3 = s1;
	cout << "s3: " << s3 << endl;
	string s4(s2);
	cout << "s4: " << s4 << endl;
	string s5(s1, 2, 2);
	cout << "s5: " << s5 << endl;
	string s6(10, '-');
	cout << "s6: " << s6 << endl;
	string s7(10, 42); // ascii kodas
	cout << "s7: " << s7 << endl;
	string s8(s1.begin(), s1.begin() + 3);
	cout << "s8: " << s8 << endl;

	return 0;
}
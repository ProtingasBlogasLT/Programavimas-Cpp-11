#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> a = { 85, 36, 14, 71 };
	cout << a.size() << endl;

	vector<int> b;
	b.push_back(55);
	b.push_back(45);
	b.push_back(32);
	b.push_back(91);
	b.push_back(10);
	cout << b.size() << endl;

	//a[4] = 52; // blogas bûdas
	//cout << a.size() << endl;

	a.insert(a.begin(), 2); // áterps prieð nurodytà vietà

	for (int i = 0; i < a.size(); i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	a.insert(a.begin() + 2, 100); // áterps prieð nurodytà vietà

	for (int i = 0; i < a.size(); i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	int skaicius;
	cout << "skaièius kà ádëti: ";
	cin >> skaicius;
	b.push_back(skaicius);

	for (int i = 0; i < b.size(); i++)
	{
		cout << b[i] << " ";
	}
	cout << endl;

	return 0;
}
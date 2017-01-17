#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void elementas(int i)
{
	cout << i << " ";
}

int main()
{
	vector<int> a = { 95, 32, 72, 48, 34, 76 };

	for (int i = 0; i < a.size(); i++)
	{
		// pirmas bûdas
		//cout << a.at(i) << " ";
		// antras bûdas
		cout << a[i] << " ";
	}
	cout << endl;

	cout << a[2] << endl;
	cout << a.at(3) << endl;

	cout << "for each: ";
	for_each(a.begin(), a.end(), elementas);

	return 0;
}
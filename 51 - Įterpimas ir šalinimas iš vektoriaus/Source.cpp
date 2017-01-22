#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> a = { 74, 25, 34, 52 };

	for (int i = 0; i < a.size(); i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	// insert(kelinta vieta nuo pradþios - áterpia PRIEÐ, kà áterpti)
	// vektoriausPav.insert(vektoriausPav.begin() + vieta, reikðmë)
	a.insert(a.begin(), 100);

	for (int i = 0; i < a.size(); i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	a.insert(a.begin() + 5, 100);
	a.insert(a.begin() + 3, 100);

	for (int i = 0; i < a.size(); i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	// nurodyta vietà kurià ðalinate, ðalint TÀ nurodytà vietà
	a.erase(a.begin() + 2);

	for (int i = 0; i < a.size(); i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	return 0;
}
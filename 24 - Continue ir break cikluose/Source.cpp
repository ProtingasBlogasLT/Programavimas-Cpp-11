#include <iostream>
using namespace std;

int main()
{
	int i = 0;
	while (true)
	{
		i++;
		if (i % 2 == 0)
		{
			continue;
		}
		if (i == 11)
		{
			break;
		}
		cout << i << endl;
	}

	cout << "kazkoks tekstas" << endl;

	return 0;
}
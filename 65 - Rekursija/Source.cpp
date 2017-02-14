#include <iostream>
using namespace std;

/*void tekstas()
{
	cout << "kazkas ";
	tekstas();
}*/

// faktorialas 5! = 5*4*3*2*1
int faktorialas(int x)
{
	if (x == 1)
	{
		return x;
	}
	else
	{
		return x * faktorialas(x - 1);
	}
}

/*
(5)
((5) * 4)
(((5) * 4) * 3)
((((5) * 4) * 3) * 2)
(((((5) * 4) * 3) * 2) * 1)

-
--
---
----
-----
----
---
--
-
*/

int main()
{
	//tekstas();
	int fakt = faktorialas(5);
	cout << fakt << endl;

	return 0;
}

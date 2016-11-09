#include <iostream>
using namespace std;

int main()
{
	// reikšmės atnaujinimas
	int skaicius = 10;
	skaicius = 5;

	// tų pačių tipų kintamųjų kūrimas per kablelį
	int a, b, c; // int a; int b; int c;
	int d = 14,
		e = 10;
	
	// reikšmės kopijavimas į kitą kintamąjį 
	a = d;
	b = a;
	c = e;

	// dvigubas reikšmės priskyrimas
	int f, l;
	f = l = 8; // f = 8; l = 8;

	/*
	galimi pavadinimai:
	skaicius1
	skaicius
	Skaicius
	skaicius_1
	zodis_zodis
	_zodis

	negalimi pavadinimai:
	8_bsfbsd
	as@%j&&jsf##sjfj
	*/

	return 0;
}
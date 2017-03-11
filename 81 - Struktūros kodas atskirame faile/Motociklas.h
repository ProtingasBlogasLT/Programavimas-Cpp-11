#pragma once
#include <string>
#include <iostream>
using namespace std;

struct Motociklas
{
	// DUOMENYS

	string Gamintojas;
	string Modelis;
	int DarbinisTuris; // cc
	string Tipas;
	int MaxGreitis;

	// SPECIALUS METODAS - KONSTRUKTORIUS

	Motociklas(string Gamintojas, string modelis,
		int darbinisTuris, string tipas, int maxgreitis);

	// METODAI / FUNKCIJOS

	void Isvedimas();
	bool ArAsGalingesnis(int darbinisTuris);
};
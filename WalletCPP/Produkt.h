#pragma once
#include "Aktywa.h"
class Produkt :
	public Aktywa
{
	std::string nazwa;
	int ilosc;
public:
	void aktualizuj();
	Produkt();
	Produkt(std::string, int, double);
	~Produkt();
	double getWartosc();
	std::string szczegoly();
};


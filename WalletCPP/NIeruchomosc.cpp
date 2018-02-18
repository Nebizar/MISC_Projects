#include <iostream>
#include <string>
#include "NIeruchomosc.h"

void Nieruchomosc::aktualizuj()
{
	std::string r, a;
	std::cout << "Podaj rodzaj: \n";
	std::cin >> r;
	rodzaj = r;
	std::cout << "Podaj adres: \n";
	std::cin >> a;
	adres = a;
	double wart;
	std::cout << "Podaj wartosc: \n";
	std::cin >> wart;
	zmiana(wart);
}

Nieruchomosc::Nieruchomosc()
{
	aktualizuj();
}

Nieruchomosc::Nieruchomosc(std::string s1, std::string s2, double w)
{
	this->rodzaj = s1;
	this->adres = s2;
	zmiana(w);
}


Nieruchomosc::~Nieruchomosc()
{
}

std::string Nieruchomosc::szczegoly()
{
	return rodzaj + "\t" + adres + "\t" + std::to_string(getWart()) + "\n";
	//std::cout << rodzaj << "\t" << adres << "\t" << getWart() << "\n";
}


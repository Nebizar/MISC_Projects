#include "Lokata.h"

void Lokata::aktualizuj()
{
	double wart;
	std::cout << "Podaj nazwe lokaty: \n";
	std::cin >> this->nazwa;
	std::cout << "Podaj oprocentowanie: \n";
	std::cin >> this->oprocentowanie;
	std::cout << "Podaj kwote na lokacie: \n";
	std::cin >> wart;
	zmiana(wart);
}


Lokata::Lokata()
{
	aktualizuj();
}


Lokata::~Lokata()
{
}

std::string Lokata::szczegoly()
{
	return nazwa + "\t" + std::to_string(oprocentowanie) + "\t" + std::to_string(getWart()) + "\n";
	//std::cout << nazwa << "\t" << oprocentowanie << "\t" << getWart() << "\n";
}

Lokata::Lokata(std::string s, double o, double w)
{
	this->nazwa = s;
	this->oprocentowanie = o;
	zmiana(w);
}
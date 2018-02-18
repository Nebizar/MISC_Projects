#include "Produkt.h"

void Produkt::aktualizuj()
{
	double wart;
	std::cout << "Podaj nazwe: \n";
	std::cin >> this->nazwa;
	std::cout << "Podaj ilosc: \n";
	std::cin >> this->ilosc;
	std::cout << "Podaj wartosc: \n";
	std::cin >> wart;
	zmiana(wart);
}


Produkt::Produkt()
{
	aktualizuj();
}

Produkt::Produkt(std::string s, int i, double d)
{
	this->nazwa = s;
	this->ilosc = i;
	zmiana(d);
}


Produkt::~Produkt()
{
}

double Produkt::getWartosc()
{
	return ilosc*getWart();
}

std::string Produkt::szczegoly()
{
	return nazwa + "\t" + std::to_string(ilosc) + std::to_string(getWart()) + "\n";
	//std::cout << nazwa << "\t" << ilosc << "\t" << getWart() << "\n";
}

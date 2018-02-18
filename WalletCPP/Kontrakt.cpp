#include "Kontrakt.h"

void Kontrakt::aktualizuj()
{
	double wart;
	std::cout << "Podaj kontrahenta: \n";
	std::cin >> this->kontr;
	std::cout << "Podaj wartosc: \n";
	std::cin >> wart;
	zmiana(wart);
}

Kontrakt::Kontrakt()
{
	aktualizuj();
}

Kontrakt::Kontrakt(std::string s, double wart)
{
	this->kontr = s;
	zmiana(wart);
}


Kontrakt::~Kontrakt()
{
}

std::string Kontrakt::szczegoly()
{
	return kontr + "\t" + std::to_string(getWart()) + "\n";
	//std::cout << kontr << "\t" << getWart() << "\n";
}

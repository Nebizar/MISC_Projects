#include "JednostkaU.h"

void JednostkaU::aktualizuj()
{
	std::string nF;
	int iloscN;
	double wart;
	std::cout << "Podaj nowa nazwe funduszu: \n";
	std::cin >> nF;
	this->fundusz = nF;
	std::cout << "Podaj nowa ilosc jednostek uczestnictwa: \n";
	std::cin >> iloscN;
	if (iloscN >= 0)
		this->ilosc = iloscN;
	else
	{
		std::cout << "Ilosc nie moze byc ujemna!!!\n";
	}
	std::cout << "Podaj wartosc jednostki: \n";
	std::cin >> wart;
	zmiana(wart);
}

JednostkaU::JednostkaU()
{
	aktualizuj();
}

JednostkaU::JednostkaU(std::string f, int ile, double w)
{
	this->fundusz = f;
	this->ilosc = ile;
	zmiana(w);
}

JednostkaU::~JednostkaU()
{
}

std::string JednostkaU::szczegoly()
{
	return fundusz + "\t" + std::to_string(ilosc) + "\t" + std::to_string(getWart()) + "\n";
	//std::cout << fundusz << "\t" << ilosc<< "\t" << getWart() << "\n";
}

std::string JednostkaU::getFundusz()
{
	return fundusz;
}

int JednostkaU::getIlosc()
{
	return ilosc;
}

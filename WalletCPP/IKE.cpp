#include "IKE.h"

void IKE::aktualizuj()
{
	double wart;
	std::cout << "Podaj produkt lub fundusz: \n";
	std::cin >> this->prfu;
	std::cout << "Podaj wartoœæ IKE: \n";
	std::cin >> wart;
	zmiana(wart);
}

IKE::IKE()
{
	aktualizuj();
}

IKE::IKE(std::string s, double w)
{
	this->prfu = s;
	zmiana(w);
}


IKE::~IKE()
{
}

std::string IKE::szczegoly()
{
	return prfu + "\t" + std::to_string(getWart()) + "\n";
	//std::cout << prfu << "\t" << getWart() << "\n";
}
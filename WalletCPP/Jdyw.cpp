#include "Jdyw.h"



Jdyw::Jdyw()
{
	//JednostkaU::JednostkaU();
	std::cout << "Podaj dywidente: \n";
	std::cin >> this->dyw;
}

Jdyw::Jdyw(std::string f, int ile, double wart, double d) : 
	JednostkaU(f,ile,wart)
{
	//JednostkaU::JednostkaU(f, ile, wart);
	this->dyw = d;
}


Jdyw::~Jdyw()
{
}

void Jdyw::aktualizuj()
{
	JednostkaU::aktualizuj();
	std::cout << "Podaj dywidente: \n";
	std::cin >> this->dyw;

}

std::string Jdyw::szczegoly()
{
	return getFundusz() + "\t" + std::to_string(getIlosc()) + "\t" + std::to_string(getWart()) + "\t" + std::to_string(dyw) + "\n";
	//std::cout << getFundusz() << "\t" << getIlosc() << "\t" << getWart() << "\t" << dyw << "\n";
}
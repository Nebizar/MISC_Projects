#pragma once
#include "Aktywa.h"
class JednostkaU :
	public Aktywa
{
	std::string fundusz;
	int ilosc;

public:
	JednostkaU();
	JednostkaU(std::string, int, double);
	~JednostkaU();
	void aktualizuj();
	std::string szczegoly();
	std::string getFundusz();
	int getIlosc();
};


#pragma once
#include "JednostkaU.h"
class Jdyw :
	public JednostkaU
{
	double dyw;
public:
	Jdyw();
	Jdyw(std::string, int, double, double);
	~Jdyw();
	void aktualizuj();
	std::string szczegoly();
};


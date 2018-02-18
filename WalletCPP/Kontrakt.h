#pragma once
#include "Aktywa.h"
class Kontrakt :
	public Aktywa
{
	std::string kontr;
public:
	void aktualizuj();
	Kontrakt();
	Kontrakt(std::string, double);
	~Kontrakt();
	std::string szczegoly();
};


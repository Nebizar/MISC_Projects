#pragma once
#include "Aktywa.h"
class Lokata :
	public Aktywa
{
	std::string nazwa;
	double oprocentowanie;
	
public:
	void aktualizuj();
	Lokata();
	Lokata(std::string, double, double);
	~Lokata();
	std::string szczegoly();
};


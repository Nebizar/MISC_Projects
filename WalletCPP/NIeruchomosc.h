#pragma once
#include<iostream>
#include<string>
#include "Aktywa.h"

class Nieruchomosc :
	public Aktywa
{
	std::string rodzaj;
	std::string adres;

public:
	Nieruchomosc();
	Nieruchomosc(std::string, std::string, double);
	~Nieruchomosc();
	void aktualizuj();
	std::string szczegoly();
};


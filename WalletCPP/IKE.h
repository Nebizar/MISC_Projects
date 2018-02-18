#pragma once
#include "Aktywa.h"
class IKE :
	public Aktywa
{
	std::string prfu;
	//std::string fundusz;
public:
	IKE();
	IKE(std::string, double);
	~IKE();
	void aktualizuj();
	std::string szczegoly();
};


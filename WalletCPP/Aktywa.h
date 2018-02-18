#pragma once
#include<string>
#include<iostream>

class Aktywa
{
private:
	double wartosc;
public:
	Aktywa();
	~Aktywa();
	void zmiana(double);
	double getWart();
	virtual void aktualizuj() = 0;
	virtual std::string szczegoly() = 0;
};


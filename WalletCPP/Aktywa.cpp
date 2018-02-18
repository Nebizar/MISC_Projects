
#include<string>
#include<iostream>
#include "Aktywa.h"



Aktywa::Aktywa()
{
}


Aktywa::~Aktywa()
{
}

void Aktywa::zmiana(double wart)
{
	this->wartosc = wart;
}

double Aktywa::getWart()
{
	return wartosc;
}

#pragma once
#include "Lokata.h"
#include "JednostkaU.h"
#include "Jdyw.h"
#include "Kontrakt.h"
#include "NIeruchomosc.h"
#include "Produkt.h"
#include "IKE.h"
#include "Portfel.hpp"
#include <vector>
#include <conio.h>
#include <iostream>
#include <fstream>
#include <sstream>

class menu
{
	//wektory pomocnicze
	std::vector<Lokata> listaLokat;
	std::vector<JednostkaU> listajU;
	std::vector<Jdyw> listaJdyw;
	std::vector<Kontrakt> listaKontraktow;
	std::vector<Produkt> listaProduktow;
	std::vector<Nieruchomosc> listaNieruchomosci;
	std::vector<IKE> listaIKE;
	//portfele Aktyw
	Portfel<Lokata> portfelLokat;
	Portfel<JednostkaU> portfeljU;
	Portfel<Jdyw> portfelJdyw;
	Portfel<Kontrakt> portfelKontraktow;
	Portfel<Produkt> portfelProduktow;
	Portfel<Nieruchomosc> portfelNieruchomosci;
	Portfel<IKE> portfelIKE;

	std::string pomMenu;
	bool loop;
public:
	menu();
	~menu();
	void glowne();
	bool ifLoop();
	void zapisz();
	void wczytaj();
};



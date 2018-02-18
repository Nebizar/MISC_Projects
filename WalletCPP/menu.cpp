#include "menu.h"
#include <fstream>
/*#include "Lokata.h"
#include "JednostkaU.h"
#include "Jdyw.h"
#include "Kontrakt.h"
#include "NIeruchomosc.h"
#include "Produkt.h"
#include "IKE.h"*/
//#include "Portfel.hpp"


menu::menu()
{
	/*Portfel<Lokata>portfelLokat();
	Portfel<JednostkaU> portfeljU();
	Portfel<Jdyw> portfelJdyw();
	Portfel<Kontrakt> portfelKontraktow();
	Portfel<Produkt> portfelProduktow();
	Portfel<Nieruchomosc> portfelNieruchomosci();
	Portfel<IKE> portfelIKE();*/
	loop = true;
	pomMenu = "1.Lokata \n 2.Jednostka uczestnictwa \n 3.J.U. z dywidenta \n 4.Kontrakt \n 5.Produkt \n 6.Nieruchomosc \n 7.IKE \n";
}


menu::~menu()
{
}

void menu::glowne()
{
	int choice;
	int choice2;
	system("CLS");
	std::cout << "------PORTFEL-----\n";
	std::cout << "1. Dodaj aktywo.\n";
	std::cout << "2. Usun aktywo.\n";
	std::cout << "3. Edytuj aktywo.\n";
	std::cout << "4. Stan portfela\n";
	std::cout << "5. Wyjdz.\n";
	std::cin >> choice;
	switch (choice)
	{
	case 1:
	{
		//Start
		system("CLS");
		std::cout << pomMenu;
		std::cin >> choice2;
		switch (choice2)
		{
		case 1: {
			Lokata l1;
			portfelLokat += l1;
			break;
		}
		case 2: {
			JednostkaU j1;
			portfeljU += j1;
			break;
		}
		case 3: {
			Jdyw j2;
			portfelJdyw += j2;
			break;
		}
		case 4: {
			Kontrakt k1;
			portfelKontraktow += k1;
			break;

		}
		case 5: {
			Produkt p1;
			portfelProduktow += p1;
			break;
		}
		case 6: {
			Nieruchomosc n1;
			portfelNieruchomosci += n1;
			break;
		}
		case 7: {
			IKE i1;
			portfelIKE += i1;
			break;
		}
		default:
			std::cout << "BRAK TAKIEJ MOZLIWOSCI!!\n";
			break;
		}
		choice2 = NULL;
		zapisz();
		break;
		//stop
	}
	case 2:
	{
		//Start
		system("CLS");
		int index;
		std::cout << pomMenu;
		std::cin >> choice2;
		switch (choice2)
		{
		case 1: {
			std::cout << "Ktory obiekt usunac??\n";
			std::cin >> index;
			if (portfelLokat.getSize()>index && index >= 0)
				portfelLokat -= index;
			break;
		}
		case 2: {
			std::cout << "Ktory obiekt usunac??\n";
			std::cin >> index;
			if (portfeljU.getSize()>index && index >= 0)
				portfeljU -= index;
			break;
		}
		case 3: {
			std::cout << "Ktory obiekt usunac??\n";
			std::cin >> index;
			if (portfelJdyw.getSize()>index && index >= 0)
				portfelJdyw -= index;
			break;
		}
		case 4: {
			std::cout << "Ktory obiekt usunac??\n";
			std::cin >> index;
			if (portfelKontraktow.getSize()>index && index >= 0)
				portfelKontraktow -= index;;
			break;

		}
		case 5: {
			std::cout << "Ktory obiekt usunac??\n";
			std::cin >> index;
			if (portfelProduktow.getSize()>index && index >= 0)
				portfelProduktow -= index;
			break;
		}
		case 6: {
			std::cout << "Ktory obiekt usunac??\n";
			std::cin >> index;
			if (portfelNieruchomosci.getSize()>index && index >= 0)
				portfelNieruchomosci -= index;
			break;
		}
		case 7: {
			std::cout << "Ktory obiekt usunac??\n";
			std::cin >> index;
			if (portfelIKE.getSize()>index && index >= 0)
				portfelIKE -= index;
			break;
		}
		default:
			std::cout << "BRAK TAKIEJ MOZLIWOSCI!!\n";
			break;
		}
		choice2 = NULL;
		zapisz();
		break;
		//stop
	}
	case 3:
	{
		//Start
		system("CLS");
		int index;
		std::cout << pomMenu;
		std::cin >> choice2;
		switch (choice2)
		{
		case 1: {
			std::cout << "Ktory obiekt zmienic??\n";
			std::cin >> index;
			if (portfelLokat.getSize()>index && index >= 0)
				portfelLokat -= index;
			Lokata l1;
			portfelLokat += l1;
			break;
		}
		case 2: {
			std::cout << "Ktory obiekt usunac??\n";
			std::cin >> index;
			if (portfeljU.getSize()>index && index >= 0)
				portfeljU -= index;
			JednostkaU j1;
			portfeljU += j1;
			break;
		}
		case 3: {
			std::cout << "Ktory obiekt usunac??\n";
			std::cin >> index;
			if (portfelJdyw.getSize()>index && index >= 0)
				portfelJdyw -= index;
			Jdyw j2;
			portfelJdyw += j2;
			break;
		}
		case 4: {
			std::cout << "Ktory obiekt usunac??\n";
			std::cin >> index;
			if (portfelKontraktow.getSize()>index && index >= 0)
				portfelKontraktow -= index;
			Kontrakt k1;
			portfelKontraktow += k1;
			break;

		}
		case 5: {
			std::cout << "Ktory obiekt usunac??\n";
			std::cin >> index;
			if (portfelProduktow.getSize()>index && index >= 0)
				portfelProduktow -= index;
			Produkt p1;
			portfelProduktow += p1;
			break;
		}
		case 6: {
			std::cout << "Ktory obiekt usunac??\n";
			std::cin >> index;
			if (portfelNieruchomosci.getSize()>index && index >= 0)
				portfelNieruchomosci -= index;
			Nieruchomosc n1;
			portfelNieruchomosci += n1;
			break;
		}
		case 7: {
			std::cout << "Ktory obiekt usunac??\n";
			std::cin >> index;
			if (portfelIKE.getSize()>index && index >= 0)
				portfelIKE -= index;
			IKE i1;
			portfelIKE += i1;
			break;
		}
		default:
			std::cout << "BRAK TAKIEJ MOZLIWOSCI!!\n";
			break;
		}
		choice2 = NULL;
		//stop
		zapisz();
		break;
	}
	case 4:
	{
		double wartosc = 0;
		listaLokat = portfelLokat.getV();
		listajU = portfeljU.getV();
		listaJdyw = portfelJdyw.getV();
		listaKontraktow = portfelKontraktow.getV();
		listaProduktow = portfelProduktow.getV();
		listaNieruchomosci = portfelNieruchomosci.getV();
		listaIKE = portfelIKE.getV();
		std::cout << "LOKATY: \n";
		for (int i = 0; i < listaLokat.size(); i++)
		{
			std::cout<<listaLokat[i].szczegoly();
			wartosc = wartosc + listaLokat[i].getWart();
		}
		std::cout << "JEDNOSTKI UCZESTNICTWA: \n";
		for (int i = 0; i < listajU.size(); i++)
		{
			std::cout<<listajU[i].szczegoly();
			wartosc = wartosc + listajU[i].getWart();
		}
		std::cout << "J.U. Z DYWIDENDA: \n";
		for (int i = 0; i < listaJdyw.size(); i++)
		{
			std::cout<<listaJdyw[i].szczegoly();
			wartosc = wartosc + listaJdyw[i].getWart();
		}
		std::cout << "KONTRAKTY: \n";
		for (int i = 0; i < listaKontraktow.size(); i++)
		{
			std::cout<<listaKontraktow[i].szczegoly();
			wartosc = wartosc + listaKontraktow[i].getWart();
		}
		std::cout << "PRODUKTY: \n";
		for (int i = 0; i < listaProduktow.size(); i++)
		{
			std::cout<<listaProduktow[i].szczegoly();
			wartosc = wartosc + listaProduktow[i].getWart();
		}
		std::cout << "NIERUCHOMOSCI: \n";
		for (int i = 0; i < listaNieruchomosci.size(); i++)
		{
			std::cout<<listaNieruchomosci[i].szczegoly();
			wartosc = wartosc + listaNieruchomosci[i].getWart();
		}
		std::cout << "IKE: \n";
		for (int i = 0; i < listaIKE.size(); i++)
		{
			std::cout<<listaIKE[i].szczegoly();
			wartosc = wartosc + listaIKE[i].getWart();
		}
		std::cout << "\n WARTOSC AKTYWOW: " << wartosc << "\n";
		_getch();
		break;
	}
	case 5:
	{
		char check;
		std::cout << "Czy na pewno chcesz wyjsc ?? T/N\n";
		std::cin >> check;
		if (check == 'T' || check == 't') loop = false;
		break;
	}
	default:
		std::cout << "BRAK TAKIEJ MOZLIWOSCI!!\n";
		break;
	}

}

bool menu::ifLoop()
{
	return loop;
}

void menu::zapisz()
{
	std::ofstream plik;
	plik.open("data.txt", std::ios::out);
	listaLokat = portfelLokat.getV();
	listajU = portfeljU.getV();
	listaJdyw = portfelJdyw.getV();
	listaKontraktow = portfelKontraktow.getV();
	listaProduktow = portfelProduktow.getV();
	listaNieruchomosci = portfelNieruchomosci.getV();
	listaIKE = portfelIKE.getV();
	plik << listaLokat.size() << "\n";
	for (int i = 0; i < listaLokat.size(); i++)
	{
		plik << listaLokat[i].szczegoly();
	}
	plik << listajU.size() << "\n";
	for (int i = 0; i < listajU.size(); i++)
	{
		plik << listajU[i].szczegoly();
	}
	plik << listaJdyw.size() << "\n";
	for (int i = 0; i < listaJdyw.size(); i++)
	{
		plik << listaJdyw[i].szczegoly();
	}
	plik << listaKontraktow.size() << "\n";
	for (int i = 0; i < listaKontraktow.size(); i++)
	{
		plik << listaKontraktow[i].szczegoly();
	}
	plik << listaProduktow.size() << "\n";
	for (int i = 0; i < listaProduktow.size(); i++)
	{
		plik << listaProduktow[i].szczegoly();
	}
	plik << listaNieruchomosci.size() << "\n";
	for (int i = 0; i < listaNieruchomosci.size(); i++)
	{
		plik << listaNieruchomosci[i].szczegoly();
	}
	plik << listaIKE.size() << "\n";
	for (int i = 0; i < listaIKE.size(); i++)
	{
		plik << listaIKE[i].szczegoly();
	}
	plik.close();
}

void menu::wczytaj()
{
	//_getch();
	int count;
	std::string line;
	std::ifstream plik;
	plik.open("data.txt", std::ios::in);
	std::string nazwa;
	std::string pom;
	double wart;
	char test;
	double pomW;
	int pomI;
	plik >> count;
	plik.ignore(128, '\n');
	//std::cout << count;
	//_getch();
	for (int i = 0; i < count; i++)
	{
		getline(plik, line);
		std::stringstream ss(line);
		ss >> nazwa >> pomW >> wart;
		std::cout << nazwa << pomW << wart;
		_getch();
		Lokata lok(nazwa, pomW, wart);
		listaLokat.push_back(lok);
	}
	plik >> count;
	plik.ignore(128, '\n');
	for (int i = 0; i < count; i++)
	{
		getline(plik, line);
		std::stringstream ss(line);
		ss >> nazwa >> pomI >> wart;
		JednostkaU j(nazwa, pomI, wart);
		listajU.push_back(j);
	}
	plik >> count;
	plik.ignore(128, '\n');
	for (int i = 0; i < count; i++)
	{
		getline(plik, line);
		std::stringstream ss(line);
		ss >> nazwa >> pomI >> wart >> pomW;
		Jdyw jd(nazwa, pomW, wart, pomW);
		listaJdyw.push_back(jd);
	}
	plik >> count;
	plik.ignore(128, '\n');
	for (int i = 0; i < count; i++)
	{
		getline(plik, line);
		std::stringstream ss(line);
		ss >> nazwa >>  wart;
		Kontrakt k(nazwa, wart);
		listaKontraktow.push_back(k);
	}
	plik >> count;
	plik.ignore(128, '\n');
	for (int i = 0; i < count; i++)
	{
		getline(plik, line);
		std::stringstream ss(line);
		ss >> nazwa >> pomI >> wart;
		Produkt p(nazwa, pomI, wart);
		listaProduktow.push_back(p);
	}
	plik >> count;
	plik.ignore(128, '\n');
	for (int i = 0; i < count; i++)
	{
		getline(plik, line);
		std::stringstream ss(line);
		ss >> nazwa >> pom >> wart;
		Nieruchomosc n(nazwa, pom, wart);
		listaNieruchomosci.push_back(n);
	}
	plik >> count;
	plik.ignore(128, '\n');
	for (int i = 0; i < count; i++)
	{
		getline(plik, line);
		std::stringstream ss(line);
		ss >> nazwa >> wart;
		IKE ik(nazwa, wart);
		listaIKE.push_back(ik);
	}
	portfelLokat.setV(listaLokat);
	portfeljU.setV(listajU);
	portfelJdyw.setV(listaJdyw);
	portfelKontraktow.setV(listaKontraktow);
	portfelProduktow.setV(listaProduktow);
	portfelNieruchomosci.setV(listaNieruchomosci);
	portfelIKE.setV(listaIKE);
	plik.close();
}
#include <vector>
#include <iostream>


template <class T> class Portfel
{
	std::vector<T> listaAktyw;
	std::string imie;
	std::string nazwisko;
	double wartosc;
public:
	Portfel();
	Portfel& operator+=(const T& dodaj);
	Portfel& operator-=(const int& index);
	std::vector <T> const &getV();
	double getWartosc();
	void setWartosc(double war);
	void setV(std::vector<T> &w);
	int getSize();
};

template<class T>
Portfel<T>::Portfel()
	{
		imie = "Krzysztof";
		nazwisko = "Pasiewicz";
		wartosc = 0;
	}

template<class T>
Portfel<T>& Portfel<T>::operator+=(const T& dodaj)
	{
		listaAktyw.push_back(dodaj);
		return *this;
	}

template<class T>
Portfel<T>& Portfel<T>::operator-=(const int& index)
	{
		listaAktyw.erase(listaAktyw.begin() + index);
		return *this;
	}

template<class T>
std::vector <T> const & Portfel<T>::getV()
	{
		return listaAktyw;
	}

template<class T>
void Portfel<T>::setV(std::vector<T> &w)
{
	listaAktyw = w;
}

template<class T>
double Portfel<T>::getWartosc()
	{
		return wartosc;
	}

template<class T>
void Portfel<T>::setWartosc(double war)
	{
		wartosc = war;
	}

template<class T>
int Portfel<T>::getSize()
{
	return listaAktyw.size();
}
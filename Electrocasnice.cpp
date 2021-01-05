#include "Electrocasnice.h"

Electrocasnice::Electrocasnice()
{
}

Electrocasnice::Electrocasnice(int cod_pr, float pret, const char* den_pr, int cantitate, float kW)
{
	this->kW = kW;
}

Electrocasnice::Electrocasnice(const Electrocasnice& e)
{
	this->kW = e.kW;
}

Electrocasnice& Electrocasnice::operator=(Electrocasnice& e)
{
	if (this != &e)
	{
		Produse::operator=(p);
		this->kW = e.kW;
	}
	return *this;
}

Electrocasnice::~Electrocasnice()
{
}

ostream& operator<<(ostream& out, Electrocasnice e)
{
	out << "Electrocasnicul: ";
	out << (Produse)e;
	out << "Are consumul electric: " << e.kW;
	return out;
}

istream& operator>>(istream& ios, Electrocasnice& e)
{
	ios >> (Produse)e;
	cout << "Consumul electric: ";
	ios >> e.kW;
	return ios;
}

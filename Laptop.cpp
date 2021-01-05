#include "Laptop.h"

Laptop::Laptop()
{
	this->so_l = new char[strlen("sistem de operare necunoscut") + 1];
	strcpy_s(this->so_l, strlen("sistemde operare necunoscut operare") + 1, "sistem de operare necunoscut");
	this->procesor = new char[strlen("procesor necunoscut") + 1];
	strcpy_s(this->procesor, strlen("procesor necunoscut") + 1, "procesor necunoscut");
	this->mem_l = 0;
}

Laptop::Laptop(int cod_pr, float pret, const char* den_pr, int cantitate, const char* so_l, const char* procesor, int memorie)
{
	this->so_l = new char[strlen(so_l)+1];
	strcpy_s(this->so_l, strlen(so_l) + 1, so_l);
	this->procesor = new char[strlen(procesor) + 1];
	strcpy_s(this->procesor, strlen(procesor) + 1, procesor);
	this->mem_l = memorie;
}

Laptop::Laptop(const Laptop& l)
{
	this->so_l = new char[strlen(l.so_l) + 1];
	strcpy_s(this->so_l, strlen(l.so_l) + 1, l.so_l);
	this->procesor = new char[strlen(l.procesor) + 1];
	strcpy_s(this->procesor, strlen(l.procesor) + 1, l.procesor);
	this->mem_l = l.mem_l;
	
}

Laptop Laptop::operator=(Laptop& l)
{
	if (this != &l)
	{
		if (this->so_l != nullptr)
		{
			delete[] so_l;
		}
		if (this->procesor != nullptr)
		{
			delete[] procesor;
		}
		this->so_l = new char[strlen(l.so_l) + 1];
		strcpy_s(this->so_l, strlen(l.so_l) + 1, l.so_l);
		this->procesor = new char[strlen(l.procesor) + 1];
		strcpy_s(this->procesor, strlen(l.procesor) + 1, l.procesor);
		this->mem_l = l.mem_l;
			
		
	}
	
	return *this;
}

Laptop::~Laptop()
{
	if (this->so_l != nullptr)
	{
		delete[] so_l;
	}
	if (this->procesor != nullptr)
	{
		delete[] procesor;
	}
}

char* Laptop::getSistemOperareLaptop()
{
	return so_l;
}

void Laptop::setSO(char* so_l)
{
	{
		if (so_l != nullptr) {
			delete[] this->so_l;
			this->so_l = new char[strlen(so_l) + 1];
			strcpy_s(this->so_l, strlen(so_l) + 1, so_l);
		}
		else
		{
			throw new exception ("Sistemul de operare nu este unul valid");
		}
	}
}

ostream& operator<<(ostream& out, Laptop l)
{
	out << "\t Laptop:" << endl;
	out << (Produse)l;
	out << "Are sistemul de operare:" << l.so_l << ", preocesorul:" << l.procesor << "si capacitatea memoriei este:" << l.memorie;
	return out;
}

istream& operator>>(istream& ios, Laptop& l)
{
	char aux1[100],aux2[100];
	ios >> (Produse)l;
	cout << "Sistem de operare: ";
	ios >> aux1;
	delete[] l.so_l;
	l.so_l = new char[strlen(aux1) + 1];
	strcpy_s(l.so_l, strlen(aux1) + 1, aux1);
	cout << "Procesor: ";
	ios >> aux2;
	delete[] l.procesor;
	l.procesor = new char[strlen(aux2) + 1];
	strcpy_s(l.procesor, strlen(aux2) + 1, aux2);
	cout << "Memorie: ";
	ios >> l.mem_l;
	return ios;
}



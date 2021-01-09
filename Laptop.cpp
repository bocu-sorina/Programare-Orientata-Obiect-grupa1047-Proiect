#include "Laptop.h"

Laptop::Laptop()

{
	this->so_l = new char[strlen("SO necunoscut") + 1];
	strcpy_s(this->so_l, strlen("SO necunoscut") + 1, "SO necunoscut");
	this->procesor = new char[strlen("procesor necunoscut") + 1];
	strcpy_s(this->procesor, strlen("procesor necunoscut") + 1, "procesor necunoscut");
	this->mem_l = 0;
}



Laptop::Laptop(int cod_pr, float pret, const char* den_pr, int cantitate, const char* so_l, const char* procesor, int mem_l):Produs(cod_pr, pret, den_pr, cantitate)
{
	this->so_l = new char[strlen(so_l)+1];
	strcpy_s(this->so_l, strlen(so_l) + 1, so_l);
	this->procesor = new char[strlen(procesor) + 1];
	strcpy_s(this->procesor, strlen(procesor) + 1, procesor);
	this->mem_l = mem_l;
}

Laptop::Laptop(const Laptop& l) :Produs(l)
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
		Produs::operator=(l);
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

char* Laptop::getDenumireLaptop()
{
	return den_pr;
}

void Laptop::setCod(int cod_pr)
{
	this->cod_pr = cod_pr;

}

void Laptop::setPret(float pret)
{
	this->pret = pret;
}

void Laptop::setDenumire(char* den_pr)
{
	if (den_pr != nullptr) {
		delete[] this->den_pr;
		this->den_pr = new char[strlen(den_pr) + 1];
		strcpy_s(this->den_pr, strlen(den_pr) + 1, den_pr);
	}
	else
	{
		throw new exception("Denumirea este nula.");
	}
}

void Laptop::setSO(char* so_l)
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

void Laptop::setProcesor(char* procesor)
{
	if (procesor!= nullptr) {
		delete[] this->procesor;
		this->procesor = new char[strlen(procesor) + 1];
		strcpy_s(this->procesor, strlen(procesor) + 1, procesor);
	}
	else
	{
		throw new exception("Procesorul nu a fost introdus.");
	}
}

void Laptop::setMemorie(int mem_l)
{
	this->mem_l = mem_l;
}

double Laptop::calculeazaPretDupaDiscount(double discount)
{
	cout << "Discount din laptop" << endl;
	pret -= pret * discount / 100 + 50;
	return pret;
	
}

ostream& operator<<(ostream& out, Laptop l)
{
	out << "\t Laptop:" << endl;
	out << (Produs)l;
	out << "Are sistemul de operare:" << l.so_l << ", preocesorul:" << l.procesor << " si capacitatea memoriei este:" << l.mem_l<<" GB.";
	return out;
}

//istream& operator>>(istream& ios, Laptop& l)
//{
//	char aux1[100],aux2[100];
//	ios >> (Produs)l;
//	cout << "Sistem de operare: ";
//	ios >> aux1;
//	delete[] l.so_l;
//	l.so_l = new char[strlen(aux1) + 1];
//	strcpy_s(l.so_l, strlen(aux1) + 1, aux1);
//	cout << "Procesor: ";
//	ios >> aux2;
//	delete[] l.procesor;
//	l.procesor = new char[strlen(aux2) + 1];
//	strcpy_s(l.procesor, strlen(aux2) + 1, aux2);
//	cout << "Memorie: ";
//	ios >> l.mem_l;
//	return ios;
//}



#include "Tablete.h"



Tablete (int cod_pr , float pret, const char* den_pr, int cantitate, int inch, float* dim) :Produse(cod_pr, pret, den_pr, cantitate)
{
	this->inch = inch;
	if (dim == nullptr && inch <= 0)
		throw new exception("Eroare: dimenziunea este nula sau nr inch este introdus gresit.");
	this->dim = new float[inch] ;
	for (int i = 0, i < inch;i++)
		this->dim[i] = dim[i];
}

Tablete (const Tablete& t) : Produse(p)

{
    this->inch = t.inch;
	this->dim = new float[t.inch];
	for (int i = 0, i < t.inch;i++)
		this->dim[i] = t.dim[i];
}

Tablete::Tablete()
{
	
}


Tablete& Tablete::operator=(Tablete& t)
{
	if (this! =&t)
	{
		delete[] this->dim;
		Produse::operator=(p)
		this->inch = t.inch;
		this->dim = new float[t.inch];
		for (int i = 0, i < t.inch;i++)
		{
			this->dim[i] = t.dim[i];
		}
		
	}
	return *this;
}

Tablete::~Tablete()
{
	if (this->dim != nullptr)
		delete[] this->dim;
}

float* Tablete::getDimensiune()
{
	return dim;
}

void Tablete::setDimensiuni(float* dim, int inch)
{
	if (dim != nullptr && inch > 0)
	{
		this->inch = inch;
		delete[] this->dim;
		this->dim = new float[inch];
		for (int i = 0; i < inch;i++)
		{
			this->dim[i] = dim[i];
		}

	}
	else
		throw new exception("Exceptie: dimensiunea sau inch nu sunt corecte.");
}

Tablete& Tablete::operator[](int index)
{
	
	if (index > 0 && index < cantitate)
	{
		return dim[index];
	}
	else
		throw new exception("Eroare: indexul nu corespunde.");
	
}

ostream& operator<<(ostream& out, Tablete t)
{
	
		out << "\t Tableta: " << endl;
		out << (Produse)t;
		out << "Are nr dim in inch: " << t.inch << ", asadar are urmatoarele dimensiuni:" <<endl;
		for (intt i = 0;i < t.inch;i++)
		{
			out << "Dimensiunea " << i + 1 << ":" << t.dim[i] << endl;
		}
		return out;
	
}

istream& operator>>(istream& ios, Tablete& t)
{
	char aux[100];
	ios >> (Produse)l;
	cout << "nr dim in inch: ";
	ios >> t.inch;
	
	t.dim = new float[t.inch];
	for (int i = 0;i < t.inch;i++)
		t.dim[i] = t.dim[i];
	for (int i = 0;i < t.inch;i++)
	{
		cout << "Dimensiunea " << i + 1 << ":";
		ios >> t.dim[i];
	}
	return ios;
}
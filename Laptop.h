#pragma once
#include<iostream>
#include "Produse.h"
using namespace std;

class Laptop :
    public Produse
{

    char* so_l;
public:
    char* procesor;
    int mem_l;
    Laptop();

    Laptop(int cod_pr, float pret, const char* den_pr, int cantitate, const char* so_l,const char* procesor, int memorie) :Produse(cod_pr, pret, den_pr, cantitate);

    Laptop(const Laptop& l) :Produse(p);
    Laptop operator=(Laptop& l);

    ~Laptop();
    char* getSistemOperareLaptop();

    void setSO(char* so_l);
    friend ostream& operator <<(ostream& out, Laptop l);
    friend istream& operator>>(istream& ios, Laptop& l);
    
    /*Laptop& operator[](int index)
    {
        if (index > 0 && index < cantitate)
        {
            return pret[index];
        }
        else
            throw new exception("Eroare: indexul nu corespunde.");
    }*/




};




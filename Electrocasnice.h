#pragma once
#include<iostream>
#include "Produse.h"

using namespace std;

class Electrocasnice :
    public Produse
{
public:
    float kW;
    Electrocasnice();

    Electrocasnice(int cod_pr, float pret, const char* den_pr, int cantitate,float kW) :Produse(cod_pr, pret, den_pr, cantitate);

    Electrocasnice(const Electrocasnice& e);

    Electrocasnice& operator=(Electrocasnice& e);
    ~Electrocasnice();

    friend ostream& operator <<(ostream& out, Electrocasnice e);
    friend istream& operator>>(istream& ios, Electrocasnice& e);

};


#pragma once
#include "Produs.h"

using namespace std;

class Electrocasnice :
    public Produs
{
public:
    float kW;
    Electrocasnice();

  //  Produs(int cod_pr, float pret, const char* den_pr, int cantitate)

    Electrocasnice(int cod_pr, float pret,const char* den_pr, int cantitate,float kW);

    Electrocasnice(const Electrocasnice& e);

    Electrocasnice& operator=(Electrocasnice& e);

    ~Electrocasnice();

    friend ostream& operator <<(ostream& out, Electrocasnice e);
    //friend istream& operator>>(istream& ios, Electrocasnice& e);

};


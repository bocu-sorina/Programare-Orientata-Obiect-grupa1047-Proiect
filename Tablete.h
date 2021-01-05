#pragma once
#include<iostream>
#include"Produse.h"
using namespace std;


class Tablete :
    public Produse
{

    float* dim;
 public:    
    int inch;

    Tablete();

    Tablete(int cod_pr, float pret, const char* den_pr, int cantitate,int inch,float * dim) :Produse(cod_pr, pret, den_pr, cantitate);


    Tablete(const Tablete& t) : Produse(p);

    Tablete& operator=(Tablete& t);

    ~Tablete();
    float* getDimensiune();

    void setDimensiuni(float* dim, int inch);
    friend ostream& operator <<(ostream& out, Tablete t);
    friend istream& operator>>(istream& ios, Tablete& t);

    Tablete& operator[](int index);
   

};


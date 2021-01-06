#pragma once
#include<iostream>
#include"Produs.h"
using namespace std;


class Tablete :
    public Produs
{

    float* dim;
 public:    
    int inch;

    Tablete();

    Tablete(int cod_pr, float pret, const char* den_pr, int cantitate,int inch,float * dim);


    Tablete(const Tablete& t) ;

    Tablete& operator=(Tablete& t);

    ~Tablete();
    int getCod();

    void setDimensiuni(float* dim, int inch);
    friend ostream& operator <<(ostream& out, Tablete t);
   // friend istream& operator>>(istream& ios, Tablete& t);

  
   

};


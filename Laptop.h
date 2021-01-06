#pragma once
#include<iostream>
#include "Produs.h"
using namespace std;

class Laptop :
    public Produs
{

    char* so_l;
public:
    char* procesor;
    int mem_l;
    Laptop();

    Laptop(int cod_pr, float pret, const char* den_pr, int cantitate,const char* so_l,const char* procesor, int mem_l) ;

    Laptop(const Laptop& l);
        
    Laptop operator=(Laptop& l);

    ~Laptop();
    char* getSistemOperareLaptop();
    char* getDenumireLaptop();
    void setCod(int cod_pr);
    void setPret(float pret);
    void setDenumire(char* den_pr);
    void setSO(char* so_l);
    void setProcesor(char* procesor);
    void setMemorie(int mem_l);
    friend ostream& operator <<(ostream& out, Laptop l);
    //friend istream& operator>>(istream& ios, Laptop& l);
    
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




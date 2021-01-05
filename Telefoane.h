#pragma once
#include<iostream>
#include "Produse.h"
using namespace std;
 

class Telefoane :
    public Produse
{
    char* so_t;
    int camera;
public:
    string sticla;
    char* procesor;
    int mem_t;

    Telefoane();

    Telefoane(int cod_pr, float pret, const char* den_pr, int cantitate, const char* so_t,int camera,string sticla,
        const char* procesor, int mem_t) :Produse(cod_pr, pret, den_pr, cantitate);
    
    Telefoane(const Telefoane& tl) :Produse(p);

    Telefoane& operator= (Telefoane& tl) ;

    ~Telefoane(); 

    char* getSOtelefon();
    int getCamera();
    void setSOtelefon(char* so_t);
    void setCamera(int camera);
    
    friend ostream& operator <<(ostream& out, Telefoane tl);
    friend istream& operator>>(istream& ios, Telefoane& tl);
};


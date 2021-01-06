#pragma once
#include<iostream>
#include "Produs.h"
#include<string>
using namespace std;
 

class Telefoane :
    public Produs
{
    char* so_t;
    int camera;
public:
    string sticla;
    char* procesor;
    int mem_t;

    Telefoane();

    Telefoane(int cod_pr, float pret, const char* den_pr, int cantitate, const char* so_t,int camera,string sticla,const char* procesor, int mem_t) ;
    
    Telefoane(const Telefoane& tl);

    Telefoane& operator= (Telefoane& tl) ;

    ~Telefoane(); 

    char* getSOtelefon();
    int getCamera();
    void setSOtelefon(char* so_t);
    void setCamera(int camera);
    
    friend ostream& operator <<(ostream& out, Telefoane tl);
    //friend istream& operator>>(istream& ios, Telefoane& tl);
};


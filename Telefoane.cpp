#include "Telefoane.h"

Telefoane::Telefoane()
{
    this->so_t = new char[strlen("sistem de operare necunoscut") + 1];
    strcpy_s(this->so_t, strlen("sistemde operare necunoscut operare") + 1, "sistem de operare necunoscut");
    this->procesor = new char[strlen("procesor necunoscut") + 1];
    strcpy_s(this->procesor, strlen("procesor necunoscut") + 1, "procesor necunoscut");
   
}

Telefoane::Telefoane(int cod_pr, float pret, const char* den_pr, int cantitate, const char* so_t,int camera,string sticla, const char* procesor, int mem_t)

{
    {
        this->so_t = new char[strlen(so_t) + 1];
        strcpy_s(this->so_t, strlen(so_t) + 1, so_t);

        this->camera = camera;

        this->sticla = sticla;

        this->procesor = new char[strlen(procesor) + 1];
        strcpy_s(this->procesor, strlen(procesor) + 1, procesor);
        this->mem_t = mem_t;

    }
}

Telefoane::Telefoane(const Telefoane& tl)
{
    this->so_t = new char[strlen(tl.so_t) + 1];
    strcpy_s(this->so_t, strlen(tl.so_t) + 1, tl.so_t);

    this->camera = tl.camera;

    this->sticla = tl.sticla;

    this->procesor = new char[strlen(tl.procesor) + 1];
    strcpy_s(this->procesor, strlen(tl.procesor) + 1, tl.procesor);
    this->mem_t = tl.mem_t;
}



Telefoane& Telefoane::operator=(Telefoane& tl)
{
    if (this != &tl)
    {
        if (this->so_t != nullptr)
        {
            delete[] so_t;
        }
        if (this->procesor != nullptr)
        {
            delete[] procesor;
        }
        Produse::operator=(p);
        this->so_t = new char[strlen(tl.so_t) + 1];
        strcpy_s(this->so_t, strlen(tl.so_t) + 1, tl.so_t);

        this->camera = tl.camera;

        this->sticla = tl.sticla;

        this->procesor = new char[strlen(tl.procesor) + 1];
        strcpy_s(this->procesor, strlen(tl.procesor) + 1, tl.procesor);
        this->mem_t = tl.mem_t;
    }
    return *this;
}

Telefoane::~Telefoane()
{
    if (this->so_t != nullptr)
    {
        delete[] so_t;
    }
    if (this->procesor != nullptr)
    {
        delete[] procesor;
    }
}

char* Telefoane::getSOtelefon()
{
    return so_t;
}

int Telefoane::getCamera()
{
    return camera;
}

void Telefoane::setSOtelefon(char* so_t)
{
    if (so_t != nullptr) {
        delete[] this->so_t;
        this->so_t = new char[strlen(so_t) + 1];
        strcpy_s(this->so_t, strlen(so_t) + 1, so_t);
    }
    else
    {
        throw new exception("SO primit ca input este nullptr.");
    }
}

void Telefoane::setCamera(int camera)
{
    this->camera = camera;
}

ostream& operator<<(ostream& out, Telefoane tl)
{
    out << "\t Telefonul:" << endl;
    out << (Produse)tl;
    out << "Are sistemul de operare:" << tl.so_t << ",camera: "<<tl.camera<<", sticla"<<tl.sticla<<", procesorul:" << tl.procesor 
        << "si capacitatea memoriei este:" << tl.mem_t;
    return out;
}

istream& operator>>(istream& ios, Telefoane& tl)
{
    char aux3[100], aux4[100];
    ios >> (Produse)tl;
    cout << "Sistem de operare: ";
    ios >> aux3;
    delete[] tl.so_t;
    tl.so_t = new char[strlen(aux3) + 1];
    strcpy_s(tl.so_t, strlen(aux3) + 1, aux3);
    cout << "Camera: ";             ios >> tl.camera;
    cout << "Tipul de sticla: ";   ios >> tl.sticla;
    cout << "Procesor: ";
    ios >> aux4;
    delete[] tl.procesor;
    tl.procesor = new char[strlen(aux4) + 1];
    strcpy_s(tl.procesor, strlen(aux4) + 1, aux4);
    cout << "Memorie: ";
    ios >> tl.mem_t;
    return ios;
}
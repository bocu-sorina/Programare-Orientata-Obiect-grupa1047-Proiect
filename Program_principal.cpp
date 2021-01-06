#include<iostream>
#include<string>
#include "Magazin.h"
#include "Produs.h"
#include "Electrocasnice.h"
#include "Laptop.h"
#include "Tablete.h"
#include "Telefoane.h"

using namespace std;

int main()
{
	Produs p1, p2;
	Produs p3(1000, 499.99, "Aragaz", 50);
	Produs p4(2000, 999.99, "Frigider", 50);
	cout << p1 << endl << p2 << endl << p3 << endl << p4 << endl;
	cout << "operator = din produs"<<endl;
	p1 = p3;
	cout << "p1 este:\t" << p1<<endl;
	cout << "Constructor de copiere din produs "<<endl;
	Produs p5 = p4;
	cout << "p5 este:\t" << p5 << endl;
	//------------------Electrocasnice------------------------------------
	cout << endl << endl << "Constructor & defalt din electrocasnice" << endl;
	Electrocasnice e1, e2; 
	Electrocasnice e3(1111, 499.9, "Microunde", 30, 750.5);
	Electrocasnice e4(2222, 1099.9, "Combina_frigorifica", 20, 900.9);
	cout << "e1:  " << e1 << endl << "e2:   " << e2 << endl << "e3:   " << e3 << endl << "e4:   " << e4 << endl;
	cout << "constructor de copiere din electrocasnice:" << endl;
	Electrocasnice e5 = e3;
	cout << "e5:   " << e5 << endl;
	cout << "operator = din electrocasnice: "<<endl;
	e1 = e3;
	cout << "e1 dupa op=:  " << e1 << endl;

	
	//----------------------Laptop-----------------------------------------

	cout << endl << endl << "Constructor & defalt din laptop" << endl;
	Laptop l1,l2;
	Laptop l3(1222, 3299.99, "Laptop HP", 70, "Free DOS","AMD Ryzen",8);
	Laptop l4(1333, 1999.99, "Laptop Lenovo", 50, "Free DOS", "AMD Ryzen", 4);
	cout << "l1:  " << l1 << endl << "l2:   " << l2 << endl << "l3:   " << l3 << endl << "l4:   " << l4 << endl;
	cout << "constructor de copiere din laptop:" << endl;
	Laptop l5 = l3;
	cout << "l5:   " << l5 << endl;
	cout << "operator = din laptop: " << endl;
	l1 = l3;
	cout << "l1 dupa op=:  " << l1 << endl;

	cout << "Getteri si setteri" << endl;
	cout << "Sistemul de operare al laptopului: "<<l3.getDenumireLaptop()<<" este: " << l3.getSistemOperareLaptop() << endl;
	l2.setCod(1234);
	char den[] = { "Laptop Asus" };
	l2.setDenumire(den);
	l2.setMemorie(32);
	l2.setPret(1259.99);
	char proc[] = { "Intel Celeron " };
	l2.setProcesor(proc);
	char so[] = { "Windows 10 Pro" };
	l2.setSO(so);
	cout << "l2 dupa setteri: " << endl << l2 << endl;
	////-------------------------Tablete--------------------------------------
	cout << endl << endl << "Constructor & defalt din tablete" << endl;
	Tablete t1, t2;
	float d1[] = { 5.2,7.5,0.1 };
	Tablete t3(1122, 600.99, "Tableta Lenovo", 40, 3,d1);
	float d2[] = { 4.5,6.7,0.1 };
	Tablete t4(1133, 1200.99, "Tableta Samsung Galaxy", 60, 3,d2);
	cout << "t1:  " << t1 << endl << "t2:   " << t2 << endl << "t3:   " << t3 << endl << "t4:   " << t4 << endl;
	cout << "constructor de copiere din tablete:" << endl;
	Tablete t5 = t3;
	cout << "t5:   " << t5 << endl;
	cout << "operator = din tablete: " << endl;
	t1 = t3;
	cout << "t1 dupa op=:  " << t1 << endl;
	cout << endl << endl << "Getteri si setteri:" << endl;
	float dim[] = { 3.2,5.3,0.2,6.5,7.2 };
	cout << "Pentru produsul cu codul: " << t4.getCod() << " setati dimensiunile :"<< endl;
	t4.setDimensiuni (dim, 3);
	cout << t4;
	////---------------------------Telefoane--------------------------------------

	cout << endl << endl << "Constructor & defalt din Telefoane" << endl;
	Telefoane tl1, tl2;
	Telefoane tl3(1112, 700.01, "Samsung Galaxy A10", 80, "Android 9",10 , "LCD" ,"Samsung Exynos", 32);
	Telefoane tl4(1113, 3199.99, "Apple iPhone 11", 90, "iOS12",12,"IPS", "Apple A12 Bionic", 64);
	cout << "tl1:  " << tl1 << endl << "tl2:   " << tl2 << endl << "tl3:   " << tl3 << endl << "tl4:   " << tl4 << endl;
	cout << "constructor de copiere din telefoane:" << endl;
	Telefoane tl5 = tl3;
	cout << "tl5:   " << tl5 << endl;
	cout << "operator = din telefoane: " << endl;
	tl1 = tl3;
	cout << "tl1 dupa op=:  " << tl1 << endl;
	cout << endl << endl << "Getteri si setteri:" << endl;
	cout << " tl3 are sistemul de operare: " << tl3.getSOtelefon() << " si camera: " << tl3.getCamera() <<" MP."<< endl;
	tl1.setCamera(15);
	char so2[] = { "Android" };
	tl1.setSOtelefon(so2);
	cout << "tl1 dupa setteri:  " << tl1 << endl;

}
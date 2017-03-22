#pragma once
#include <iostream>
#include <string>
#include "facilities.h"
#include "specs.h"
#include "wheel.h"
using namespace std;



//ten plika zawiera atrybuy i metody

class Bike
{
public:
	Bike(const Bike &bike); //konstruktor kopij�cy
	Bike(string="Romet", string="Wigry 2", int=1000, int=80);
	~Bike();
	void show_number();
	void description();
	void change_name();
	void change_model();
	void full_DSC();
//	void dodaj_kolo(string nazwa_s);
	static int number_of_objects;

	Bike& operator = (const Bike &bike); //opertor przypisuj�cy ocen�, nazw� i model drugiemu rowerowi
	Bike operator + (const Bike &bike); //operator dodaj�cy cen� jednego rowera do drugiego
	bool operator == (const Bike &bike); // operator sprawdzaj�cy czy dwa rowery s� takie same
	bool operator < (const Bike &bike); // op. por�wnuj�cy dwa r�ne rowery
	bool operator > (const Bike &bike); //operator sprawdzajacy czy rower (wywo�any w sk�adni po lewej ma wi�ksz� cen� od wywa�anego w kodzie po prawej
	Bike& operator ++ (int); //zwi�ksza cen�
	Bike& operator -- (int); //zwi�ksza cen� o 300, zmniejsza ocen�
	operator int() const;
	friend std::istream & operator >> (std::istream &is, Bike &bike);
	friend std::ostream & operator << (std::ostream &os, const Bike &bike);
	

private:
	
	Specs specs;
	Facilities facilities;
	Wheel *wheel;
	string model;
	string nazwa;
	int metascore;
	int price;

	


	
	Bike& operator += (const Bike &bike);
	Bike& operator -= (const Bike &bike);
	Bike& operator *= (const Bike &bike);

	
};


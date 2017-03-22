#pragma once
#include <iostream>
#include <string>
#include "facilities.h"
#include "specs.h"
#include "wheel.h"
#include <cstdio>
using namespace std;



//ten plika zawiera atrybuy i metody

class Bike
{
public:
	Bike(const Bike &bike); //konstruktor kopij�cy
	Bike(string="Romet", string="Wigry 2", int=1000, int=4);
	~Bike();
	void show_number();
	void description();
	void change_name();
	void change_model();
	void full_DSC();
	static int number_of_objects;

	Bike& operator = (const Bike &bike); //opertor przypisuj�cy ocen�, nazw� i model drugiemu rowerowi
	Bike operator + (const Bike &bike); //operator dodaj�cy cen� jednego rowera do drugiego
	bool operator == (const Bike &bike); // operator sprawdzaj�cy czy dwa rowery s� takie same
	bool operator < (const Bike &bike); // op. por�wnuj�cy dwa r�ne rowery
	bool operator > (const Bike &bike); //operator sprawdzajacy czy rower (wywo�any w sk�adni po lewej ma wi�ksz� cen� od wywa�anego w kodzie po prawej
	Bike& operator ++ (int); //zwi�ksza cen�
	Bike& operator -- (int); //zwi�ksza cen� o 300, zmniejsza ocen�
	friend std::ostream & operator << (std::ostream &os, const Bike &bike);
	operator int() {return price;} //operator rzutowania


private:
	
	int price; 
	Specs specs;
	Facilities facilities;
	Wheel *wheel=nullptr;
	string model;
	string name;
	int metascore;
	
};


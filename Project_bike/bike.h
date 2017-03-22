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
	Bike(const Bike &bike); //konstruktor kopij¹cy
	Bike(string="Romet", string="Wigry 2", int=1000, int=80);
	~Bike();
	void show_number();
	void description();
	void change_name();
	void change_model();
	void full_DSC();
//	void dodaj_kolo(string nazwa_s);
	static int number_of_objects;

	Bike& operator = (const Bike &bike); //opertor przypisuj¹cy ocenê, nazwê i model drugiemu rowerowi
	Bike operator + (const Bike &bike); //operator dodaj¹cy cenê jednego rowera do drugiego
	bool operator == (const Bike &bike); // operator sprawdzaj¹cy czy dwa rowery s¹ takie same
	bool operator < (const Bike &bike); // op. porównuj¹cy dwa ró¿ne rowery
	bool operator > (const Bike &bike); //operator sprawdzajacy czy rower (wywo³any w sk³adni po lewej ma wiêksz¹ cenê od wywa³anego w kodzie po prawej
	Bike& operator ++ (int); //zwiêksza cenê
	Bike& operator -- (int); //zwiêksza cenê o 300, zmniejsza ocenê
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


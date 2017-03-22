#include <iostream>
#include <string>
#include "bike.h"
#include "specs.h"
#include "facilities.h"

using namespace std;


int Bike::number_of_objects = 0;



Bike::Bike(string x, string y, int z, int w)
{
#ifdef _DEBUG  
	cout << "Wywolano domyslny konstruktor Rower" << endl;
#endif
	 name=x;
	 model=y;
	 price=z;
	 metascore=w;
	 wheel = new Wheel[metascore];
	++number_of_objects;

}

Bike::~Bike()
{
#ifdef _DEBUG
	cout << "Wywolano domyslny destruktor Rower" << endl;
#endif
	--number_of_objects;
	if(wheel!=NULL)
		delete[]wheel;
}

void Bike::full_DSC()
{
	string pelna_nazwa;
	pelna_nazwa = name + string(" ") + model;
	cout << "Pelna nazwa urzadzenia: " << pelna_nazwa << endl;
}


Bike::Bike(const Bike &bike)
{
	 
	specs = bike.specs;
	facilities = bike.facilities;
	model = bike.model;
	name = bike.name;
	metascore = bike.metascore;
	price = bike.price;
	
	if (bike.wheel != nullptr)
	{
		wheel = new Wheel[metascore];
		for (int i = 0; i < metascore; i++)
			wheel[i] = bike.wheel[i];
	}
	else
		wheel = nullptr;
}

void Bike::description()
{ 
	cout << "1.Producent:  " << name << endl << "2.Model:  " << model << endl << "3.Cena:  " << price << endl << "3.Ocena:  " << metascore << endl;
	cout << "_________________________________"<<endl<<endl;
}

void Bike::change_name()
{
	cout << "Podaj nowego producenta:  ";
	cin >> name;
	cout << "Zmienione producenta" << endl;
}
void Bike::change_model()
{
	cout << "Podaj nowy model:  ";
	cin >> model;
	cout << "Zmieniono model" << endl;
	
}

void Bike::show_number()
{
	if(number_of_objects==1)
	{
		cout << "Powstal " << number_of_objects << " obiekt." << endl;
	}
	else if(number_of_objects <= 4)
	{
		cout << "Powstalo " << number_of_objects << " obiekty." << endl;
	}
	else { cout << "Powstalo " << number_of_objects << " obiektow." << endl; }

	cout << endl << "Nacisnij klawisz [ENTER] aby kontynuowac." << endl;
	cout << "_________________________________________" << endl;
	getchar();
}

bool Bike::operator==(const Bike &bike)
{
	if (bike.model == model && bike.name == name) return true;
	else
		return false;

}

bool Bike::operator>(const Bike &bike)
{
	if (bike.price > price && bike.metascore > metascore) return true;
	else
		return false;

}

bool Bike::operator<(const Bike &bike)
{
	if (bike.price < price || bike.metascore < metascore && bike.model != model && bike.name != name) return true;
	else
		return false;

}


Bike & Bike::operator ++ (int)
{

	price +=100;
	return *this;
}

Bike & Bike::operator -- (int)
{
	if (metascore != 0 && price != 0)
	price += 400;
	metascore -= 1;
	return *this;
}

Bike Bike::operator + (const Bike &bike)
{
	price += bike.price;
	return *this;

}

Bike & Bike::operator = (const Bike &bike)
{
	name = bike.name;
	model = bike.model;

	return *this;
}

std::ostream & operator << (std::ostream &os, const Bike &bike)
{
	os << "1.Producent:  " << bike.name << endl << "2.Model:  " << bike.model << endl << "3.Cena:  " << bike.price << endl << "3.Ocena:  " << bike.metascore << endl << "_________________________________" << endl;
	return os;
}



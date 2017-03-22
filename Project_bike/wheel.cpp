#include <iostream>
#include <string>
#include "wheel.h"
using namespace std;

int Wheel::number_of_wheels=0;

Wheel::~Wheel()
{
#ifdef _DEBUG
	cout << "Wywolano domyslny destruktor Kolo" << endl;
#endif
}

Wheel::Wheel(string x, string y, int z, int w, int p)
{
#ifdef _DEBUG
	cout << "Wywolano domyslny konstruktor Kolo" << endl;
#endif
	brakes= x;
	tyres= y;
	ray= z;
	width= w;
	pressure=p;

}


void Wheel::change_tyre() 
{
	cout << "Pomyslnie zmieniono opone" << endl;
}
void Wheel::pump_tyre()
{
	int x;
	x = pressure;
	cout << "Wybierz poziom cisnienia w detce od 1 do 10" << endl;
	cin >> pressure;
	if (pressure >= 1 && pressure<=10)
	{
		cout << "Cisnienie w kole ustawione na  " << pressure << endl;

	}
	else 
	{
		cout << "Podano zle dane, wartosc cisnienia wrocila do wartosci poczatkowej" << endl;
		pressure = x;
	}

}
#include <iostream>
#include <string>
#include "specs.h"
using namespace std;



Specs::Specs(float x, float y, string z)
{
#ifdef _DEBUG  
	cout << "Wywolano domyslny konstruktor Specyfikacja" << endl;
#endif
	 max_speed = x;
	 weight =y;
	 type = z;

}

Specs::~Specs()
{
#ifdef _DEBUG
	cout << "Wywolano domyslny destruktor Specyfikacja" << endl;
#endif
}

void Specs::change_type()
{
	int x;
	cout << "Wybierz numer typu na jaki chcesz zmienic rower:" << endl << "  1. Gorski" << endl << "  2. Szosowy" << endl;
	cout << "  3. Kolarka" << endl << "  4. BMX" << endl << "  5. Elektryczny " << endl << "  6. Inne (podaj)" << endl;
	cin >> x;
	switch (x)
	{
	case 1:
		
		type = "Gorski";
		break;

	case 2:
		
		type = "Szosowy";
		break;

		//...
	case 3:
		
		type = "Kolarka";
		break;

	case 4:
		
		type = "BMX";
		break;

	case 5:
		
		type = "Elektryczny";
		break;
	case 6:
		
		cin >> type;
		break;


	default:
		
		cout << "PODANO BLEDNE DANE!";
		break;
};
};

void  Specs::change_max_speed()
{
	cout << "Wpisz nowa maskymalna predkosc(km/h):" << endl;
	cin >> max_speed;
	
};
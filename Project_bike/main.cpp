#include <iostream>
#include <ostream>
#include <string>
#include "bike.h"
#include "facilities.h"
#include "specs.h"
#include "wheel.h"
#include <cstdio> //zatrzymywanie konsoli
using namespace std;

void show_assistant()
{
	cout << endl << "Nacisnij klawisz [ENTER] aby kontynuowac." << endl;
	cout << "_________________________________________" << endl;
	getchar();
}

int main()
{
	
	Bike kross("Kross", "Namtec", 5000);
	Bike trek("Trek", "3700", 1650);
	Bike model_1;
	
	//Kopiowanie obiektu
	Bike kopiaObiektu(trek); 
	cout << "Skopiowano obiekt trek" << endl << "--------" << endl;
	trek.description();
	cout << "Obiekt skopiowany:" << endl << "--------" << endl;
	kopiaObiektu.description();
	

	show_assistant();
	kopiaObiektu.show_number();


	cout << "TESTOWANIE OPERATOROW" << endl << "********************" << endl;
	//1.Operator ==
	cout << "Testowanie operatora ==" << endl;
	if (trek == kross)
		cout << " == true" << endl;
	else
		cout << " == false" << endl;
	show_assistant();
	//2.Operator <
	cout << "Testowanie operatora <" << endl;
	if (trek < kross)
		cout << " < true" << endl;
	else
		cout << " < false" << endl;
	show_assistant();
	//3.Operator >
	cout << "Testowanie operatora >" << endl;
	if (trek > kross)
		cout << " > true" << endl;
	else
		cout << " > false" << endl;
	show_assistant();
	//4.Operator++
	cout << "Testowanie operatora ++" << endl;
	kross++;
	kross.description();
	show_assistant();
	//5.Operator--
	cout << "Testowanie operatora ++" << endl;
	model_1--;
	model_1.description();
	show_assistant();
	//6.Operator +
	cout << "Testowanie operatora +" << endl;
	model_1 + kross;
	model_1.description();
	show_assistant();
	//7.Operator =
	cout << "Testowanie operatora =" << endl;
	model_1 = kross;
	model_1.description();
	show_assistant();
	//8.Operator <<
	cout << "Testowanie operatora <<" << endl; 
	cout << model_1; 
	show_assistant();
	//9.Operator rzutowania
	cout << "Testowanie operatora rzutowania" << endl;
	cout << (int)kross << endl; 
	show_assistant();

	

	return 0;
	
}
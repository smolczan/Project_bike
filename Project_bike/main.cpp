#include <iostream>
#include <ostream>
#include <string>
#include "bike.h"
#include "facilities.h"
#include "specs.h"
#include "wheel.h"
#include <cstdio> //zatrzymywanie konsoli
using namespace std;

int main()
{
	int x;
	cout << "Podaj ile rowerow stworzyc " << endl;
	cin >> x;
	Bike *rowerek = new Bike[x]; //dynamiczne tworzenie obiketów

	Bike kross("Kross", "Namtec", 5000);
	Bike trek("Trek", "3700", 1650, 85), model_1;
	cout<<trek ; //operator wyjscia
	getchar();

	

	Bike kopiaObiektu(trek); //próba kopi obiektu
	cout << trek;
	cout << "Skopiowano obiekt trek" << endl;
	cout << "Obiekt skopiowany" << endl;
	cout << kopiaObiektu;
	cout << endl;



	cout << endl << "Nacisnij klawisz [ENTER] aby kontynuowac." << endl;
	cout << "_________________________________________" << endl;
	getchar();


	cout << "Testowanie operatorow" << endl;
	//Operator ==
	cout << "Testowanie operatora ==" << endl;
	if (trek == kross)
		cout << " == true" << endl;
	else
		cout << " == false" << endl;
	//Operator <
	cout << "Testowanie operatora <" << endl;
	if (trek < kross)
		cout << " < true" << endl;
	else
		cout << " < false" << endl;
	//Operator >
	cout << "Testowanie operatora >" << endl;
	if (trek > kross)
		cout << " > true" << endl;
	else
		cout << " > false" << endl;
	//Operator++
	cout << "Testowanie operatora ++" << endl;
	kross++;//zwiêksza wartosc
	cout<<kross;
	//Operator--
	cout << "Testowanie operatora ++" << endl;
	model_1--;//zwiêksza wartosc
	model_1.description();
	//Operator +
	cout << "Testowanie operatora +" << endl;
	model_1 + kross;
	model_1.description();
	//Operator -
	cout << "Testowanie operatora -" << endl;
	model_1 = kross;
	model_1.description();


	

	cout << endl << "Nacisnij klawisz [ENTER] aby kontynuowac." << endl;
	cout << "_________________________________________" << endl;
	kopiaObiektu.show_number(); //sprawdzenie ile rowerow powsta³o
	getchar();
	delete rowerek;
	return 0;
}
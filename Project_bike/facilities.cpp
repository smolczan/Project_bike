#include <iostream>
#include <string>
#include "facilities.h"

using namespace std;



Facilities::~Facilities()
{
#ifdef _DEBUG
	cout << "Wywolano domyslny destruktor Ulepszenia" << endl;
#endif
}

Facilities::Facilities(string x, string y, int z, int w)
{
#ifdef _DEBUG
	cout << "Wywolano domyslny konstruktor Ulepszenia" << endl;
#endif
	seat = x;
	shock= y;
	derailleur = z;
	lights = w;
}



void Facilities::change_derailleur() 
{
};
void Facilities::light_light()
{
};;
void Facilities::turn_off_light()
{
};;
#pragma once
#include <iostream>
#include <string>

using namespace std;

class Facilities
{
public:
	Facilities(string = "Kolarskie", string = "brak", int = 21, int = 2);
	~Facilities();
	void change_derailleur();
	void light_light();
	void turn_off_light();

private:
	int derailleur; //przerzutki
	int lights;
	string seat;
	string shock; //amortyzatory
};


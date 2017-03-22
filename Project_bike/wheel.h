#pragma once
#include <iostream>
#include <string>

using namespace std;

class Wheel
{
public:
	Wheel(string="Tarczowe", string="Basic", int=12, int=7, int=5);
	~Wheel();
	void change_tyre();
	void pump_tyre();
	static int number_of_wheels;

private:
	int ray; //promieñ ko³a
	int width;
	int pressure;
	string brakes;
	string tyres;


};


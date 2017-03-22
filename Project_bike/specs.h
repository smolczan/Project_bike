#pragma once
#include <iostream>
#include <string>

using namespace std;

class Specs
{
public:
	Specs(float=25, float=6.5, string="Basic");
	~Specs();
	void change_type();
	void change_max_speed();
private:
	float max_speed;
	float weight;
	string type;
	

};


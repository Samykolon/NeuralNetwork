#pragma once

#include <iostream>
using namespace std;

class Neuron {

public:

	Neuron(double _value);

	void activate();
	void derive();

	double getValue() { return this->value; }
	double getActivatedValue() { return this->activationvalue; }
	double getDerivedValue() { return this->derivedvalue; }



private:
	double value;
	double activationvalue;
	double derivedvalue;


};

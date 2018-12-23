#include "Neuron.h"

Neuron::Neuron(double _value)
{
	this->value = _value;
	activate();
	derive();
}

void Neuron::activate()
{
	this->activationvalue = this->value / (1 + abs(this->value));
}

void Neuron::derive()
{
	this->derivedvalue = this->activationvalue * (1 - this->activationvalue);
}

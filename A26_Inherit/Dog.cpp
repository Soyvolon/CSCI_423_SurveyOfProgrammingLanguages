#include "Dog.h"
#include <iostream>
using namespace std;

Dog::Dog(string name, double weight, string breed) : Animal(name, weight)
{
	this->breed = breed;
}

string Dog::getBreed() const
{
	return this->breed;
}

void Dog::digHole() const
{
	cout << "I'm digging a hole" << endl;
}

string Dog::makeNoise() const
{
	return "Woof!";
}

void Dog::chaseCat() const
{
	cout << "Here kitty, kitty!" << endl;
}
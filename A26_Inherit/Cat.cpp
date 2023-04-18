#include "Cat.h"
#include <iostream>
using namespace std;

void Cat::chaseMouse() const
{
	cout << "Here mousy, mousy!" << endl;
}

string Cat::makeNoise() const
{
	return "Meow!";
}
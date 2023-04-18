#pragma once
#include "Animal.h"
class Cat :
    public Animal
{
public:
    Cat(string name, double weight) : Animal(name, weight) {}
    void chaseMouse() const;
    string makeNoise() const;
};


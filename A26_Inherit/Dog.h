#pragma once
#include "Animal.h"
#include <string>
using namespace std;

class Dog :
    public Animal
{
public:
    Dog(string name, double weight, string breed);
    string getBreed() const;
    void digHole() const;
    string makeNoise() const;
    void chaseCat() const;
private:
    string breed;
};


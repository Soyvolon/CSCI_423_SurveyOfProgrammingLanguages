#pragma once
#include <string>
using namespace std;

class Animal
{
public:
	Animal(string name, double weight);
	string getName() const;
	double getWeight() const;
	void setName(string name);
	void setWeight(double weight);
	string makeNoise() const;

private:
	string name;
	double weight;
};


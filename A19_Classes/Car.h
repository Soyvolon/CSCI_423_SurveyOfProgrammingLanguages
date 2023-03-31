#pragma once
#include <string>

class Car
{
private:
	int miles;
	std::string make;
	std::string model;

public:
	Car(int miles, std::string make, std::string model);
	int getMiles();
	void setMiles(int miles);
	std::string getMake();
	void setMake(std::string make);
	std::string getModel();
	void setModel(std::string model);
};


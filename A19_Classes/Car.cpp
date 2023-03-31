#include "Car.h"
#include <string>

Car::Car(int miles, std::string make, std::string model)
{
	this->miles = miles;
	this->make = make;
	this->model = model;
}

int Car::getMiles()
{
	return this->miles;
}

std::string Car::getMake()
{
	return this->make;
}

std::string Car::getModel()
{
	return this->model;
}

void Car::setMiles(int miles)
{
	this->miles = miles;
}

void Car::setMake(std::string make)
{
	this->make = make;
}

void Car::setModel(std::string model)
{
	this->model = model;
}